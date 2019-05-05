
#pragma once

#include "expressions/Expression.h"
#include "Attribute.h"
#include "datatypes/ValueBase.h"

namespace simplesql {
    
using namespace datatypes;

namespace expressions {

class Literal: public LeafExpression {
public:
    static Literal* copyAsLiteral(AnyValue* _value);
    static Literal* create(int intValue);
    static Literal* create(bool boolValue);
    static Literal* create(float floatValue);
    static Literal* create(std::string stringValue);

    
    ~Literal();

    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;

    DataType dataType() const;

    AnyValue* value = nullptr;
protected:
    Literal(AnyValue* _value);
};

}} // simplesql::expressions