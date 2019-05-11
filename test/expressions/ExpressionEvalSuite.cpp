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

class ExpressionEvalSuite : public testing::Test {
public:
    ExpressionEvalSuite(){}

    void assertExpression(ExpressionBase* expr, bool result) {
        AnyValue* v =  expr->eval(nullptr);
        ASSERT_EQ(v->valueType, Boolean)
            << "Wrong type, expected: Boolean" << " But get:" << v->valueType;
        ASSERT_EQ(((BooleanValue*)v)->value, result) 
            << "Wrong value, expected:" << result << " But get:" << ((BooleanValue*)v)->value;
        delete v;
    }

    void assertExpression(ExpressionBase* expr, int result) {
        AnyValue* v =  expr->eval(nullptr);
        ASSERT_EQ(v->valueType, Integer)
            << "Wrong type, expected: Integer" << " But get:" << v->valueType;
        ASSERT_EQ(((IntegerValue*)v)->value, result) 
            << "Wrong value, expected:" << result << " But get:" << ((IntegerValue*)v)->value;
        delete v;
    }

    void assertExpression(ExpressionBase* expr, float result) {
        AnyValue* v =  expr->eval(nullptr);
        ASSERT_EQ(v->valueType, Float)
            << "Wrong type, expected: Float" << " But get:" << v->valueType;
        ASSERT_EQ(((FloatValue*)v)->value, result) 
            << "Wrong value, expected:" << result << " But get:" << ((FloatValue*)v)->value;
        delete v;
    }
#define literal(x) (Literal::create(x))
};

TEST_F(ExpressionEvalSuite, ArithmeticExpression) {
    assertExpression(new UnaryMinus(literal(3)), -3);
    assertExpression(new UnaryMinus(literal(3.0f)), -3.0f);

    assertExpression(new Add(literal(3), literal(10)), 13);
    assertExpression(new Add(literal(3.0f), literal(10.0f)), 13.0f);
    assertExpression(new Add(literal(3), literal(10.0f)), 13.0f);
    assertExpression(new Add(literal(10.0f), literal(3)), 13.0f);
    
    assertExpression(new Minus(literal(10), literal(3)), 7);
    assertExpression(new Minus(literal(10.0f), literal(3.0f)), 7.0f);
    assertExpression(new Minus(literal(10.0f), literal(3)), 7.0f);
    assertExpression(new Minus(literal(10), literal(3.0f)), 7.0f);

    assertExpression(new Multiply(literal(7), literal(3)), 21);
    assertExpression(new Multiply(literal(7.0f), literal(3.0f)), 21.0f);
    assertExpression(new Multiply(literal(7.0f), literal(3)), 21.0f);
    assertExpression(new Multiply(literal(7), literal(3.0f)), 21.0f);

    assertExpression(new Divide(literal(12), literal(3)), 4);
    assertExpression(new Divide(literal(12.0f), literal(3.0f)), 4.0f);
    assertExpression(new Divide(literal(12.0f), literal(3)), 4.0f);
    assertExpression(new Divide(literal(12), literal(3.0f)), 4.0f);
    
    assertExpression(new Mod(literal(12), literal(7)), 5);
}

TEST_F(ExpressionEvalSuite, ComparisonExpression) {
    assertExpression(new EqualTo(literal(1), literal(2)), false);
    assertExpression(new EqualTo(literal(3), literal(3)), true);
    assertExpression(new EqualTo(literal(4), literal(3.0f)), false);
    assertExpression(new EqualTo(literal(3), literal(3.0f)), true);
    assertExpression(new EqualTo(literal(3.0f), literal(3.0f)), true);
    assertExpression(new EqualTo(literal(true), literal(true)), true);
    assertExpression(new EqualTo(literal(true), literal(false)), false);
    assertExpression(new EqualTo(literal(string("xxx")), literal(string("xxxy"))), false);
    assertExpression(new EqualTo(literal(string("xxx")), literal(string("xxx"))), true);

    assertExpression(new LessThan(literal(1), literal(2)), true);
    assertExpression(new LessThan(literal(3), literal(3)), false);
    assertExpression(new LessThan(literal(5), literal(3)), false);
    assertExpression(new LessThan(literal(4), literal(3.0f)), false);
    assertExpression(new LessThan(literal(2), literal(3.0f)), true);
    assertExpression(new LessThan(literal(3.0f), literal(3.0f)), false);
    assertExpression(new LessThan(literal(true), literal(true)), false);
    assertExpression(new LessThan(literal(false), literal(true)), true);
    assertExpression(new LessThan(literal(string("xxx")), literal(string("xxxy"))), true);
    assertExpression(new LessThan(literal(string("xxx")), literal(string("xxx"))), false);
    assertExpression(new LessThan(literal(string("aaaa")), literal(string("bb"))), true);

    assertExpression(new LessThanOrEqual(literal(1), literal(2)), true);
    assertExpression(new LessThanOrEqual(literal(3), literal(3)), true);
    assertExpression(new LessThanOrEqual(literal(4), literal(3.0f)), false);
    assertExpression(new LessThanOrEqual(literal(3), literal(3.0f)), true);
    assertExpression(new LessThanOrEqual(literal(5.0f), literal(3.0f)), false);
    assertExpression(new LessThanOrEqual(literal(true), literal(true)), true);
    assertExpression(new LessThanOrEqual(literal(true), literal(false)), false);
    assertExpression(new LessThanOrEqual(literal(false), literal(true)), true);
    assertExpression(new LessThanOrEqual(literal(string("xxx")), literal(string("xxxy"))), true);
    assertExpression(new LessThanOrEqual(literal(string("xxx")), literal(string("xxx"))), true);
    assertExpression(new LessThanOrEqual(literal(string("aaab")), literal(string("aabc"))), true);
    
    assertExpression(new GreaterThan(literal(1), literal(2)), false);
    assertExpression(new GreaterThan(literal(3), literal(3)), false);
    assertExpression(new GreaterThan(literal(4), literal(3.0f)), true);
    assertExpression(new GreaterThan(literal(3), literal(3.0f)), false);
    assertExpression(new GreaterThan(literal(5.0f), literal(3.0f)), true);
    assertExpression(new GreaterThan(literal(true), literal(true)), false);
    assertExpression(new GreaterThan(literal(true), literal(false)), true);
    assertExpression(new GreaterThan(literal(false), literal(true)), false);
    assertExpression(new GreaterThan(literal(string("xxx")), literal(string("xxxy"))), false);
    assertExpression(new GreaterThan(literal(string("xxx")), literal(string("xxx"))), false);
    assertExpression(new GreaterThan(literal(string("aaab")), literal(string("aabc"))), false);
    
    assertExpression(new GreaterThanOrEqual(literal(1), literal(2)), false);
    assertExpression(new GreaterThanOrEqual(literal(3), literal(3)), true);
    assertExpression(new GreaterThanOrEqual(literal(5), literal(3)), true);
    assertExpression(new GreaterThanOrEqual(literal(4), literal(3.0f)), true);
    assertExpression(new GreaterThanOrEqual(literal(2), literal(3.0f)), false);
    assertExpression(new GreaterThanOrEqual(literal(3.0f), literal(3.0f)), true);
    assertExpression(new GreaterThanOrEqual(literal(true), literal(true)), true);
    assertExpression(new GreaterThanOrEqual(literal(false), literal(true)), false);
    assertExpression(new GreaterThanOrEqual(literal(string("xxx")), literal(string("xxxy"))), false);
    assertExpression(new GreaterThanOrEqual(literal(string("xxx")), literal(string("xxx"))), true);
    assertExpression(new GreaterThanOrEqual(literal(string("aaaa")), literal(string("bb"))), false);
}

TEST_F(ExpressionEvalSuite, LogicExpression) {
    assertExpression(new Not(literal("fuck")), false);
    assertExpression(new Not(literal(1)), false);
    assertExpression(new Not(literal(10.0f)), false);
    assertExpression(new Not(literal(true)), false);
    assertExpression(new Not(literal(false)), true);

    assertExpression(new And(literal(true), literal(true)), true);
    assertExpression(new And(literal(true), literal(false)), false);
    assertExpression(new And(literal(false), literal(true)), false);
    assertExpression(new And(literal(false), literal(false)), false);

    assertExpression(new Or(literal(true), literal(true)), true);
    assertExpression(new Or(literal(false), literal(true)), true);
    assertExpression(new Or(literal(true), literal(false)), true);
    assertExpression(new Or(literal(false), literal(false)), false);
}
