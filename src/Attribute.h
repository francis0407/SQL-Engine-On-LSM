
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
    Attribute& operator= (const Attribute&);
    bool equalTo(const Attribute& that);
    
    
    DataType dataType;
    int offset;
    std::string name;
    std::string tableReference;
};

class AttributeSeq {
public:
    AttributeSeq();
    void clean();
    void append(const Attribute& attribute);
    Attribute* findAttribute(const Attribute& attr);
    AttributeSeq& operator= (const AttributeSeq& that);
    AttributeSeq& operator+= (const AttributeSeq& that); 

    std::vector<Attribute> attributes;
};

} // namespace simplesql