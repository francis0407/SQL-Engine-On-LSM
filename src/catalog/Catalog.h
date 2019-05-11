#pragma once

#include "catalog/RelationReference.h"

namespace simplesql {
namespace catalog {

class CatalogBase {
public:
    CatalogBase(){}
    virtual ~CatalogBase(){}
    
    virtual bool findRelation(RelationReference& relation) = 0;

};


}} // namespace simplesql::catalog