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

    assertExpression(new Multiply(literal(10), literal(3)), 21);
    assertExpression(new Multiply(literal(10.0f), literal(3.0f)), 21.0f);
    assertExpression(new Multiply(literal(10.0f), literal(3)), 21.0f);
    assertExpression(new Multiply(literal(10), literal(3.0f)), 21.0f);

    assertExpression(new Divide(literal(12), literal(3)), 4);
    assertExpression(new Divide(literal(12.0f), literal(3.0f)), 4.0f);
    assertExpression(new Divide(literal(12.0f), literal(3)), 4.0f);
    assertExpression(new Divide(literal(12), literal(3.0f)), 4.0f);
    
    assertExpression(new Mod(literal(12), literal(7)), 5);
}

TEST_F(ExpressionEvalSuite, ComparisonExpression) {
    
}