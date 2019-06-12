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
    static leveldb::DB* closeDB();
    static bool putRow(int tableID, AnyValue* pk, Row* row);
    static bool getRow(int tableID, AnyValue* pk, const AttributeSeq& schema, Row*& result, MemoryPool* mp);
    static bool updateIndex(int tableID, int indexID, AnyValue* indexValue, AnyValue* pk);
    static bool removeIndex(int tableID, int indexID, AnyValue* indexValue, AnyValue* pk);
    static bool replaceIndex(int tableID, int indexID, AnyValue* oldValue, AnyValue* pk);
    static leveldb::Iterator* scanRow(int tableID);
    static leveldb::Iterator* scanRow(int tableID, AnyValue* start);
    static leveldb::Iterator* scanIndex(int tableID, int indexID);
    static leveldb::Iterator* scanIndex(int tableID, int indexID, AnyValue* start);
    static std::string dbName;
private:
    static leveldb::DB* initDB(leveldb::DB* &db);
};

}} // namespace simplesql::execution
