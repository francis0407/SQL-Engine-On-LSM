#pragma once

#include "expressions/Expression.h"

namespace simplesql {
namespace expressions {

class Not : public UnaryExpression {
public:
    Not(ExpressionBase* _child) : UnaryExpression(_child) {}    
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override{
        return nullptr;
    }
};

class And : public BinaryExpression {
public:
    And(ExpressionBase* _left, ExpressionBase* _right): BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override{
        return nullptr;
    }
};

class Or : public BinaryExpression {
public:
    Or(ExpressionBase* _left, ExpressionBase* _right): BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override{
        return nullptr;
    }
};

}} // namespace simplesql::expressions
