
#pragma once

#include "Attribute.h"



namespace simplesql {
namespace catalog {

using namespace simplesql;

class Schema {
public:
    Schema();

    std::string encode();
    void decode();

    AttributeSeq attributes;
    AttributeSeq indexes;

};


}} // namespace simplesql::catalog