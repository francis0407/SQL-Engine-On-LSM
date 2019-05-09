#include "Attribute.h"

using namespace simplesql;

Attribute::Attribute() {

}
Attribute::Attribute(DataType _datatype, int _offset, std::string _name)
    : dataType(_datatype), offset(_offset), name(_name) {

}

bool Attribute::equalTo(const Attribute& that) {
    return tableReference == that.tableReference && name == that.name;
}

Attribute& Attribute::operator= (const Attribute& that) {
    dataType = that.dataType;
    offset = that.offset;
    name = that.name;
    tableReference = that.tableReference;
    return *this;
}

AttributeSeq::AttributeSeq() {
    
}

void AttributeSeq::clean() {
    attributes.clear();
}

void AttributeSeq::append(const Attribute& attr) {
    attributes.push_back(attr);
}

Attribute* AttributeSeq::findAttribute(const Attribute& attr) {
    for (auto iter : attributes) {
        if (iter.equalTo(attr))
            return &iter;
        if (attr.tableReference.empty() && iter.name == attr.name)
            return &iter;
    }
    return nullptr;
}

AttributeSeq& AttributeSeq::operator= (const AttributeSeq& that) {
    attributes = that.attributes;
    return *this;
}

AttributeSeq& AttributeSeq::operator+= (const AttributeSeq& that) {
    attributes.insert(attributes.end(), that.attributes.begin(), that.attributes.end());
    return *this;
}
