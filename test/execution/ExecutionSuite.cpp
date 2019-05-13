#include "gtest/gtest.h"

#include <map>

#include "expressions/Literal.h"
#include "expressions/AttributeReference.h"
#include "expressions/Comparison.h"

#include "operators/Scan.h"
#include "operators/Project.h"
#include "operators/Filter.h"

#include "catalog/Catalog.h"
#include "catalog/RelationReference.h"

#include "execution/QueryExecutor.h"

#include "MemoryPool.h"

#include "test/utils/TestCatalog.h"
#include "test/utils/TestScan.h"

using namespace simplesql;
using namespace simplesql::expressions;
using namespace simplesql::operators;
using namespace simplesql::catalog;
using namespace simplesql::execution;
using namespace simplesql::test;
using namespace std;



class ExecutionSuite : public testing::Test {
public:
    ExecutionSuite() {
        qe = new QueryExecutor(new TestCatalog());
    }
    ~ExecutionSuite() {
        delete qe;
    }
    QueryExecutor* qe;

    template<int rows, int columns>
    void assertResult(const Relation& result, AnyValue* answer[rows][columns] ) {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++) {
                ASSERT_TRUE(result.rows[i][j]->equalToSemantically(answer[i][j]));
                delete answer[i][j];
            }
    }
    std::vector<ExpressionBase *> buildExprList(int n, ...) {
        std::vector<ExpressionBase *> list;
        va_list ap;
        va_start(ap, n);
        ExpressionBase* tmp = nullptr;
        for (int i = 0; i < n; i++) {
            tmp = va_arg(ap, ExpressionBase*);
            list.push_back(tmp);
        }
        va_end(ap);
        return list;
    }
};

TEST_F(ExecutionSuite, Q1) {
    // SELECT A1, A4 FROM A WHERE A3 = TRUE
    Relation result;
    OperatorBase* query = 
        new Project(
            buildExprList(2, new AttributeReference("A1"), new AttributeReference("A4")),
            new Filter(
                new EqualTo(new AttributeReference("A3"), Literal::create(true)),
                new TestScan(new RelationReference("A"), true)
        ));
    qe->executeTree(query, result);
    AnyValue* answer[2][2] = {
        {IntegerValue::create(1), StringValue::create(string("a1"))},
        {IntegerValue::create(2), StringValue::create(string("a2"))}
    };
    assertResult<2, 2>(result, answer);
}