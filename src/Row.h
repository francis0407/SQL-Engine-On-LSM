#pragma once

#include "datatypes/ValueBase.h"
#include "Attribute.h"

namespace simplesql {

using namespace datatypes;

class Row {
public:
    static Row* create(AnyValue* columns[], AttributeSeq& attrs, MemoryPool* mp);
    static Row* concat(Row* r1, Row* r2, MemoryPool* mp);

    byte* values = nullptr;
    size_t bytes = 0;
};

} // namespace simplesql