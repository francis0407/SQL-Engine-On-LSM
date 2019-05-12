
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
    int group;
    int offset;
    std::string name;
    std::string tableReference;
};

class AttributeSeq {
public:
    AttributeSeq();
    void clean();
    void append(const Attribute& attribute);
    size_t bytes();
    Attribute* findAttribute(const Attribute& attr);
    AttributeSeq& operator= (const AttributeSeq& that);
    AttributeSeq& operator+= (const AttributeSeq& that); 

    std::vector<Attribute> attributes;
private:
    size_t _bytes = 0;
};

} // namespace simplesql