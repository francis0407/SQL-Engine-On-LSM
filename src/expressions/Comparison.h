
#pragma once

#include "Expression.h"

namespace simplesql::expressions {

class ComparisonExpression: public ExpressionBase {
public:
    ExpressionBase* left = nullptr;
    ExpressionBase* right = nullptr;
};

} // simplesql::expressions