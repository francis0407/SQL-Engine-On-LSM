
#include <cstring>
#include "datatypes/ValueBase.h"

using namespace simplesql::datatypes;
using namespace simplesql;

IntegerValue IntegerValue::prototype;
BooleanValue BooleanValue::prototype;
FloatValue FloatValue::prototype;
StringValue StringValue::prototype;

bool simplesql::datatypes::isNumber(DataType type) {
    return type == Integer || type == Float;
}

size_t simplesql::datatypes::valueSize(DataType type) {
    switch (type) {
        case Unresolved : return 0;
        case Integer : return sizeof(int);
        case Float : return sizeof(float);
        case Boolean : return sizeof(bool);
        case String : return sizeof(char*);
    }
    return 0;
}

AnyValue::AnyValue() {}
AnyValue::~AnyValue() {}

AnyValue* AnyValue::create(DataType _valueType, byte* _valuePtr) {
    switch (_valueType) {
        case Unresolved : return nullptr;
        case Integer : return IntegerValue::create(*(int*)_valuePtr);
        case Float : return FloatValue::create(*(float*)_valuePtr);
        case Boolean : return BooleanValue::create(*(bool*)_valuePtr);
        case String : return StringValue::create((char*)_valuePtr);
    }
    return nullptr;
}

bool AnyValue::asBoolean() const {
    return true;
}

IntegerValue::~IntegerValue() {}

IntegerValue::IntegerValue() : value(0) {
    valueType = Integer;
}

IntegerValue::IntegerValue(int _value) : value(_value) {
    valueType = Integer;
}


IntegerValue* IntegerValue::create(int _value) {
    return new IntegerValue(_value);
}   

IntegerValue* IntegerValue::create(int _value, MemoryPool* _mp) {
    IntegerValue* result = (IntegerValue*)_mp->allocate(sizeof(IntegerValue));
    memcpy(result, &prototype, sizeof(IntegerValue));
    result->valueType = Integer;
    result->value = _value;
    return result;
}

AnyValue* IntegerValue::makeCopy() {
   return new IntegerValue(this->value);
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

FloatValue::FloatValue() : value(0.0f) {
    valueType = Float;
}

FloatValue::FloatValue(float _value) : value(_value) {
    valueType = Float;
} 

FloatValue* FloatValue::create(float _value) {
    return new FloatValue(_value);
}

FloatValue* FloatValue::create(float _value, MemoryPool* _mp) {
    FloatValue* result = (FloatValue*)_mp->allocate(sizeof(FloatValue));
    memcpy(result, &prototype, sizeof(FloatValue));
    result->value = _value;
    result->valueType = Float;
    return result;
}

AnyValue* FloatValue::makeCopy() {
   return new FloatValue(this->value);
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

BooleanValue::BooleanValue() : value(false) {
    valueType = Boolean;
} 

BooleanValue::BooleanValue(bool _value) : value(_value) {
    valueType = Boolean;
} 

BooleanValue* BooleanValue::create(bool _value) {
    return new BooleanValue(_value);
}

BooleanValue* BooleanValue::create(bool _value, MemoryPool* _mp) {
    BooleanValue* result = (BooleanValue*)_mp->allocate(sizeof(BooleanValue));
    memcpy(result, &prototype, sizeof(BooleanValue));
    result->value = _value;
    result->valueType = Boolean;
    return result;
}

AnyValue* BooleanValue::makeCopy() {
   return new BooleanValue(this->value);
}

std::string BooleanValue::toString() const {
    return std::to_string(value);
}

bool BooleanValue::equalToSemantically(AnyValue* that) const {
    if (that->valueType != Boolean)
        return false;
    return ((BooleanValue*)that)->value == value;
}

bool BooleanValue::asBoolean() const {
    return value;
}

StringValue::~StringValue() {
    if (value != nullptr && needRelease)
        delete value;
}

StringValue::StringValue() {
    valueType = String;
    needRelease = false;
    value = nullptr;
}

StringValue::StringValue(char* _value) : value(_value) {
    valueType = String;
} 

void StringValue::init(const char* _value, size_t _len, StringValue* target) {
    char* buffer = new char[sizeof(size_t) + _len];
    memcpy(buffer, &_len, sizeof(size_t));
    memcpy(buffer + sizeof(size_t), _value, _len);
    target->value = buffer;
    target->needRelease = true;
}

StringValue* StringValue::create(const std::string& _value) {
    StringValue* result = new StringValue();
    init(_value.data(), _value.size(), result);
    return result;
}

StringValue* StringValue::create(const char* _value) {
    StringValue* result = new StringValue();
    init(_value + 4, *(size_t*)_value, result);
    return result;
}

StringValue* StringValue::create(const char* _value, size_t _len) {
    StringValue* result = new StringValue();
    init(_value, _len, result);
    return result;
}

StringValue* StringValue::create(const char* _value, size_t _len, MemoryPool* _mp) {
    StringValue* result = (StringValue*) _mp->allocate(sizeof(StringValue));
    memcpy(result, &prototype, sizeof(StringValue));
    init(_value, _len, result);
    return result;
}

AnyValue* StringValue::makeCopy() {
   return StringValue::create(data(), size());
}

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

int StringValue::compare(const char* s1, size_t n1, const char* s2, size_t n2) {
    const size_t minLen = (n1 < n2) ? n1 : n2;
    int r = memcmp(s1, s2, minLen);
    if (r == 0) {
        if (n1 < n2) r = -1;
        else if (n1 > n2) r = +1;
    }
    return r;
}


