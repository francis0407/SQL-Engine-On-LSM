
#pragma once

#include <string>

#include "Common.h"
#include "MemoryPool.h"

namespace simplesql {
namespace datatypes {

enum DataType : unsigned char { // ensure the enum variable only use ONE BYTE
    Boolean,
    Integer,
    Float,
    String
};

class AnyValue {
public:   
    static AnyValue* create(DataType _valueType, byte* _valuePtr) {return nullptr;}
    static AnyValue* create(DataType _valueType, byte* _valuePtr, MemoryPool* _mp) {return nullptr;}
    virtual AnyValue* makeCopy();

    // Comparison
    virtual bool equalTo(AnyValue* that) = 0;
    virtual bool greaterThan(AnyValue* that) = 0;
    virtual bool greaterThanOrEqual(AnyValue * that) = 0;
    
    // Conversion
    virtual bool asBoolean() = 0;
    virtual int asInteger() = 0;
    virtual float asFloat() = 0;
    virtual std::string asString() = 0;

    // Arithmetical
    virtual AnyValue* add(AnyValue* that, MemoryPool* mp) = 0;
    virtual AnyValue* minus(AnyValue* that, MemoryPool* mp) = 0;
    virtual AnyValue* multiply(AnyValue* that, MemoryPool* mp) = 0;
    virtual AnyValue* divide(AnyValue* that, MemoryPool* mp) = 0;
    virtual AnyValue* mod(AnyValue* that, MemoryPool* mp) = 0;

    const DataType valueType;  // 4 + 1, avoid memory alignment
protected:
    AnyValue(); // do not allow use "new AnyValue()" to allocate an AnyValue instance.

};

class IntegerValue: public AnyValue {
public:
    static const size_t defaultSize = 12;
    int value = 0;
    static IntegerValue* create(int _value) {return nullptr;}
    static IntegerValue* create(int _value, MemoryPool* _mp);

    virtual bool equalTo(AnyValue* that) override;
    virtual bool greaterThan(AnyValue* that) override;
    virtual bool greaterThanOrEqual(AnyValue * that) override;
private:
    IntegerValue();
};

class BooleanValue: public AnyValue {
public:
    static const size_t defaultSize = 6;
    bool value = false;
    static BooleanValue* create(bool _value) {return nullptr;}
    static BooleanValue* create(bool _value, MemoryPool* _mp);
private:
    BooleanValue();
};

class FloatValue: public AnyValue {
public:
    static const size_t defaultSize = 12;
    float value = 0.0;
    static FloatValue* create(float _value) {return nullptr;}
    static FloatValue* create(float _value, MemoryPool* _mp);
private:
    FloatValue();
};

class StringValue: public AnyValue {
public:
    char* value = nullptr;
    static StringValue* create(const char* _value, size_t _len) {return nullptr;} // a simple string type
    static StringValue* create(const char* _value); // a string with 4 bytes in the head
    static StringValue* create(const char* _value, size_t _len, MemoryPool* _mp);
    static StringValue* create(const char* _value, MemoryPool* _mp);
private:
    StringValue();
};
}} // namespace simplesql::datatypes

