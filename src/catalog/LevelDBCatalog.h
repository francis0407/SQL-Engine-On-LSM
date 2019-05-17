#pragma once

#include "leveldb/db.h"

#include "catalog/Catalog.h"
#include "execution/LevelDB.h"
using namespace simplesql::execution;

namespace simplesql {
namespace catalog {


class LevelDBCatalog : public CatalogBase {
public:
    LevelDBCatalog() {
        // prepare for leveldb
        LevelDB::getDB();
        schema.append(Attribute(String, string("TableName")));
        schema.append(Attribute(Integer, string("TableID")));
        schema.append(Attribute(String, string("Schema")));
    
    }
    virtual ~LevelDBCatalog() {

    }
    virtual bool findRelation(RelationReference& relation) override {
        MemoryPool mp;
        Row* row;
        StringValue* tableName = StringValue::create(relation.tableName, &mp);
        if (!LevelDB::getRow(SCHEMA_TABLE_ID, tableName, schema, row, &mp))
            return false;
        string schemaString = ((StringValue*)row->values[2])->toString();
        relation.attributes.decode(schemaString);
        relation.tableID = ((IntegerValue*)row->values[1])->value;
        if (relation.referenceName.empty())
            relation.referenceName = relation.tableName;
        relation.resolved = true;
        return true;
    }
private:
    AttributeSeq schema;
};

}} // namespace simplesql::catalog