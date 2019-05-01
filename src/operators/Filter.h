
#pragma once

#include "Operator.h"

namespace simplesql::operators {

class Filter: public OperatorBase {
public:
    Filter(ExpressionBase* _condition, OperatorBase* _child);
    
    bool open() override;
    NextResult next() override;
    bool close() override;

    ExpressionBase* condition = nullptr;
    OperatorBase* child = nullptr;
};


} // namespace simplesql::operators