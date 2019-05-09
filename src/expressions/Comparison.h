
#pragma once

#include "Expression.h"

namespace simplesql {
namespace expressions {


class Comparison: public BinaryExpression {
public:
    Comparison(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type);
    virtual void resolveDataType() override;

};

class EqualTo: public Comparison {
public:
    EqualTo(ExpressionBase* _left, ExpressionBase* _right); 
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class LessThan: public Comparison {
public:
    LessThan(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class LessThanOrEqual: public Comparison {
public:
    LessThanOrEqual(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class GreaterThan: public Comparison {
public:
    GreaterThan(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

class GreaterThanOrEqual: public Comparison {
public:
    GreaterThanOrEqual(ExpressionBase* _left, ExpressionBase* _right);
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual std::string toString() const override;
};

}} // simplesql::expressions