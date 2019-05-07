
#include <stdarg.h>

#include "gtest/gtest.h"

#include "parser/SQLParser.h"

#include "operators/Operator.h"
#include "operators/Project.h"
#include "operators/Filter.h"
#include "operators/Join.h"
#include "operators/SeqScan.h"

#include "expressions/Literal.h"
#include "expressions/Logic.h"
#include "expressions/Comparison.h"
#include "expressions/Arithmetic.h"
#include "expressions/AttributeReference.h"

using namespace simplesql::expressions;
using namespace simplesql::parser;
using namespace simplesql;

class SelectQueryParserSuite : public testing::Test {
public:
    SelectQueryParserSuite() {

    }

    virtual void SetUp() override {

    }

    virtual void TearDown() override {

    }

    void assertQuery(const string& sql, OperatorBase* opt) {
        OperatorBase* newOpt = parser.parseSelectQuery(sql);
        ASSERT_TRUE(newOpt->equalTo(opt));// << sql  << " : "<< newExpr->toString();
        delete newOpt;
        delete opt;
    }
    
    std::vector<ExpressionBase *> buildExprList(ExpressionBase* expr, ...) {
        std::vector<ExpressionBase *> list;
        list.push_back(expr);

        va_list ap;
        va_start(ap, expr);
        ExpressionBase* tmp = nullptr;
        while ((tmp = va_arg(ap, ExpressionBase*)) != nullptr) {
            list.push_back(tmp);
        }
        va_end(ap);
        return list;
    }

    SQLParser parser;
};

TEST_F(SelectQueryParserSuite, BasicQuery) {
    assertQuery(
        "SELECT A FROM B WHERE C > D", 
        new Project(
            buildExprList(new AttributeReference("A")),
            new Filter(
                new GreaterThan(new AttributeReference("C"), new AttributeReference("D")),
                new SeqScan(new RelationReference("B"))
            )
    ));

    assertQuery(
        "SELECT A FROM B, C WHERE E = F",
        new Project(
            buildExprList(new AttributeReference("A")),
            new Filter(
                new EqualTo(new AttributeReference("E"), new AttributeReference("F")),
                new InnerJoin(
                    new SeqScan(new RelationReference("B")),
                    new SeqScan(new RelationReference("C")),
                    BuildLeft
                )
            )
        )
    );
}
