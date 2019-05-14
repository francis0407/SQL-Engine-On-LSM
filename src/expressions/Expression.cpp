
#include "Expression.h"

using namespace simplesql::expressions;
using namespace simplesql::datatypes;

ExpressionBase::ExpressionBase(ExpressionType _type) : dataType(Unresolved), type(_type){
    resolveDataType();
}
ExpressionBase::~ExpressionBase(){}

bool ExpressionBase::isBinaryExpression() const { return false;}
bool ExpressionBase::isUnaryExpression() const { return false;}
bool ExpressionBase::isLeafExpression() const { return false;}

void ExpressionBase::resolveDataType() { return;}

AnyValue* ExpressionBase::eval(Row* r) {
    MemoryPool mp; // use a new MemoryPool
    AnyValue* result = eval(r, &mp);
    return result->makeCopy();
}

LeafExpression::LeafExpression(ExpressionType _type) : ExpressionBase(_type) {
    children[0] = nullptr;
    children[1] = nullptr;
}

LeafExpression::~LeafExpression() {
    
}

bool LeafExpression::isLeafExpression() const { return true; }

ExpressionBase* LeafExpression::transform(const std::function<ExpressionBase*(ExpressionBase*)>& func) {
    return func(this);    
}

UnaryExpression::UnaryExpression(ExpressionBase* _child, ExpressionType _type)
 : ExpressionBase(_type), child(children[0]) {
    children[1] = nullptr;
    child = _child;
}

UnaryExpression::~UnaryExpression() {
    if (child != nullptr)
        delete child;
}
bool UnaryExpression::isUnaryExpression() const { return true; }

ExpressionBase* UnaryExpression::transform(const std::function<ExpressionBase*(ExpressionBase*)>& func) {
    child = func(child);
    return func(this);
}

BinaryExpression::BinaryExpression(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type)
 : ExpressionBase(_type), left(children[0]), right(children[1]) {
     left = _left;
     right = _right;
}

BinaryExpression::~BinaryExpression() {
    if (left != nullptr)
        delete left;
    if (right != nullptr)
        delete right;
}

bool BinaryExpression::isBinaryExpression() const {
    return true;
}

ExpressionBase* BinaryExpression::transform(const std::function<ExpressionBase*(ExpressionBase*)>& func) {
    left = func(left);
    right = func(right);
    return func(this);
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



