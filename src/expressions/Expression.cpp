
#include "Expression.h"

using namespace simplesql::expressions;
using namespace simplesql::datatypes;

ExpressionBase::ExpressionBase(ExpressionType _type) : type(_type) {}
ExpressionBase::~ExpressionBase(){}
AnyValue* ExpressionBase::eval(Row* r) {
    MemoryPool mp; // use a new MemoryPool
    AnyValue* result = eval(r, &mp);
    return result->makeCopy();
}

LeafExpression::LeafExpression(ExpressionType _type) : ExpressionBase(_type) {
    children[0] = nullptr;
    children[1] = nullptr;
}

UnaryExpression::UnaryExpression(ExpressionBase* _child, ExpressionType _type) : ExpressionBase(_type) {
    child = _child;
    children[0] = _child;
    children[1] = nullptr;
}

BinaryExpression::BinaryExpression(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type) : ExpressionBase(_type) {
    left = _left;
    right = _right;
    children[0] = _left;
    children[1] = _right;
}

bool ExpressionBase::isAttributeReference() const {
    return type == ExpressionType::_AttributeReference;
}

bool ExpressionBase::equalTo(ExpressionBase* that) const {
    if (that == nullptr) return false;
    if (type != that->type) return false;
    if (children[0] == nullptr || that->children[0] == nullptr)
        return false;
    if (!children[0]->equalTo(that->children[0])) return false;
    if (children[1] == nullptr && that->children[1] != nullptr)
        return false;
    if (children[1] != nullptr)
        return children[1]->equalTo(that->children[1]);
    return true;
}

std::string ExpressionBase::toString() const {
    return std::string("UnknownExpression");
}

std::stringstream ExpressionBase::explain() const {
    return std::stringstream();
}



