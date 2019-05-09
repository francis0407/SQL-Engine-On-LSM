#pragma once

#include "expressions/Expression.h"

namespace simplesql {
namespace expressions {

class UnaryMinus : public UnaryExpression {
public:
    UnaryMinus(ExpressionBase* _child);

    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
    virtual void resolveDataType() override; 
};

class BinaryArithmetic : public BinaryExpression {
public:
    BinaryArithmetic(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type);
    virtual void resolveDataType() override;    
};

class Add : public BinaryArithmetic {
public:
    Add(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Minus : public BinaryArithmetic {
public:
    Minus(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Multiply : public BinaryArithmetic {
public:
    Multiply(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Divide : public BinaryArithmetic {
public:
    Divide(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class Mod : public BinaryArithmetic {
public:
    Mod(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
    virtual void resolveDataType() override; 
};

}} // namespace simplesql::expressions