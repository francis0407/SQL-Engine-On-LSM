#include "gtest/gtest.h"

#include "parser/SQLParser.h"
#include "expressions/Literal.h"
#include "expressions/Logic.h"
#include "expressions/Comparison.h"
#include "expressions/Arithmetic.h"
#include "expressions/AttributeReference.h"

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
        ASSERT_TRUE(newExpr->equalTo(expr)) << sql  << " : "<< newExpr->toString();
        delete newExpr;
        delete expr;
    }

    SQLParser parser;
};

TEST_F(ExpressionParserSuite, LiteralExpression) {
    assertExpression("1234", Literal::create(1234));
    assertExpression("-1234", Literal::create(-1234));
    assertExpression("123.123", Literal::create(123.123f));
    assertExpression("-123.123", Literal::create(-123.123f));
    assertExpression("'francis'", Literal::create(string("francis")));
    assertExpression("TRUE", Literal::create(true));
    assertExpression("FALSE", Literal::create(false));
}

TEST_F(ExpressionParserSuite, AttributeExpression) {
    assertExpression("A", new AttributeReference("A"));
    assertExpression("A.B", new AttributeReference("A", "B"));
}

TEST_F(ExpressionParserSuite, LogicExpression) {
    assertExpression("1 AND 2", new And(Literal::create(1), Literal::create(2)));
    assertExpression("1 OR 2", new Or(Literal::create(1), Literal::create(2)));
    assertExpression("NOT 1", new Not(Literal::create(1)));
}

TEST_F(ExpressionParserSuite, ComparisonExpression) {
    assertExpression("1 = 2", new EqualTo(Literal::create(1), Literal::create(2)));
    assertExpression("1 > 2", new GreaterThan(Literal::create(1), Literal::create(2)));
    assertExpression("1 >= 2", new GreaterThanOrEqual(Literal::create(1), Literal::create(2)));
    assertExpression("1 < 2", new LessThan(Literal::create(1), Literal::create(2)));
    assertExpression("1 <= 2", new LessThanOrEqual(Literal::create(1), Literal::create(2)));
    assertExpression("1 != 2", new Not(new EqualTo(Literal::create(1), Literal::create(2))));
}

TEST_F(ExpressionParserSuite, ArithmeticExpression) {
    assertExpression("1 + 2", new Add(Literal::create(1), Literal::create(2)));
    assertExpression("1 - 2", new Minus(Literal::create(1), Literal::create(2)));
    assertExpression("1 * 2", new Multiply(Literal::create(1), Literal::create(2)));
    assertExpression("1 / 2", new Divide(Literal::create(1), Literal::create(2)));
    assertExpression("1 % 2", new Mod(Literal::create(1), Literal::create(2)));
    assertExpression("-(1 + 2)", new UnaryMinus(new Add(Literal::create(1), Literal::create(2))));
}

TEST_F(ExpressionParserSuite, NestedExpression) {
    assertExpression(
        "1 + (2 - 3) > 4",
        new GreaterThan(
            new Add(
                Literal::create(1),
                new Minus(Literal::create(2), Literal::create(3))),
            Literal::create(4)
    ));

    assertExpression(
        "2 - 3 * 4 = 2 + A",
        new EqualTo(
            new Minus(
                Literal::create(2),
                new Multiply(Literal::create(3), Literal::create(4))
            ),
            new Add(
                Literal::create(2),
                new AttributeReference("A")
    )));

    assertExpression(
        "(1 = 3 OR 4 < 2) AND A = B",
        new And(
            new Or(
                new EqualTo(Literal::create(1), Literal::create(3)),
                new LessThan(Literal::create(4), Literal::create(2))
            ),
            new EqualTo(new AttributeReference("A"), new AttributeReference("B"))
    ));

    assertExpression(
        "NOT A AND B",
        new And(
            new Not(new AttributeReference("A")),
            new AttributeReference("B")
    ));
}