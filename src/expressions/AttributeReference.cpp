 
#include "expressions/AttributeReference.h"
 
using namespace simplesql::expressions;
using namespace simplesql::datatypes;

AttributeReference::AttributeReference(const string& _name) : LeafExpression(_AttributeReference) {
    reference.name = _name;
}

AttributeReference::AttributeReference(const string& _table, const string& _name) : LeafExpression(_AttributeReference) {
    reference.name = _name;
    reference.tableReference = _table;
}

AnyValue* AttributeReference::eval(Row* r, MemoryPool *mp) {
    return AnyValue::create(reference.dataType, r->values + reference.offset, mp);
}

std::string AttributeReference::toString() const {
    std::string prefix = reference.tableReference.empty() ? "" : reference.tableReference;
    return prefix + reference.name;
}

bool AttributeReference::equalTo(ExpressionBase* that) const {
    if (that->type != _AttributeReference)
        return false;
    AttributeReference* _that = (AttributeReference*) that;
    return _that->reference.equalTo(reference);
}

