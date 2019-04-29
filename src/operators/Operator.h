
#pragma once

#include "expressions/Expression.h"

namespace simplesql::operators {

using namespace simplesql::expressions;

// Relational Operator Base Class
// Use the traditional Volcano Model
class OperatorBase {
public:
    virtual bool open() = 0;
    virtual bool next() = 0;
    virtual bool close() = 0;
    
    OperatorBase* children[2]; // We only have LeafNode, UnaryNode and BinaryNode
    ExpressionBase* expression;
    
    bool resolved = false;
};

} // namespace simplesql::parser