
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
    DataType valueType;  // 4 + 1, avoid memory alignment
    byte value[0];

    static AnyValue* create(DataType _valueType, unsigned int _valueLen, byte* _valuePtr);
    static AnyValue* create(DataType _valueType, unsigned int _valueLen, byte* _valuePtr, byte* pos);
    AnyValue* makeCopy();

    virtual bool equalTo(AnyValue* that) = 0;
    virtual bool greaterThan(AnyValue* that) = 0;
    virtual bool greaterThanOrEqual(AnyValue * that) = 0;

private:
    AnyValue(); // do not allow use "new AnyValue()" to allocate an AnyValue instance.
};


class IntegerValue: public AnyValue {
public:
    static const size_t efaultSize = 6;
};

class BooleanValue: public AnyValue {
public:
    static const size_t efaultSize = 6;
    static BooleanValue* create(bool _value);
    static BooleanValue* create(bool _value, MemoryPool* _mp);
};

} // namespace simplesql::datatypes