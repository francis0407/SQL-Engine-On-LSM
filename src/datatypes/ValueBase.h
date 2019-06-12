
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



DataType toDataType(const std::string& type);
bool isNumber(DataType type);
size_t valueSize(DataType type);
std::string dataTypeToString(DataType type);
class AnyValue {
public:   
    virtual ~AnyValue();
    DataType valueType;      // 4 + 1, avoid memory alignment
    static AnyValue* create(DataType _valueType, byte* _valuePtr);
    static AnyValue* create(DataType _valueType, byte* _valuePtr, MemoryPool* _mp);
    virtual AnyValue* makeCopy() = 0;
    virtual AnyValue* makeCopy(MemoryPool* _mp) = 0;

    virtual std::string toString() const = 0;

    virtual bool equalToSemantically(const AnyValue* that) const = 0;
    // Comparison
    // virtual bool equalTo(AnyValue* that) const = 0;
    bool lessThanOrEqual(AnyValue* that) const;
    // virtual bool greaterThan(AnyValue* that) = 0;
    // virtual bool greaterThanOrEqual(AnyValue * that) = 0;
    
    // // Conversion
    virtual bool asBoolean() const;
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
    IntegerValue();
    virtual ~IntegerValue();
    int value = 0;
    static IntegerValue* create(int _value);
    static IntegerValue* create(int _value, MemoryPool* _mp);
    virtual AnyValue* makeCopy() override;
    virtual AnyValue* makeCopy(MemoryPool* _mp) override;
    virtual std::string toString() const override;
    virtual bool equalToSemantically(const AnyValue* that) const override;
    // virtual bool equalTo(AnyValue* that) const override;
    // virtual bool greaterThan(AnyValue* that) override;
    // virtual bool greaterThanOrEqual(AnyValue * that) override;
private:
    static IntegerValue prototype;
    IntegerValue(int _value);
};

class BooleanValue: public AnyValue {
public:
    BooleanValue();
    virtual ~BooleanValue();
    bool value = false;
    static BooleanValue* create(bool _value);
    static BooleanValue* create(bool _value, MemoryPool* _mp);
    virtual AnyValue* makeCopy() override;
    virtual AnyValue* makeCopy(MemoryPool* _mp) override;
    virtual std::string toString() const override;
    virtual bool equalToSemantically(const AnyValue* that) const override;
    virtual bool asBoolean() const override;
    // virtual bool equalTo(AnyValue* that) const override;
private:
    static BooleanValue prototype;
    BooleanValue(bool _value);
};

class FloatValue: public AnyValue {
public:
    FloatValue();
    virtual ~FloatValue();
    float value = 0.0;
    static FloatValue* create(float _value);
    static FloatValue* create(float _value, MemoryPool* _mp);
    virtual AnyValue* makeCopy() override;
    virtual AnyValue* makeCopy(MemoryPool* _mp) override;
    virtual std::string toString() const override;
    virtual bool equalToSemantically(const AnyValue* that) const override;
    // virtual bool equalTo(AnyValue* that) const override;
private:
    static FloatValue prototype;
    FloatValue(float _value);
};

class StringValue: public AnyValue {
public:
    StringValue();
    virtual ~StringValue();
    char* value = nullptr; // a string with 8 bytes in the head
    size_t size() const;
    char* data() const;
    static StringValue* create(const char* _value, size_t _len); // a simple string type
    static StringValue* create(char* _value);
    static StringValue* create(const std::string& _value);
    static StringValue* create(const std::string& _value, MemoryPool* _mp);
    static StringValue* create(const char* _value, size_t _len, MemoryPool* _mp);
    static StringValue* create(char* _value, MemoryPool* _mp);
    static int compare(const char* s1, size_t n1, const char* s2, size_t n2);
    virtual AnyValue* makeCopy() override;
    virtual AnyValue* makeCopy(MemoryPool* _mp) override;
    virtual std::string toString() const override;
    virtual bool equalToSemantically(const AnyValue* that) const override;
    // virtual bool equalTo(AnyValue* that) const override;
private:
    static StringValue prototype;
    StringValue(char* _value);
    static void init(const char* _value, size_t _len, StringValue* target);
    bool needRelease = false;
};

struct AnyValueCmp {
    bool operator()(const AnyValue* &left, const AnyValue* &right) const {
        return left->equalToSemantically(right);
    }
};

struct AnyValueHash {
    size_t operator()(const AnyValue* &value) const {
        return 0;
    }
};

}} // namespace simplesql::datatypes

