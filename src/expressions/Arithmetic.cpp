
#include <expressions/Arithmetic.h>

using namespace simplesql::datatypes;
using namespace simplesql::expressions;
using namespace simplesql;

UnaryMinus::UnaryMinus(ExpressionBase* _child) : UnaryExpression(_child, _UnaryMinus) {

}

void UnaryMinus::resolveDataType() {
    if (!isNumber(child->dataType))
        dataType = Unresolved;
    else
        dataType = child->dataType;
}

AnyValue* UnaryMinus::eval(Row* r, MemoryPool* mp) {
    AnyValue* childValue = child->eval(r, mp);
    AnyValue* result = nullptr;
    checkNullResult(childValue);
    switch(childValue->valueType) {
        case Integer:
            result = IntegerValue::create(
                -(((IntegerValue*)childValue)->value), mp);
            break;
        case Float:
            result = FloatValue::create(
                -(((FloatValue*)childValue)->value), mp);
            break;
        default:
            throwErrorType(childValue->valueType);
    }
    return result;
}

std::string UnaryMinus::toString() const {
    std::string childString = child->toString();
    std::string result = "(-" + childString + ")";
    return result;
}

BinaryArithmetic::BinaryArithmetic(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type)
    : BinaryExpression(_left, _right, _type) {

}

void BinaryArithmetic::resolveDataType() {
    if (!isNumber(left->dataType) || !isNumber(right->dataType))
        dataType = Unresolved;
    else if (left->dataType == Float || right->dataType == Float)
        dataType = Float;
    else
        dataType = Integer;
}

Add::Add(ExpressionBase* _left, ExpressionBase* _right) : BinaryArithmetic(_left, _right, _Add) {

}

AnyValue* Add::eval(Row* r, MemoryPool* mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    AnyValue* result = nullptr;
    if ((leftValue->valueType == Float && rightValue->valueType == Integer)
        || (leftValue->valueType == Integer && rightValue->valueType == Float)) {
        result = FloatValue::create(
            ((FloatValue*)leftValue)->value + ((IntegerValue*)rightValue)->value, mp);
    } else if (leftValue->valueType == Float && rightValue->valueType == Float) {
        result = FloatValue::create(
            ((FloatValue*)leftValue)->value + ((FloatValue*)rightValue)->value, mp);
    } else if (leftValue->valueType == Integer && rightValue->valueType == Integer) {
        result = IntegerValue::create(
            ((IntegerValue*)leftValue)->value + ((IntegerValue*)rightValue)->value, mp);
    }
    return result;
}

std::string Add::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "+" + rightString + ")";
    return result;
}

Minus::Minus(ExpressionBase* _left, ExpressionBase* _right) : BinaryArithmetic(_left, _right, _Minus) {

}

AnyValue* Minus::eval(Row* r, MemoryPool* mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    AnyValue* result = nullptr;
    if ((leftValue->valueType == Float && rightValue->valueType == Integer)
        || (leftValue->valueType == Integer && rightValue->valueType == Float)) {
        result = FloatValue::create(
            ((FloatValue*)leftValue)->value - ((IntegerValue*)rightValue)->value, mp);
    } else if (leftValue->valueType == Float && rightValue->valueType == Float) {
        result = FloatValue::create(
            ((FloatValue*)leftValue)->value - ((FloatValue*)rightValue)->value, mp);
    } else if (leftValue->valueType == Integer && rightValue->valueType == Integer) {
        result = IntegerValue::create(
            ((IntegerValue*)leftValue)->value - ((IntegerValue*)rightValue)->value, mp);
    }
    return result;
}

std::string Minus::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "-" + rightString + ")";
    return result;
}

Multiply::Multiply(ExpressionBase* _left, ExpressionBase* _right) : BinaryArithmetic(_left, _right, _Multiply) {

}

AnyValue* Multiply::eval(Row* r, MemoryPool* mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    AnyValue* result = nullptr;
    if ((leftValue->valueType == Float && rightValue->valueType == Integer)
        || (leftValue->valueType == Integer && rightValue->valueType == Float)) {
        result = FloatValue::create(
            ((FloatValue*)leftValue)->value * ((IntegerValue*)rightValue)->value, mp);
    } else if (leftValue->valueType == Float && rightValue->valueType == Float) {
        result = FloatValue::create(
            ((FloatValue*)leftValue)->value * ((FloatValue*)rightValue)->value, mp);
    } else if (leftValue->valueType == Integer && rightValue->valueType == Integer) {
        result = IntegerValue::create(
            ((IntegerValue*)leftValue)->value * ((IntegerValue*)rightValue)->value, mp);
    }
    return result;
}

std::string Multiply::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "*" + rightString + ")";
    return result;
}

Divide::Divide(ExpressionBase* _left, ExpressionBase* _right) : BinaryArithmetic(_left, _right, _Divide) {

}

AnyValue* Divide::eval(Row* r, MemoryPool* mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    AnyValue* result = nullptr;
    if ((leftValue->valueType == Float && rightValue->valueType == Integer)
        || (leftValue->valueType == Integer && rightValue->valueType == Float)) {
        result = FloatValue::create(
            ((FloatValue*)leftValue)->value / ((IntegerValue*)rightValue)->value, mp);
    } else if (leftValue->valueType == Float && rightValue->valueType == Float) {
        result = FloatValue::create(
            ((FloatValue*)leftValue)->value / ((FloatValue*)rightValue)->value, mp);
    } else if (leftValue->valueType == Integer && rightValue->valueType == Integer) {
        result = IntegerValue::create(
            ((IntegerValue*)leftValue)->value / ((IntegerValue*)rightValue)->value, mp);
    }
    return result;
}

std::string Divide::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "/" + rightString + ")";
    return result;
}

Mod::Mod(ExpressionBase* _left, ExpressionBase* _right) : BinaryArithmetic(_left, _right, _Mod) {
    
}

void Mod::resolveDataType() {
    if (left->dataType != Integer || right->dataType != Integer)
        dataType = Unresolved;
    else
        dataType = Integer;
}

AnyValue* Mod::eval(Row* r, MemoryPool* mp) {
    IntegerValue* leftValue = (IntegerValue*)left->eval(r, mp);
    IntegerValue* rightValue = (IntegerValue*)right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    AnyValue* result = IntegerValue::create(leftValue->value % rightValue->value, mp);
    return result;
}

std::string Mod::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "/" + rightString + ")";
    return result;
}


