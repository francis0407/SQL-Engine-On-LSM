#include "gtest/gtest.h"

#include <map>

#include "expressions/Literal.h"
#include "expressions/AttributeReference.h"
#include "expressions/Comparison.h"

#include "operators/Scan.h"
#include "operators/Project.h"
#include "operators/Filter.h"
#include "operators/Join.h"

#include "catalog/Catalog.h"
#include "catalog/RelationReference.h"

#include "execution/QueryExecutor.h"

#include "MemoryPool.h"

#include "test/util/TestCatalog.h" 
#include "test/util/TestScan.h"

using namespace simplesql;
using namespace simplesql::expressions;
using namespace simplesql::operators;
using namespace simplesql::catalog;
using namespace simplesql::execution;
using namespace simplesql::test;
using namespace std;



class QueryExecutorSuite : public testing::Test {
public:
    QueryExecutorSuite() {
        qe = new QueryExecutor(new TestCatalog());
    }
    ~QueryExecutorSuite() {
        delete qe;
    }
    QueryExecutor* qe;

    template<size_t rows, size_t columns>
    void assertResult(const Relation& result, AnyValue* answer[rows][columns] ) {
        ASSERT_EQ(result.columns, columns);
        ASSERT_EQ(result.rows.size(), rows);
        for (size_t i = 0; i < rows; i++)
            for (size_t j = 0; j < columns; j++) {
                ASSERT_TRUE(result.rows[i]->values[j]->equalToSemantically(answer[i][j]));
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

TEST_F(QueryExecutorSuite, SP) {
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

TEST_F(QueryExecutorSuite, SPJ) {
    // natrual join 

    // SELECT A1, A4, B4  
    // FROM   A, B
    // WHERE  A1 = B1
    Relation result;
    OperatorBase* query =
        new Project(
            buildExprList(3, new AttributeReference("A1"), new AttributeReference("A4"), new AttributeReference("B4")),
            new InnerJoin(
                new TestScan(new RelationReference("A"), true),
                new TestScan(new RelationReference("B"), false),
                BuildLeft,
                new EqualTo(new AttributeReference("A1"), new AttributeReference("B1"))
            )
        );
    qe->executeTree(query, result);
    AnyValue* answer[3][3] = {
        {IntegerValue::create(1), StringValue::create(string("a1")), StringValue::create(string("b1"))},
        {IntegerValue::create(2), StringValue::create(string("a2")), StringValue::create(string("b2"))},
        {IntegerValue::create(3), StringValue::create(string("a3")), StringValue::create(string("b3"))}
    };   
    assertResult<3, 3>(result, answer);
}

TEST_F(QueryExecutorSuite, SPJ2) {
    // SELECT A1, B1, A3
    // FROM   A, B
    // WHERE  A3 = B3

    Relation result;
    OperatorBase* query =
        new Project(
            buildExprList(3, new AttributeReference("A1"), new AttributeReference("B1"), new AttributeReference("A3")),
            new InnerJoin(
                new TestScan(new RelationReference("A"), true),
                new TestScan(new RelationReference("B"), false),
                BuildRight,
                new EqualTo(new AttributeReference("A3"), new AttributeReference("B3"))
            )
        );
    qe->executeTree(query, result);
    AnyValue* answer[5][3] = {
        {IntegerValue::create(1), IntegerValue::create(1), BooleanValue::create(true)},
        {IntegerValue::create(1), IntegerValue::create(2), BooleanValue::create(true)},
        {IntegerValue::create(2), IntegerValue::create(1), BooleanValue::create(true)},
        {IntegerValue::create(2), IntegerValue::create(2), BooleanValue::create(true)},
        {IntegerValue::create(3), IntegerValue::create(3), BooleanValue::create(false)},
    };
    assertResult<5, 3>(result, answer);
}

TEST_F(QueryExecutorSuite, SelfJoin) {
    // Self join
    // SELECT A.A1, A.A4, C.A4
    // FROM   A, A AS C
    // WHERE  A.A1 = C.A1
    // AND    A.A3 = TRUE
    Relation result;
    OperatorBase* query =
        new Project(
            buildExprList(3, new AttributeReference("A", "A1"), new AttributeReference("A","A4"), new AttributeReference("C", "A4")),
            new InnerJoin(
                new Filter(
                    new EqualTo(new AttributeReference("A", "A3"), Literal::create(true)),
                    new TestScan(new RelationReference("A"), true)
                ),
                new TestScan(new RelationReference("A", "C"), true),
                BuildRight,
                new EqualTo(new AttributeReference("A", "A1"), new AttributeReference("C", "A1"))
            )
        );
    qe->executeTree(query, result);
    AnyValue* answer[2][3] = {
        {IntegerValue::create(1), StringValue::create(string("a1")), StringValue::create(string("a1"))},
        {IntegerValue::create(2), StringValue::create(string("a2")), StringValue::create(string("a2"))},
    };
    assertResult<2, 3>(result, answer);
}
