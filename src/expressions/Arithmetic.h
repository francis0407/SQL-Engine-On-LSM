#pragma once

#include "expressions/Expression.h"

namespace simplesql {
namespace expressions {

class UnaryMinus : public UnaryExpression {
public:
    UnaryMinus(ExpressionBase* _child);

    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Add : public BinaryExpression {
public:
    Add(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Minus : public BinaryExpression {
public:
    Minus(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Multiply : public BinaryExpression {
public:
    Multiply(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Divide : public BinaryExpression {
public:
    Divide(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Mod : public BinaryExpression {
public:
    Mod(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

}} // namespace simplesql::expressions