
#pragma once

#include <string>


namespace simplesql {
namespace catalog {

using std::string;

class RelationReference {
public:
    RelationReference(const string& _tableName) : tableName(_tableName) {}
    RelationReference(const string& _tableName, const string& _referenceName) : tableName(_tableName), referenceName(_referenceName) {}
    string tableName; // real name
    string referenceName; // alias
};

}} // namespave simplesql::catalog