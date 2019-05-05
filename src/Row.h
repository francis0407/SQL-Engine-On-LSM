#pragma once

#include "datatypes/ValueBase.h"

namespace simplesql {

using namespace datatypes;

class Row {
public:
    static Row* create(AnyValue* _columns[], int _columnNum, MemoryPool* _mp) {}

    AnyValue* getAny(size_t offset);
    // BooleanValue* getBoolean()

    byte* values = nullptr;
    size_t len = 0;
};

} // namespace simplesql