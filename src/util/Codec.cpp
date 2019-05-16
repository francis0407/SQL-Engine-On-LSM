
#include <cstring>

#include "util/Codec.h"
#include "Common.h"

using namespace simplesql::util;

#define REVERSE32(x) \
    (unsigned int)((((unsigned int)(x) & 0xff000000) >> 24) | \
                   (((unsigned int)(x) & 0x00ff0000) >> 8) | \
                   (((unsigned int)(x) & 0x0000ff00) << 8) | \
                   (((unsigned int)(x) & 0x000000ff) << 24) \
                  )

void simplesql::util::encodeInt(int value, string& result) {
    unsigned int ui = *(unsigned int*)(&value);
    ui += (1 << 31);
    if (!ISBIGENDIAN)
        ui = REVERSE32(ui);
    result.append((char*)&ui, sizeof(int));
}

int simplesql::util::decodeInt(const string& input) {
    unsigned int ui = *(unsigned int *)input.data();
    if (!ISBIGENDIAN)
        ui = REVERSE32(ui);
    ui -= (1 << 31);
    int result = ui;
    return result;
}

void simplesql::util::encodeFloat(float value, string& result) {
    unsigned int ui =  *(unsigned int*)(&value);
    if (value > 0) {
        ui |= 1 << 31;
    } else {
        ui = ~ui;
    }
    if (!ISBIGENDIAN)
        ui = REVERSE32(ui);
    result.assign((char*)&ui, sizeof(float));
}

float simplesql::util::decodeFloat(const string& input) {
    unsigned int ui = *(unsigned int *)input.data();
    if (!ISBIGENDIAN)
        ui = REVERSE32(ui);
    if ((ui & (1 << 31)) > 0) {
        ui &= ~(1 << 31);
    } else {
        ui = ~ui;
    }   
    return *(float*)(&ui);
}

void simplesql::util::encodeBoolean(bool value, string& result) {
    result.assign((char*)&value, 1);
}

bool simplesql::util::decodeBoolean(const string& input) {
    bool result = *(bool *)input.data();
    return result;
}

void simplesql::util::encodeString(const string& value, string& result) {
    result.assign(value);
}

string simplesql::util::decodeString(const string& input) {
    return input;
}

void simplesql::util::encodeAnyValue(AnyValue* value, string& result) {
    switch (value->valueType) {
        case Integer:
            encodeInt(((IntegerValue*)value)->value, result);
            break;
        case Float:
            encodeFloat(((FloatValue*)value)->value, result);
            break;
        case Boolean:
            encodeBoolean(((BooleanValue*)value)->value, result);
            break;
        case String:
            encodeString(((StringValue*)value)->toString(), result);
            break;
    }
}

// Key: TablePrefix_TableID_RowPrefix_PrimaryKey  [1 + 4 + 1 + x bytes]
void simplesql::util::encodeRowKey(int tableID, AnyValue* pk, string& result) {
    string tID;
    encodeInt(tableID, tID);
    string primaryKey;
    encodeAnyValue(pk, primaryKey);
    result = tablePrefix + tID + rowPrefix + primaryKey; 
}

// Key: TablePrefix_TableID_IndexPrefix_IndexID_IndexValue
void simplesql::util::encodeIndexKey(int tableID, int indexID, AnyValue* index, string& result) {
    string tID;
    encodeInt(tableID, tID);
    string iID;
    encodeInt(indexID, iID);
    string iValue;
    encodeAnyValue(index, iValue);
    result = tablePrefix + tID + indexPrefix + iID + iValue;
}

// Key: TablePrefix_TableID_IndexPrefix_IndexID_IndexValue
// void simplesql::util::encodeIndexKeyWithPK(int tableID, int indexID, AnyValue* index, AnyValue* pk, string& result) {
    
// }

void simplesql::util::encodeRowValue(Row* row, string& result) {
    for (size_t i = 0; i < row->len; i++) {
        switch (row->values[i]->valueType) {
            case Integer: {
                IntegerValue* value = (IntegerValue*)row->values[i];
                result.append((char*)&value->value, sizeof(value->value));
                break;
            }
            case Float: {
                FloatValue* value = (FloatValue*)row->values[i];
                result.append((char*)&value->value, sizeof(value->value));
                break;
            }
            case Boolean: {
                BooleanValue* value = (BooleanValue*)row->values[i];
                result.append((char*)&value->value, sizeof(value->value));
                break;
            }
            case String: {
                StringValue* value = (StringValue*)row->values[i];
                result.append(value->value, sizeof(size_t) + value->size());
                break;
            }
            default: {
                break;
            }
        }
    }
}

void simplesql::util::decodeRowValue(const string& input, const AttributeSeq& schema, Row* &result, MemoryPool* mp) {
    size_t offset = 0;
    const char* data = input.data();
    AnyValue** values = (AnyValue**)mp->allocate(sizeof(AnyValue*) * schema.attributes.size());
    for (size_t i = 0; i < schema.attributes.size(); i++) {
        switch (schema.attributes[i].dataType) {
            case Integer: {
                values[i] = IntegerValue::create(*(int*)(data + offset), mp);
                offset += sizeof(int);
                break;
            }
            case Float: {
                values[i] = FloatValue::create(*(float*)(data + offset), mp);
                offset += sizeof(float);
                break;
            }
            case Boolean: {
                values[i] = BooleanValue::create(*(bool*)(data + offset), mp);
                offset += sizeof(bool);
                break;
            }
            case String: {
                values[i] = StringValue::create(data + offset + sizeof(size_t), *(size_t*)(data + offset), mp);
                offset += *(size_t*)(data + offset) + sizeof(size_t);
                break;
            }
        }
    }
    result = Row::create(values, schema.attributes.size(), mp);
}

void simplesql::util::decodeIndexValue(const string& input, DataType type, Row* &result, MemoryPool* mp) {
    size_t offset = 0;
    const char* data = input.data();
    std::vector<AnyValue*> values;
    for (size_t i = 0; offset <= input.size(); i++) {
        switch (type) {
            case Integer: {
                values[i] = IntegerValue::create(*(int*)(data + offset), mp);
                offset += sizeof(int);
                break;
            }
            case Float: {
                values[i] = FloatValue::create(*(float*)(data + offset), mp);
                offset += sizeof(float);
                break;
            }
            case Boolean: {
                values[i] = BooleanValue::create(*(bool*)(data + offset), mp);
                offset += sizeof(bool);
                break;
            }
            case String: {
                values[i] = StringValue::create(data + offset + sizeof(size_t), *(size_t*)(data + offset), mp);
                offset += *(size_t*)(data + offset) + sizeof(size_t);
                break;
            }
        }
    }
    AnyValue** buf = (AnyValue**)mp->allocate(sizeof(AnyValue*) * values.size());
    memcpy(buf, values.data(), sizeof(AnyValue*) * values.size());
    result = Row::create(buf, values.size(), mp);
}
