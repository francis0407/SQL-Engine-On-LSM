
#pragma once

#include "Expression.h"

namespace simplesql::expressions {


class EqualTo: public BinaryExpression {
public:
    virtual AnyValue* eval(Row* r, MemoryPool* mp);
};

} // simplesql::expressions