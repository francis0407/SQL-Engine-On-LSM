#include "Attribute.h"

using namespace simplesql;

Attribute::Attribute() {

}

Attribute::Attribute(DataType _datatype, std::string _name)
    : dataType(_datatype), name(_name) {
}

Attribute::Attribute(DataType _datatype, std::string _tableReference, std::string _name)
    : dataType(_datatype), name(_name), tableReference(_tableReference) {
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

AttributeSeq::AttributeSeq() : _bytes(0) {
    
}

void AttributeSeq::clean() {
    attributes.clear();
}

void AttributeSeq::append(const Attribute& attr) {
    attributes.push_back(attr);
}

size_t AttributeSeq::bytes() {
    if (_bytes != 0) return _bytes;
    for (auto iter : attributes)
       _bytes += valueSize(iter.dataType);
    return _bytes;
}

Attribute* AttributeSeq::findAttribute(const Attribute& attr) {
    for (size_t i = 0; i < attributes.size(); i++) {
        Attribute* iter = &attributes[i];
        if (iter->equalTo(attr))
            return iter;
        if (attr.tableReference.empty() && iter->name == attr.name)
            return iter;
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
