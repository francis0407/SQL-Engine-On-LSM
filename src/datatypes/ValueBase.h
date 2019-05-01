
#pragma once

#include "Common.h"
#include "MemoryPool.h"

namespace simplesql::datatypes {

enum DataType : unsigned char { // ensure the enum variable only use ONE BYTE
    Integer,
    SmallInt,
    BigInt,
    Float,
    Double,
    String
};

class AnyValue {
public:   
    unsigned int valueLen;

    static AnyValue* create(DataType _valueType, unsigned int _valueLen, byte* _valuePtr);
    static AnyValue* create(DataType _valueType, unsigned int _valueLen, byte* _valuePtr, byte* pos);
    AnyValue* makeCopy();

    virtual bool equalTo(AnyValue* that) = 0;
    virtual bool greaterThan(AnyValue* that) = 0;
    virtual bool greaterThanOrEqual(AnyValue * that) = 0;
    virtual bool asBoolean() = 0;

protected:
    const DataType valueType;  // 4 + 1, avoid memory alignment
    AnyValue(); // do not allow use "new AnyValue()" to allocate an AnyValue instance.

};

class IntegerValue: public AnyValue {
public:
    static const size_t defaultSize = 12;
    int value = 0;
    static IntegerValue* create(int _value);
    static IntegerValue* create(int _value, MemoryPool* _mp);
private:
    IntegerValue();
};

class BooleanValue: public AnyValue {
public:
    static const size_t defaultSize = 6;
    bool value = false;
    static BooleanValue* create(bool _value);
    static BooleanValue* create(bool _value, MemoryPool* _mp);
private:
    BooleanValue();
};

class BigIntValue: public AnyValue {
public:
    static const size_t defaultSize = 16;
    long long int value = 0;
    static BigIntValue* create(long long int _value);
    static BigIntValue* create(long long int _value, MemoryPool* _mp);
private:
    BigIntValue();
};

class SmallIntValue: public AnyValue {
public:
    static const size_t defaultSize = 8;
    short int value = 0;
    static SmallIntValue* create(short int _value);
    static SmallIntValue* create(short int _value, MemoryPool* _mp);
private:
    SmallIntValue();
};

class FloatValue: public AnyValue {
public:
    static const size_t defaultSize = 12;
    float value = 0.0;
    static FloatValue* create(float _value);
    static FloatValue* create(float _value, MemoryPool* _mp);
private:
    FloatValue();
};

class DoubleValue: public AnyValue {
public:
    static const size_t defaultSize = 16;
    double value = 0.0;
    static DoubleValue* create(double _value);
    static DoubleValue* create(double _value, MemoryPool* _mp);
private:
    DoubleValue();
};

class StringValue: public AnyValue {
public:
    char* value = nullptr;
    static StringValue* create(char* _value, size_t _len);
    static StringValue* create(char* _value, size_t _len, MemoryPool* _mp);
private:
    StringValue();
};
} // namespace simplesql::datatypes

