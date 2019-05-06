
#pragma once

#include <sstream>

#include "Row.h"
#include "MemoryPool.h"
#include "datatypes/ValueBase.h"

namespace simplesql {

using namespace datatypes;

namespace expressions {
    
enum ExpressionType {
    _UnknownType,
    _AttributeReference,
    _Literal,
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
    _UnaryMinus,
    _Add,
    _Minus,
    _Multiply,
    _Divide,
    _Mod
};


class ExpressionBase {
public:
    ExpressionBase(ExpressionType _type);
    virtual ~ExpressionBase();
    virtual AnyValue* eval(Row* r, MemoryPool* _mp) = 0;
    AnyValue* eval(Row* r); // use a default memory pool


    const ExpressionType type;
    ExpressionBase* children[2]; // Currently, we only support LeafNode, UnaryNode and BinaryNode. 

    bool resolved = false; // true if the attributes are resolved

    bool isAttributeReference() const;

    virtual bool equalTo(ExpressionBase* that) const;
    virtual std::string toString() const;
};

class LeafExpression: public ExpressionBase {
public:
    LeafExpression(ExpressionType _type);
    // Literals or AttributeReferences
};

class UnaryExpression: public ExpressionBase {
public:
    UnaryExpression(ExpressionBase* _child, ExpressionType _type);
    ExpressionBase* child = nullptr;
};

class BinaryExpression: public ExpressionBase {
public:
    BinaryExpression(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type);
    ExpressionBase* left = nullptr;
    ExpressionBase* right = nullptr;
};

}} // namespace simplesql::expressions