#include <string>

#include "execution/LevelDB.h"
#include "util/Codec.h"

using namespace simplesql::execution;
using namespace simplesql::util;
using namespace simplesql;
using std::string;

leveldb::DB* LevelDB::getDB() {
    static leveldb::DB* db = nullptr;
    if (db == nullptr) {
        leveldb::Options options;
        options.create_if_missing = false;
        leveldb::Status status = leveldb::DB::Open(options, "simplesqlDB", &db);
        if (status.IsNotFound()) 
            db = initDB(db);
        else
            assert(status.ok());
    }
    return db;
}

leveldb::DB* LevelDB::initDB(leveldb::DB* db) {
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, "simplesqlDB", &db);
    assert(status.ok());
    // Init Table 0
    // Schema [Key Int, Value String]
    MemoryPool mp;
    {
        AnyValue* values[2];
        values[0] = IntegerValue::create(GlobalSettingID::TableCount, &mp);
        values[1] = StringValue::create(string("2"), &mp);
        Row* row = Row::create(values, 2, &mp);
        putRow(0, values[0], row);
    }
    // Init Table 1
    // Schema [TableName String, TableID Int, Schema String]
    {
        AnyValue* values[3];
        RelationReference ref(string(GLOBAL_SETTING_TABLE_NAME));
        ref.attributes.append(Attribute(Integer, string("Key")));
        ref.attributes.append(Attribute(String, string("Value")));

        values[0] = StringValue::create(string(GLOBAL_SETTING_TABLE_NAME), &mp);
        values[1] = IntegerValue::create(0, &mp);
        values[2] = StringValue::create(ref.attributes.encode(), &mp);
        Row* row = Row::create(values, 3, &mp);
        putRow(1, values[0], row);
    }
    {
        AnyValue* values[3];
        RelationReference ref(string(SCHEMA_TABLE_NAME));
        ref.attributes.append(Attribute(String, string("TableName")));
        ref.attributes.append(Attribute(Integer, string("TableID")));
        ref.attributes.append(Attribute(String, string("Schema")));
        values[0] = StringValue::create(string(SCHEMA_TABLE_NAME), &mp);
        values[1] = IntegerValue::create(1, &mp);
        values[2] = StringValue::create(ref.attributes.encode(), &mp);
        Row* row = Row::create(values, 3, &mp);
        putRow(1, values[0], row);
    }
    return db;
}

bool LevelDB::putRow(int tableID, AnyValue* pk, Row* row) {
    leveldb::DB* db = getDB();
    string key, value;
    encodeRowKey(tableID, pk, key);
    encodeRowValue(row, value);
    auto s = db->Put(leveldb::WriteOptions(), key, value);
    return s.ok();
}

bool LevelDB::getRow(int tableID, AnyValue* pk, const AttributeSeq& schema, Row*& result, MemoryPool* mp) {
    leveldb::DB* db = getDB();
    string key, value;
    encodeRowKey(tableID, pk, key);
    auto s = db->Get(leveldb::ReadOptions(), key, &value);
    if (s.ok()) {
        decodeRowValue(value, schema, result, mp);
    } else {
        return false;
    }
    return true;
}
