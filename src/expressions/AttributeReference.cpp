 
#include "expressions/AttributeReference.h"
 
using namespace simplesql::expressions;
using namespace simplesql::datatypes;

AttributeReference::AttributeReference(const string& _name) : LeafExpression(_AttributeReference) {
    reference.name = _name;
}

AttributeReference::AttributeReference(const string& _name, const string& _table) : LeafExpression(_AttributeReference) {
    reference.name = _name;
    reference.tableReference = _table;
}

AnyValue* AttributeReference::eval(Row* r, MemoryPool *mp) {
    return AnyValue::create(reference.dataType, r->values + reference.offset, mp);
}

std::string AttributeReference::toString() const {
    std::string result = reference.name;
    return result;
}

