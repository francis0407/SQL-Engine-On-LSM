
#include "expressions/Logic.h"

using namespace simplesql::expressions;
using namespace simplesql::datatypes;
using namespace simplesql;
Not::Not(ExpressionBase* _child) : UnaryExpression(_child, _Not) {

}

AnyValue* Not::eval(Row* row, MemoryPool* mp) {
    return nullptr;
}

std::string Not::toString() const {
    std::string childString = child->toString();
    std::string result = "(Not" + childString + ")";
    return result; 
}

And::And(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right, _And) {

}

AnyValue* And::eval(Row* row, MemoryPool* mp) {
    return nullptr;
}

std::string And::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "And" + rightString + ")";
    return result; 
}

Or::Or(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right, _Or) {

}

AnyValue* Or::eval(Row* row, MemoryPool* mp) {
    return nullptr;
}


std::string Or::toString() const {
    std::string leftString = left->toString();
    std::string rightString = right->toString();
    std::string result = "(" + leftString + "Or" + rightString + ")";
    return result; 
}
