
#pragma once

#include "expressions/Expression.h"
#include "Attribute.h"
#include "datatypes/ValueBase.h"

namespace simplesql::expressions {
using namespace datatypes;

class Literal: public LeafExpression {
public:
    static Literal* copyAsLiteral(AnyValue* _value);

    ~Literal();

    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;

    DataType dataType() const;

    AnyValue* value = nullptr;
protected:
    Literal(AnyValue* _value);
};

} // simplesql::expressions