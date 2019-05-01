
#pragma once

#include "Row.h"
#include "MemoryPool.h"
#include "datatypes/ValueBase.h"

namespace simplesql::expressions {
    
using namespace simplesql::datatypes;

class ExpressionBase {
public:
    
    virtual AnyValue* eval(Row* r, MemoryPool* _mp) = 0;
    AnyValue* eval(Row* r); // use a default memory pool

    ExpressionBase* children[2]; // Currently, we only support LeafNode, UnaryNode and BinaryNode. 

    bool resolved = false; // true if the attributes are resolved
    bool isReference = false; // true if the expression is only an attribute
};

class LeafExpression: public ExpressionBase {

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