
#pragma once

#include "Operator.h"

namespace simplesql::operators {

class Filter: public OperatorBase {
public:
    Filter(ExpressionBase* _condition, OperatorBase* _child);
    
    ExpressionBase* condition = nullptr;
    OperatorBase* child = nullptr;
};


} // namespace simplesql::operators