#pragma once

#include "leveldb/db.h"

#include "catalog/Catalog.h"

namespace simplesql {
namespace catalog {


class LevelDBCatalog : public CatalogBase {
public:
    LevelDBCatalog();
    virtual ~LevelDBCatalog();
    virtual bool findRelation(RelationReference& relation) override;
private:

    leveldb::DB* db;
};

}} // namespace simplesql::catalog