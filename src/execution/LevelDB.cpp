#include <string>

#include "execution/LevelDB.h"
#include "util/Codec.h"

using namespace simplesql::execution;
using namespace simplesql::util;
using namespace simplesql;
using std::string;

string LevelDB::dbName = "simplesqlDB";

leveldb::DB* LevelDB::getDB() {
    static leveldb::DB* db = nullptr;
    if (db == nullptr) {
        leveldb::Options options;
        options.create_if_missing = false;
        leveldb::Status status = leveldb::DB::Open(options, dbName, &db);
        if (!status.ok()) 
            db = initDB(db);
    }
    return db;
}

leveldb::DB* LevelDB::closeDB() {
    leveldb::DB* db = getDB();
    delete db; 
}

leveldb::DB* LevelDB::initDB(leveldb::DB* &db) {
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, dbName, &db);
    assert(status.ok());
    // Init Table 0
    // Schema [Key Int, Value String]
    MemoryPool mp;
    {
        AnyValue* values[2];
        values[0] = IntegerValue::create(GlobalSettingID::TableCount, &mp);
        values[1] = StringValue::create(string("2"), &mp);
        Row* row = Row::copyFrom(values, 2, &mp);
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
        Row* row = Row::copyFrom(values, 3, &mp);
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
        Row* row = Row::copyFrom(values, 3, &mp);
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

leveldb::Iterator* LevelDB::scanRow(int tableID) {
    leveldb::DB* db = getDB();
    auto iter = db->NewIterator(leveldb::ReadOptions());
    string tableKey;
    encodeTableKey(tableID, tableKey);
    iter->Seek(tableKey);
    return iter;
}

bool LevelDB::updateIndex(int tableID, int indexID, AnyValue* indexValue, AnyValue* pk) {
    leveldb::DB* db = getDB();
    string indexKey, indexPk;
    MemoryPool mp;
    encodeIndexKey(tableID, indexID, indexValue, indexKey);
    auto s = db->Get(leveldb::ReadOptions(), indexKey, &indexPk);
    if (s.ok()) {
        // add new pk
        Row* row;
        decodeIndexValue(indexPk, pk->valueType, row, &mp);
        // if the index is existed, no need to update
        for (size_t i = 0; i < row->len; i++) 
            if (pk->equalToSemantically(row->values[i])) return true;
        AnyValue** newIndexRow = (AnyValue**) mp.allocate((row->len + 1) * sizeof(AnyValue*));
        memcpy(newIndexRow, row->values, row->len * sizeof(AnyValue*));
        newIndexRow[row->len] = pk;
        Row* newRow = Row::create(newIndexRow, row->len + 1, &mp);
        indexPk.clear();
        encodeRowValue(newRow, indexPk);
        auto s2 = db->Put(leveldb::WriteOptions(), indexKey, indexPk);
        return s2.ok();
    } else if (s.IsNotFound()) {
        // add new index
        Row* newRow = Row::copyFrom(&pk, 1, &mp);
        indexPk.clear();
        encodeRowValue(newRow, indexPk);
        auto s2 = db->Put(leveldb::WriteOptions(), indexKey, indexPk);
        return s2.ok();
    }
    return false;
}

bool LevelDB::removeIndex(int tableID, int indexID, AnyValue* indexValue, AnyValue* pk) {
    leveldb::DB* db = getDB();
    string indexKey, indexPk;
    MemoryPool mp;
    encodeIndexKey(tableID, indexID, indexValue, indexKey);
    auto s = db->Get(leveldb::ReadOptions(), indexKey, &indexPk);
    if (s.ok()) {
        // add new pk
        Row* row;
        decodeIndexValue(indexPk, pk->valueType, row, &mp);
        for (size_t i = 0; i < row->len; i++) {
            if (row->values[i]->equalToSemantically(pk)) {
                for (size_t j = i; j < row->len - 1; j++)
                    row->values[j] = row->values[j + 1];
                row->len--;
                break;
            }
        }
        if (row->len == 0) {
            // delete index
            auto s2 = db->Delete(leveldb::WriteOptions(), indexKey);
            return s2.ok();
        } else {
            string indexPk;
            encodeRowValue(row, indexPk);
            auto s2 = db->Put(leveldb::WriteOptions(), indexKey, indexPk);
            return s2.ok();
        }
    }
    return false;
}