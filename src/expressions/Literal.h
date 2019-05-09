
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
    static Literal* create(const std::string& stringValue);

    
    ~Literal();

    virtual AnyValue* eval(Row* r, MemoryPool* mp) override;
    virtual bool equalTo(ExpressionBase* that) const override;
    virtual std::string toString() const override;
    DataType valueType() const;
    virtual void resolveDataType() override;
    AnyValue* value = nullptr;
protected:
    Literal(AnyValue* _value);
};

}} // simplesql::expressions