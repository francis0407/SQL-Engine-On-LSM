
#pragma once

#include "Attribute.h"
#include "expressions/Expression.h"

namespace simplesql {
namespace expressions {

using std::string;

class AttributeReference : public LeafExpression {
public:
    AttributeReference(const string &_name);
    AttributeReference(const string &_name, const string &_table);

    virtual AnyValue *eval(Row *r, MemoryPool *mp);
    virtual std::string toString() const override;
    Attribute reference;
};

} // namespace expressions
} // namespace simplesql