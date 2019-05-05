#pragma once

#include "expressions/Expression.h"

namespace simplesql {
namespace expressions {

class UnaryMinus : public UnaryExpression {
public:
    UnaryMinus(ExpressionBase* _child) : UnaryExpression(_child) {}

    virtual AnyValue* eval(Row* r, MemoryPool* mp) override {
        return nullptr;
    }

};

class Add : public BinaryExpression {
public:
    Add(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override {
        return nullptr;
    }

};

class Minus : public BinaryExpression {
public:
    Minus(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override {
        return nullptr;
    }

};

class Multiply : public BinaryExpression {
public:
    Multiply(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override {
        return nullptr;
    }
};

class Divide : public BinaryExpression {
public:
    Divide(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override {
        return nullptr;
    }
};

class Mod : public BinaryExpression {
public:
    Mod(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override {
        return nullptr;
    }
};

}} // namespace simplesql::expressions