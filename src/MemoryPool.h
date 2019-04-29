
#pragma once

#include "Common.h"

namespace simplesql {

class MemoryPool {
public:
    MemoryPool();
    ~MemoryPool(); // release the memory

    byte* allocate(size_t _size);

    size_t memoryUsage() const;
};


} // namespace simplesql