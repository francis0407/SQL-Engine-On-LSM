
#pragma once

#include "expressions/Expression.h"
#include "Attribute.h"

namespace simplesql {
namespace expressions {

class AttributeReference: public LeafExpression {
public:
    virtual AnyValue* eval(Row* r, MemoryPool* mp);

    Attribute reference;
};

}} // simplesql::expressions