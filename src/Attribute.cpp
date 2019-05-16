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
    hasIndex = that.hasIndex;
    return *this;
}

std::string Attribute::encode() {
    // AttrName1 + AttrType1(1) + hasIndex1(1) 
    std::string result;
    size_t nameLen = name.size();
    result.append((char*)&nameLen, sizeof(size_t));
    result.append(name.data(), nameLen);
    result.append((char*)&dataType, sizeof(DataType));
    result.append((char*)&hasIndex, sizeof(bool));
    return result;
}
 
void Attribute::decode(const std::string& input) {
    const char* data = input.data();
    size_t offset = 0;
    size_t nameLen = *(size_t*)data;
    offset += sizeof(size_t);
    name.assign(data + offset, nameLen);
    offset += nameLen;
    dataType = *(DataType*)(data + offset);
    offset += sizeof(DataType);
    hasIndex = *(bool*)(data + offset);
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

std::string AttributeSeq::encode() {
    // string: 8 + x
    // AttrNum(8) + AttrName1 + AttrType1(1) + hasIndex1(1) 
    // + AttrName2 + AttrType2(1) + hasIndex2(1) ...
    size_t attrNum = attributes.size();
    std::string result;
    result.append((char*)&attrNum, sizeof(size_t));
    for (auto iter = attributes.begin(); iter != attributes.end(); iter++) 
        result.append(iter->encode());
    return result;
}

void AttributeSeq::decode(const std::string& input) {
    const char* data = input.data();
    const size_t inputSize = input.size();
    size_t offset = 0;
    size_t attrNum = *(size_t*)data;
    offset += sizeof(size_t);
    for (size_t i = 0; i < attrNum; i++) {
        Attribute attr;
        attr.decode(std::string(data + offset, inputSize - offset));
        this->append(attr);
    }
    if (attrNum > 0) 
        attributes[0].hasIndex = true; // Primary Key
    
}
