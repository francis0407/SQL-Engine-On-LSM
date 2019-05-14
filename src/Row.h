#pragma once

#include "datatypes/ValueBase.h"
#include "Attribute.h"

namespace simplesql {

using namespace datatypes;

class Row {
public:
    // static Row* create(AnyValue* columns[], AttributeSeq& attrs, MemoryPool* mp);
    static Row* create(AnyValue* columns[], size_t _len, MemoryPool* mp);
    static Row* copyFrom(AnyValue* columns[], size_t _len, MemoryPool *mp);
    static Row* concat(Row* r1, Row* r2, MemoryPool* mp);
    Row* makeCopy(MemoryPool* mp);
    Row* makeCopy();
    AnyValue** values = nullptr;
    size_t len;
    // byte* values = nullptr;
    // size_t bytes = 0;
};

} // namespace simplesql