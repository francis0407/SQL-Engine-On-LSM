 
 #include "expressions/Literal.h"

 
namespace simplesql {
namespace expressions {
 
AnyValue* Literal::eval(Row* r, MemoryPool *mp) {
    return value;
}

Literal* Literal::copyAsLiteral(AnyValue* _value) {
    // return new Literal(_value);
    return nullptr;
}

Literal::Literal(AnyValue* _value) : LeafExpression() {
    value = _value;
}

Literal::~Literal() {
    if (value != nullptr)
        delete value;
}

DataType Literal::dataType() const {
    return value->valueType;
}

Literal* Literal::create(bool boolValue) {
    BooleanValue* value = BooleanValue::create(boolValue);
    return new Literal(value);
}

Literal* Literal::create(int intValue) {
    IntegerValue* value = IntegerValue::create(intValue);
    return new Literal(value);
}

Literal* Literal::create(std::string stringValue) {
    StringValue* value = StringValue::create(stringValue.data(), stringValue.size());
    return new Literal(value);
}

Literal* Literal::create(float floatValue) {
    FloatValue* value = FloatValue::create(floatValue);
    return new Literal(value);
}


}} // namespace simplesql::expressions