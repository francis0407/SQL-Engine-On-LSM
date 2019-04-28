
#pragma once

#include "expressions/Expression.h"

namespace simplesql::operators {

using namespace simplesql::expressions;

// Relational Operator Base Class
// Use the traditional Volcano Model
class OperatorBase {
public:
    virtual void open() = 0;
    virtual void next() = 0;
    virtual void close() = 0;
    
    OperatorBase* children[2];
    ExpressionBase* expression;
    
    bool resolved = false;
};

} // namespace simplesql::parser