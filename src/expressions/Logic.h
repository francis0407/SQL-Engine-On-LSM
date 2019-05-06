#pragma once

#include "expressions/Expression.h"

namespace simplesql {
namespace expressions {

class Not : public UnaryExpression {
public:
    Not(ExpressionBase* _child);  
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class And : public BinaryExpression {
public:
    And(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Or : public BinaryExpression {
public:
    Or(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

}} // namespace simplesql::expressions
