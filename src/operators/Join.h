
#pragma once

#include "Operator.h"

namespace simplesql{
namespace operators {

enum JoinSide {
    BuildLeft,
    BuildRight
};

class InnerJoin: public OperatorBase {
public:
    InnerJoin(OperatorBase* _left, OperatorBase* _right, JoinSide _side); // TODO: Join
};

}} // namespace simplesql::operators