
#pragma once

#include "Row.h"
#include "MemoryPool.h"
#include "datatypes/ValueBase.h"

namespace simplesql {

using namespace datatypes;

namespace expressions {
    
enum ExpressionType {
    _AttributeReference,
    // Comparison expressions
    _EqualTo,
    _LessThan,
    _LessThanOrEqual,
    _GreaterThan,
    _GreaterThanOrEqual,
    // Predicates
    _And,
    _Or,
    _Not,
    // Arithmetical expressions
    _Add,
    _Minus,
    _Multiply,
    _Divide,
    _Mod
};

// WHERE a > 10 AND b = 1
class ExpressionBase {
public:
    
    virtual AnyValue* eval(Row* r, MemoryPool* _mp) = 0;
    AnyValue* eval(Row* r); // use a default memory pool

    ExpressionBase* children[2]; // Currently, we only support LeafNode, UnaryNode and BinaryNode. 

    bool resolved = false; // true if the attributes are resolved

    bool isAttributeReference() const;
};

class LeafExpression: public ExpressionBase {
public:
    // Literals or AttributeReferences
};

class UnaryExpression: public ExpressionBase {
public:
    UnaryExpression(ExpressionBase* _child);
    ExpressionBase* child = nullptr;
};

class BinaryExpression: public ExpressionBase {
public:
    BinaryExpression(ExpressionBase* _left, ExpressionBase* _right);
    ExpressionBase* left = nullptr;
    ExpressionBase* right = nullptr;
};

}} // namespace simplesql::expressions