
#include "operators/Join.h"
#include "expressions/Literal.h"  

using namespace simplesql::expressions;
using namespace simplesql::operators;

InnerJoin::InnerJoin(
    OperatorBase* _left, 
    OperatorBase* _right, 
    JoinSide _side, 
    ExpressionBase* _condition,
    JoinMethod _method) {

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

bool InnerJoin::open() {
    return true;
}

bool InnerJoin::close() {
    return true;
}

NextResult InnerJoin::next() {
    return NextResult(nullptr);
}
