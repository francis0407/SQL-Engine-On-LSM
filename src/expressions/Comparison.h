
#pragma once

#include "Expression.h"

namespace simplesql {
namespace expressions {


class EqualTo: public BinaryExpression {
public:
    EqualTo(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override{
        return nullptr;
    }
};

class LessThan: public BinaryExpression {
public:
    LessThan(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override{
        return nullptr;
    }
};

class LessThanOrEqual: public BinaryExpression {
public:
    LessThanOrEqual(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override{
        return nullptr;
    }
};

class GreaterThan: public BinaryExpression {
public:
    GreaterThan(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override{
        return nullptr;
    }
};

class GreaterThanOrEqual: public BinaryExpression {
public:
    GreaterThanOrEqual(ExpressionBase* _left, ExpressionBase* _right) : BinaryExpression(_left, _right) {}
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override{
        return nullptr;
    }
};

}} // simplesql::expressions