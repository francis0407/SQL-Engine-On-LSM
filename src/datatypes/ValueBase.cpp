
#include <cstring>
#include "datatypes/ValueBase.h"

using namespace simplesql::datatypes;
using namespace simplesql;

bool isNumber(DataType type) {
    return type == Integer || type == Float;
}

AnyValue::AnyValue() {}
AnyValue::~AnyValue() {}

IntegerValue::~IntegerValue() {}

IntegerValue::IntegerValue(int _value) : value(_value) {
    valueType = Integer;
}

IntegerValue* IntegerValue::create(int _value) {
    return new IntegerValue(_value);
}

std::string IntegerValue::toString() const {
    return std::to_string(value);
}

bool IntegerValue::equalToSemantically(AnyValue* that) const {
    if (that->valueType != Integer)
        return false;
    return ((IntegerValue*)that)->value == value;
}

FloatValue::~FloatValue(){ }

FloatValue::FloatValue(float _value) : value(_value) {
    valueType = Float;
} 

FloatValue* FloatValue::create(float _value) {
    return new FloatValue(_value);
}

std::string FloatValue::toString() const {
    return std::to_string(value);
}

bool FloatValue::equalToSemantically(AnyValue* that) const {
    if (that->valueType != Float)
        return false;
    return ((FloatValue*)that)->value == value;
}

BooleanValue::~BooleanValue(){ }

BooleanValue::BooleanValue(bool _value) : value(_value) {
    valueType = Boolean;
} 

BooleanValue* BooleanValue::create(bool _value) {
    return new BooleanValue(_value);
}

std::string BooleanValue::toString() const {
    return std::to_string(value);
}

bool BooleanValue::equalToSemantically(AnyValue* that) const {
    if (that->valueType != Boolean)
        return false;
    return ((BooleanValue*)that)->value == value;
}

StringValue::~StringValue() {
    if (value != nullptr)
        delete value;
}

StringValue::StringValue(char* _value) : value(_value) {
    valueType = String;
} 

StringValue* StringValue::create(const std::string& _value) {
    size_t size = _value.size();
    char* buffer = new char[sizeof(size_t) + size];
    memcpy(buffer, &size, sizeof(size_t));
    memcpy(buffer + sizeof(size_t), _value.data(), size);
    return new StringValue(buffer);
}

// StringValue* String 

size_t StringValue::size() const {
    size_t* result = (size_t*)value;
    return *result;
}

char* StringValue::data() const {
    return value + sizeof(size_t);
}

std::string StringValue::toString() const {
    return "'" + std::string(data(), size()) + "'";
}

bool StringValue::equalToSemantically(AnyValue* that) const {
    if (that->valueType != String)
        return false;
    if (((StringValue*)that)->size() != size())
        return false;

    int result =  memcmp(((StringValue*)that)->data(), data(), size());
    return result == 0;
}


