
#pragma once

#include "Common.h"
#include <vector>

namespace simplesql {

class MemoryPool {
public:
    MemoryPool();
    ~MemoryPool(); // release the memory

    byte* allocate(size_t _size);
    byte* allocateFallback(size_t _size);
    byte* allocateNewBlock(size_t _size);
    size_t memoryUsage() const;
    
private:
    //Allocation state
    byte* allocPtr;
    size_t allocRemaining;

    //Array of allocation memory blocks
    std::vector<byte*> blocks;
    // Total memory usage 
    size_t capacity;
};


} // namespace simplesql