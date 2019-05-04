
#pragma once

#include "Expression.h"

namespace simplesql {
namespace expressions {


class EqualTo: public BinaryExpression {
public:
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
};

class LessThan: public BinaryExpression {
public:
    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
};

}} // simplesql::expressions