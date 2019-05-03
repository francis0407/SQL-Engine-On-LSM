 
 #include "expressions/Literal.h"

 
namespace simplesql::expressions {
 
AnyValue* Literal::eval(Row* r, MemoryPool *mp) {
    return value;
}

Literal* Literal::copyAsLiteral(AnyValue* _value) {
    return new Literal(_value);
}

Literal::Literal(AnyValue* _value) {
    value = _value->makeCopy();
}

Literal::~Literal() {
    if (value != nullptr)
        delete value;
}

DataType Literal::dataType() const {
    return value->valueType;
}


} // namespace simplesql::expressions