
#pragma once

#include "Row.h"
#include "MemoryPool.h"
#include "datatypes/ValueBase.h"

namespace simplesql::expressions {
    
using namespace simplesql::datatypes;

enum ExpressionType {
    AttributeReference,
    // Comparison expressions
    EqualTo,
    LessThan,
    LessThanOrEqual,
    GreaterThan,
    GreaterThanOrEqual,
    // Predicates
    And,
    Or,
    Not,
    // Arithmetical expressions
    Add,
    Minus,
    Multiply,
    Divide,
    Mod
};

class ExpressionBase {
public:
    
    virtual AnyValue* eval(Row* r, MemoryPool* _mp) = 0;
    AnyValue* eval(Row* r); // use a default memory pool

    ExpressionBase* children[2]; // Currently, we only support LeafNode, UnaryNode and BinaryNode. 

    bool resolved = false; // true if the attributes are resolved

    bool isAttributeReference() const;
};

class LeafExpression: public ExpressionBase {
    // Literals or AttributeReferences
};

class UnaryExpression: public ExpressionBase {
    ExpressionBase* child = nullptr;
};

class BinaryExpression: public ExpressionBase {
public:
    ExpressionBase* left = nullptr;
    ExpressionBase* right = nullptr;
};

} // namespace simplesql::expressions