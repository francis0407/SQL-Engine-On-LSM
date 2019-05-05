
#pragma once

#include "expressions/Expression.h"
#include "Attribute.h"

namespace simplesql {
namespace expressions {

using std::string;

class AttributeReference : public ExpressionBase {
public:
    AttributeReference(const string& _name);
    AttributeReference(const string& _name, const string& _table);

    virtual AnyValue* eval(Row* r, MemoryPool* mp);

    Attribute reference;
};

}} // simplesql::expressions