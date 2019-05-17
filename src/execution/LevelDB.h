#pragma once

#include <assert.h>
#include "leveldb/db.h"
#include "datatypes/ValueBase.h"
#include "Row.h"
#include "MemoryPool.h"

using namespace simplesql;
using namespace simplesql::datatypes;
namespace simplesql {
namespace execution {

class LevelDB {
public:
    static leveldb::DB* getDB();
    static bool putRow(int tableID, AnyValue* pk, Row* row);
    static bool getRow(int tableID, AnyValue* pk, const AttributeSeq& schema, Row*& result, MemoryPool* mp);
    static leveldb::Iterator* scanRow(int tableID);
private:
    static leveldb::DB* initDB(leveldb::DB* db);
};

}} // namespace simplesql::execution
