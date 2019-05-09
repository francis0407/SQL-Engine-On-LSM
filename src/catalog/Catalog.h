#pragma once

#include "catalog/RelationReference.h"

namespace simplesql {
namespace catalog {

class CatalogBase {
public:
    CatalogBase();
    virtual ~CatalogBase();
    
    bool findRelation(RelationReference& relation);

};


}} // namespace simplesql::catalog