
#include <cstring>

#include "expressions/Comparison.h"

using namespace simplesql::expressions;
using namespace simplesql::datatypes;

Comparison::Comparison(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type)
    : BinaryExpression(_left, _right, _type) {

}

void Comparison::resolveDataType() {
    if (!isNumber(left->dataType) || !isNumber(right->dataType) && left->dataType != right->dataType) {
        dataType = Unresolved;
        return;
    }
    dataType = Boolean;
}


EqualTo::EqualTo(ExpressionBase* _left, ExpressionBase* _right) : Comparison(_left, _right, _EqualTo) {

}

AnyValue* EqualTo::eval(Row* r, MemoryPool *mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    BooleanValue* result = BooleanValue::create(false, mp);
    switch (leftValue->valueType) {
        case Integer: {
            if (rightValue->valueType == Integer)
                result->value = ((IntegerValue*)leftValue)->value == ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((IntegerValue*)leftValue)->value == ((FloatValue*)rightValue)->value;
            break;
        }
        case Float: {
            if (rightValue->valueType == Integer)
                result->value = ((FloatValue*)leftValue)->value == ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((FloatValue*)leftValue)->value == ((FloatValue*)rightValue)->value;
            break;
        }
        case Boolean: {
            if (rightValue->valueType == Boolean)
                result->value = ((BooleanValue*)leftValue)->value == ((BooleanValue*)rightValue)->value;
            break;
        }
        case String: {
            StringValue* sl = (StringValue*)leftValue;
            StringValue* sr = (StringValue*)rightValue;
            if (rightValue->valueType == String)
                result->value = StringValue::compare(sl->data(), sl->size(), sr->data(), sr->size()) == 0;
            break;
        }
    }
    return result;
}

std::string EqualTo::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "=" + rightString + ")";
    return result;
}

LessThan::LessThan(ExpressionBase* _left, ExpressionBase* _right) : Comparison(_left, _right, _LessThan) {

}

AnyValue* LessThan::eval(Row* r, MemoryPool *mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    BooleanValue* result = BooleanValue::create(false, mp);
    switch (leftValue->valueType) {
        case Integer: {
            if (rightValue->valueType == Integer)
                result->value = ((IntegerValue*)leftValue)->value < ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((IntegerValue*)leftValue)->value < ((FloatValue*)rightValue)->value;
            break;
        }
        case Float: {
            if (rightValue->valueType == Integer)
                result->value = ((FloatValue*)leftValue)->value < ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((FloatValue*)leftValue)->value < ((FloatValue*)rightValue)->value;
            break;
        }
        case Boolean: {
            if (rightValue->valueType == Boolean)
                result->value = ((BooleanValue*)leftValue)->value < ((BooleanValue*)rightValue)->value;
            break;
        }
        case String: {
            StringValue* sl = (StringValue*)leftValue;
            StringValue* sr = (StringValue*)rightValue;
            if (rightValue->valueType == String)
                result->value = StringValue::compare(sl->data(), sl->size(), sr->data(), sr->size()) < 0;
            break;
        }
    }
    return result;
}

std::string LessThan::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "<" + rightString + ")";
    return result;
}

LessThanOrEqual::LessThanOrEqual(ExpressionBase* _left, ExpressionBase* _right) : Comparison(_left, _right, _LessThanOrEqual) {

}

AnyValue* LessThanOrEqual::eval(Row* r, MemoryPool *mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    BooleanValue* result = BooleanValue::create(false, mp);
    switch (leftValue->valueType) {
        case Integer: {
            if (rightValue->valueType == Integer)
                result->value = ((IntegerValue*)leftValue)->value <= ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((IntegerValue*)leftValue)->value <= ((FloatValue*)rightValue)->value;
            break;
        }
        case Float: {
            if (rightValue->valueType == Integer)
                result->value = ((FloatValue*)leftValue)->value <= ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((FloatValue*)leftValue)->value <= ((FloatValue*)rightValue)->value;
            break;
        }
        case Boolean: {
            if (rightValue->valueType == Boolean)
                result->value = ((BooleanValue*)leftValue)->value <= ((BooleanValue*)rightValue)->value;
            break;
        }
        case String: {
            StringValue* sl = (StringValue*)leftValue;
            StringValue* sr = (StringValue*)rightValue;
            if (rightValue->valueType == String)
                result->value = StringValue::compare(sl->data(), sl->size(), sr->data(), sr->size()) <= 0;
            break;
        }
    }
    return result;
}

std::string LessThanOrEqual::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "<=" + rightString + ")";
    return result;
}

GreaterThan::GreaterThan(ExpressionBase* _left, ExpressionBase* _right) : Comparison(_left, _right, _GreaterThan) {

}
        
AnyValue* GreaterThan::eval(Row* r, MemoryPool *mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    BooleanValue* result = BooleanValue::create(false, mp);
    switch (leftValue->valueType) {
        case Integer: {
            if (rightValue->valueType == Integer)
                result->value = ((IntegerValue*)leftValue)->value > ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((IntegerValue*)leftValue)->value > ((FloatValue*)rightValue)->value;
            break;
        }
        case Float: {
            if (rightValue->valueType == Integer)
                result->value = ((FloatValue*)leftValue)->value > ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((FloatValue*)leftValue)->value > ((FloatValue*)rightValue)->value;
            break;
        }
        case Boolean: {
            if (rightValue->valueType == Boolean)
                result->value = ((BooleanValue*)leftValue)->value > ((BooleanValue*)rightValue)->value;
            break;
        }
        case String: {
            StringValue* sl = (StringValue*)leftValue;
            StringValue* sr = (StringValue*)rightValue;
            if (rightValue->valueType == String)
                result->value = StringValue::compare(sl->data(), sl->size(), sr->data(), sr->size()) > 0;
            break;
        }
    }
    return result;
}

std::string GreaterThan::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + ">" + rightString + ")";
    return result;
}

GreaterThanOrEqual::GreaterThanOrEqual(ExpressionBase* _left, ExpressionBase* _right) : Comparison(_left, _right, _GreaterThanOrEqual) {

}

AnyValue* GreaterThanOrEqual::eval(Row* r, MemoryPool *mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);
    checkNullResult(leftValue, rightValue);
    BooleanValue* result = BooleanValue::create(false, mp);
    switch (leftValue->valueType) {
        case Integer: {
            if (rightValue->valueType == Integer)
                result->value = ((IntegerValue*)leftValue)->value >=((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((IntegerValue*)leftValue)->value >= ((FloatValue*)rightValue)->value;
            break;
        }
        case Float: {
            if (rightValue->valueType == Integer)
                result->value = ((FloatValue*)leftValue)->value >= ((IntegerValue*)rightValue)->value;
            else if (rightValue->valueType == Float)
                result->value = ((FloatValue*)leftValue)->value >= ((FloatValue*)rightValue)->value;
            break;
        }
        case Boolean: {
            if (rightValue->valueType == Boolean)
                result->value = ((BooleanValue*)leftValue)->value >= ((BooleanValue*)rightValue)->value;
            break;
        }
        case String: {
            StringValue* sl = (StringValue*)leftValue;
            StringValue* sr = (StringValue*)rightValue;
            if (rightValue->valueType == String)
                result->value = StringValue::compare(sl->data(), sl->size(), sr->data(), sr->size()) >= 0;
            break;
        }
    }
    return result;
}

std::string GreaterThanOrEqual::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + ">=" + rightString + ")";
    return result;
}