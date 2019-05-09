
#pragma once

#include <string>

#include "Attribute.h"

namespace simplesql {
namespace catalog {

using std::string;

class RelationReference {
public:
    RelationReference(const string& _tableName) 
        : tableName(_tableName), referenceName(_tableName) {}
    RelationReference(const string& _tableName, const string& _referenceName) 
        : tableName(_tableName), referenceName(_referenceName) {}
    string tableName; // real name
    string referenceName; // alias
    
    bool resolved = false;

    AttributeSeq attributes;
    int tableID = -1;
};

}} // namespave simplesql::catalog