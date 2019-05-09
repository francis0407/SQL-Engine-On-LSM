
#pragma once

#include "Expression.h"

namespace simplesql {
namespace expressions {


class EqualTo: public BinaryExpression {
public:
    EqualTo(ExpressionBase* _left, ExpressionBase* _right); 
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
    virtual void resolveDataType() override;
};

class LessThan: public BinaryExpression {
public:
    LessThan(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
    virtual void resolveDataType() override;
};

class LessThanOrEqual: public BinaryExpression {
public:
    LessThanOrEqual(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
    virtual void resolveDataType() override;
};

class GreaterThan: public BinaryExpression {
public:
    GreaterThan(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
    virtual void resolveDataType() override;
};

class GreaterThanOrEqual: public BinaryExpression {
public:
    GreaterThanOrEqual(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
    virtual void resolveDataType() override;
};

}} // simplesql::expressions