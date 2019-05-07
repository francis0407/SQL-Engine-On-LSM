
#pragma once

#include "datatypes/ValueBase.h"
#include "catalog/RelationReference.h"
#include "Attribute.h"

namespace simplesql {
namespace util {

using namespace simplesql::catalog;
using namespace simplesql::datatypes;
using namespace simplesql;

void encodeRowKey(int tableID, AnyValue* pk, string& result);
void encodeIndexKeyWithoutPK(int tableID, AnyValue* index, string& result);
void encodeIndexKeyWithPK(int tableID, AnyValue* index, AnyValue* pk, string& result);

}} // namespace simplesql::util