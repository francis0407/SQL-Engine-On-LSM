
#include "operators/Join.h"
#include "expressions/Literal.h"  

using namespace simplesql::expressions;
using namespace simplesql::operators;

InnerJoin::InnerJoin(
    OperatorBase* _left, 
    OperatorBase* _right, 
    JoinSide _side, 
    ExpressionBase* _condition,
    JoinMethod _method) : OperatorBase(_InnerJoin) {

    left = _left;
    right = _right;
    side = _side;
    condition = _condition == nullptr? Literal::create(true) : _condition;
    method = _method;

    children[0] = left;
    children[1] = right;
    
}

InnerJoin::~InnerJoin() {
    if (left != nullptr)
        delete left;
    if (right != nullptr)
        delete right;
    if (condition != nullptr)
        delete condition;
}

bool InnerJoin::equalTo(OperatorBase* that) const {
    InnerJoin* _that = (InnerJoin*)that;
    if (that->type != _InnerJoin)
        return false;
    if (!condition->equalTo(_that->condition))
        return false;
    if (!left->equalTo(_that->left))
        return false;
    if (!right->equalTo(_that->right))
        return false;
    return true;
}

bool InnerJoin::open() {
    return true;
}

bool InnerJoin::close() {
    return true;
}

NextResult InnerJoin::next() {
    return NextResult(nullptr);
}
