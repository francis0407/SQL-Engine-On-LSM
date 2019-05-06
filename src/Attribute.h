
#pragma once

#include "datatypes/ValueBase.h"

#include <string>
#include <vector>

namespace simplesql {

using namespace simplesql::datatypes;

class Attribute {
public:
    Attribute(DataType _datatype, int _offset, std::string _name);
    Attribute();
    bool equalTo(const Attribute& that);
    DataType dataType;
    int offset;
    std::string name;
    std::string tableReference;
};

class AttributeSeq {
public:
    AttributeSeq();
    void append(const Attribute& attribute);
    std::vector<Attribute> attributes;
private:
    int bytes = 0;
};

} // namespace simplesql