#include "gtest/gtest.h"

#include "parser/SQLParser.h"
#include "expressions/Literal.h"
using namespace simplesql::expressions;
using namespace simplesql::parser;
using namespace simplesql;

class ExpressionParserSuite : public testing::Test {
public:
    ExpressionParserSuite() {

    }

    virtual void SetUp() override {

    }

    virtual void TearDown() override {

    }

    void assertExpression(const string& sql, ExpressionBase* expr) {
        ExpressionBase* newExpr = parser.parseExpression(sql);
        bool equals = false;
    }

    SQLParser parser;
};

TEST_F(ExpressionParserSuite, IntegerLiteral) {
    Literal* l1 = (Literal*)parser.parseExpression("1234");
    Literal* r1 = Literal::create(1234);
    ASSERT_EQ(((IntegerValue*)l1->value)->value, ((IntegerValue*)r1->value)->value);
}