
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

void encodeRowKey(int tableID, AnyValue* pk, string& result);
void encodeIndexKey(int tableID, int indexID, AnyValue* index, string& result);
// void encodeIndexKeyWithPK(int tableID, int indexID, AnyValue* index, AnyValue* pk, string& result);
void encodeRowValue(Row* row, string& result);

void decodeRowValue(const string& input, const AttributeSeq& schema, Row* &result, MemoryPool* mp);
// void decodeRowKey(string& input, int& tableID, AnyValue*& )
}} // namespace simplesql::util