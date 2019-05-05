
#include "Expression.h"

using namespace simplesql::expressions;
using namespace simplesql::datatypes;

ExpressionBase::ExpressionBase() {}

AnyValue* ExpressionBase::eval(Row* r) {
    MemoryPool mp; // use a new MemoryPool
    AnyValue* result = eval(r, &mp);
    return result->makeCopy();
}

LeafExpression::LeafExpression() {
    children[0] = nullptr;
    children[1] = nullptr;
}

UnaryExpression::UnaryExpression(ExpressionBase* _child) {
    child = _child;
    children[0] = _child;
    children[1] = nullptr;
}

BinaryExpression::BinaryExpression(ExpressionBase* _left, ExpressionBase* _right) {
    left = _left;
    right = _right;
    children[0] = _left;
    children[1] = _right;
}

bool ExpressionBase::isAttributeReference() const {
    return type == ExpressionType::_AttributeReference;
}

std::stringstream ExpressionBase::explain() const {
    return std::stringstream();
}



