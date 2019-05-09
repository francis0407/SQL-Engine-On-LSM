
#pragma once

#include <string>

#include "Common.h"
#include "MemoryPool.h"

namespace simplesql {
namespace datatypes {

enum DataType : unsigned char { // ensure the enum variable only use ONE BYTE
    Unresolved,
    Boolean,
    Integer,
    Float,
    String
};

bool isNumber(DataType type);

class AnyValue {
public:   
    virtual ~AnyValue();
    DataType valueType;      // 4 + 1, avoid memory alignment
    static AnyValue* create(DataType _valueType, byte* _valuePtr) {return nullptr;}
    static AnyValue* create(DataType _valueType, byte* _valuePtr, MemoryPool* _mp) {return nullptr;}
    virtual AnyValue* makeCopy() {return nullptr;}

    virtual std::string toString() const = 0;

    virtual bool equalToSemantically(AnyValue* that) const = 0;
    // Comparison
    // virtual bool equalTo(AnyValue* that) const = 0;
    // virtual bool greaterThan(AnyValue* that) = 0;
    // virtual bool greaterThanOrEqual(AnyValue * that) = 0;
    
    // // Conversion
    // virtual bool asBoolean() = 0;
    // virtual int asInteger() = 0;
    // virtual float asFloat() = 0;
    // virtual std::string asString() = 0;

    // // Arithmetical
    // virtual AnyValue* add(AnyValue* that, MemoryPool* mp) = 0;
    // virtual AnyValue* minus(AnyValue* that, MemoryPool* mp) = 0;
    // virtual AnyValue* multiply(AnyValue* that, MemoryPool* mp) = 0;
    // virtual AnyValue* divide(AnyValue* that, MemoryPool* mp) = 0;
    // virtual AnyValue* mod(AnyValue* that, MemoryPool* mp) = 0;
protected:
    AnyValue(); // do not allow use "new AnyValue()" to allocate an AnyValue instance.

};

class IntegerValue: public AnyValue {
public:
    virtual ~IntegerValue();
    static const size_t defaultSize = 12;
    int value = 0;
    static IntegerValue* create(int _value);
    static IntegerValue* create(int _value, MemoryPool* _mp);

    virtual std::string toString() const override;
    virtual bool equalToSemantically(AnyValue* that) const override;
    // virtual bool equalTo(AnyValue* that) const override;
    // virtual bool greaterThan(AnyValue* that) override;
    // virtual bool greaterThanOrEqual(AnyValue * that) override;
private:
    IntegerValue(int _value);
};

class BooleanValue: public AnyValue {
public:
    virtual ~BooleanValue();
    static const size_t defaultSize = 6;
    bool value = false;
    static BooleanValue* create(bool _value);
    static BooleanValue* create(bool _value, MemoryPool* _mp);
    virtual std::string toString() const override;
    virtual bool equalToSemantically(AnyValue* that) const override;
    // virtual bool equalTo(AnyValue* that) const override;
private:
    BooleanValue(bool _value);
};

class FloatValue: public AnyValue {
public:
    virtual ~FloatValue();
    static const size_t defaultSize = 12;
    float value = 0.0;
    static FloatValue* create(float _value);
    static FloatValue* create(float _value, MemoryPool* _mp);
    virtual std::string toString() const override;
    virtual bool equalToSemantically(AnyValue* that) const override;
    // virtual bool equalTo(AnyValue* that) const override;
private:
    FloatValue(float _value);
};

class StringValue: public AnyValue {
public:
    virtual ~StringValue();
    char* value = nullptr; // a string with 8 bytes in the head
    size_t size() const;
    char* data() const;
    static StringValue* create(const char* _value, size_t _len); // a simple string type
    static StringValue* create(const char* _value);
    static StringValue* create(const std::string& _value);
    static StringValue* create(const char* _value, size_t _len, MemoryPool* _mp);
    static StringValue* create(const char* _value, MemoryPool* _mp);
    virtual std::string toString() const override;
    virtual bool equalToSemantically(AnyValue* that) const override;
    // virtual bool equalTo(AnyValue* that) const override;
private:
    StringValue(char* _value);
};

}} // namespace simplesql::datatypes

