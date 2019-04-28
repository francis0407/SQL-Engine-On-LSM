
#pragma once

#include "Row.h"
#include "datatypes/ValueBase.h"

namespace simplesql::expressions {
    
using namespace simplesql::datatypes;

class ExpressionBase {
public:
    
    virtual ValueBase* eval(Row* r) = 0;

    ExpressionBase* children = nullptr;
};
} // namespace simplesql::expressions