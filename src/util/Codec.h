
#pragma once

#include "datatypes/ValueBase.h"
#include "catalog/RelationReference.h"
#include "Attribute.h"
#include "Row.h"

namespace simplesql {
namespace util {

using namespace simplesql::catalog;
using namespace simplesql::datatypes;
using namespace simplesql;

const char tablePrefix = 't';
const char indexPrefix = 'i';
const char rowPrefix = 'r';

void encodeFloat(float value, string& result);
void encodeInt(int value, string& result);
void encodeBoolean(bool value, string& result);
void encodeString(const string& value, string& result);

int decodeInt(const string& input);
float decodeFloat(const string& input);
bool decodeBoolean(const string& input);
string decodeString(const string& input);

void encodeAnyValue(AnyValue* value, string& result);
void decodeAnyValue(const string& input, DataType type, AnyValue* &result, MemoryPool* mp);

void encodeTableKey(int tableID, string& result);
void encodeRowKey(int tableID, AnyValue* pk, string& result);
void encodeIndexKey(int tableID, int indexID, string& result);
void encodeIndexKey(int tableID, int indexID, AnyValue* index, string& result);

void encodeRowValue(Row* row, string& result);

bool decodeRowKey(const string& input, DataType pkType, int& tableID, AnyValue* &pk, MemoryPool* mp);
bool decodeIndexKey(const string& input, DataType dataType, int& tableID, int& indexID, AnyValue* &indevValue, MemoryPool* mp);
void decodeRowValue(const string& input, const AttributeSeq& schema, Row* &result, MemoryPool* mp);
void decodeIndexValue(const string& input, DataType type, Row* &result, MemoryPool* mp);

}} // namespace simplesql::util