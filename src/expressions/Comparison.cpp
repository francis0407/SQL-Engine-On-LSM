 
#include "expressions/Comparison.h"

using namespace simplesql::expressions;
using namespace simplesql::datatypes;

Comparison::Comparison(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type)
    : BinaryExpression(_left, _right, _type) {

}

void Comparison::resolveDataType() {
    if (!isNumber(left->dataType) || !isNumber(right->dataType)) {
        dataType = Unresolved;
        return;
    }
    dataType = Boolean;
}


EqualTo::EqualTo(ExpressionBase* _left, ExpressionBase* _right) : Comparison(_left, _right, _EqualTo) {

}

AnyValue* EqualTo::eval(Row* r, MemoryPool *mp) {
    return nullptr;
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
    return nullptr;
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
    return nullptr;
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
    return nullptr;
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
    return nullptr;
}

std::string GreaterThanOrEqual::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + ">=" + rightString + ")";
    return result;
}
    
// namespace simplesql {
// namespace expressions {
 
// AnyValue* EqualTo::eval(Row* r, MemoryPool *mp) {
//     AnyValue* leftValue = left->eval(r, mp);
//     AnyValue* rightValue = right->eval(r, mp);

//     bool equalTo = leftValue->equalTo(rightValue);

//     BooleanValue* result = BooleanValue::create(equalTo, mp);
//     return result; 
// }

// AnyValue* LessThan::eval(Row* r, MemoryPool *mp) {
//     AnyValue* leftValue = left->eval(r, mp);
//     AnyValue* rightValue = right->eval(r, mp);

//     bool equalTo = rightValue->greaterThan(leftValue); // a < b ? === b > a?

//     BooleanValue* result = BooleanValue::create(equalTo, mp);
//     return result; 
// }

// }} // namespace simplesql::expressions