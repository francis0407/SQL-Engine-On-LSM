
#include <expressions/Arithmetic.h>

using namespace simplesql::datatypes;
using namespace simplesql::expressions;
using namespace simplesql;

UnaryMinus::UnaryMinus(ExpressionBase* _child) : UnaryExpression(_child, _UnaryMinus) {

}

AnyValue* UnaryMinus::eval(Row* r, MemoryPool* mp) {
    return nullptr;
}

std::string UnaryMinus::toString() const {
    std::string childString = child->toString();
    std::string result = "(-" + childString + ")";
    return result;
}

Add::Add(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right, _Add) {

}

AnyValue* Add::eval(Row* r, MemoryPool* mp) {
    return nullptr;
}

std::string Add::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "+" + rightString + ")";
    return result;
}

Minus::Minus(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right, _Minus) {

}

AnyValue* Minus::eval(Row* r, MemoryPool* mp) {
    return nullptr;
}

std::string Minus::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "-" + rightString + ")";
    return result;
}

Multiply::Multiply(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right, _Multiply) {

}

AnyValue* Multiply::eval(Row* r, MemoryPool* mp) {
    return nullptr;
}

std::string Multiply::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "*" + rightString + ")";
    return result;
}

Divide::Divide(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right, _Divide) {

}

AnyValue* Divide::eval(Row* r, MemoryPool* mp) {
    return nullptr;
}

std::string Divide::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "/" + rightString + ")";
    return result;
}

Mod::Mod(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right, _Mod) {

}

AnyValue* Mod::eval(Row* r, MemoryPool* mp) {
    return nullptr;
}

std::string Mod::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "/" + rightString + ")";
    return result;
}


