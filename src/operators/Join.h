
#pragma once

#include "Operator.h"

namespace simplesql{
namespace operators {

enum JoinSide {
    BuildLeft,
    BuildRight
};

enum JoinMethod {
    HashJoin,
    NestedLoopJoin,
    MergeJoin
};

class InnerJoin: public OperatorBase {
public:
    InnerJoin(OperatorBase* _left, OperatorBase* _right, JoinSide _side, ExpressionBase* _condition = nullptr, JoinMethod _method = NestedLoopJoin); // TODO: Join
    virtual ~InnerJoin();
    
    bool open() override;
    NextResult next() override;
    bool close() override;

    OperatorBase* left = nullptr;
    OperatorBase* right = nullptr;

    ExpressionBase* condition = nullptr;
    JoinSide side;
    JoinMethod method;
    
};

}} // namespace simplesql::operators