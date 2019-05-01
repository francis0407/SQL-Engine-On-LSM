#include "MemoryPool.h"

using namespace simplesql;

MemoryPool::MemoryPool(){
    allocRemaining = 0;
    allocPtr = nullptr;
    capacity = 0;
}

MemoryPool::~MemoryPool() {
    for (size_t i = 0; i < blocks.size(); i++) {
        delete[] blocks[i];
    }
}

byte* MemoryPool::allocate(size_t _size) {
    //assert(_size > 0);
    if(_size <= allocRemaining) {
        byte* result = allocPtr;
        allocPtr = allocPtr + _size;
        allocRemaining -= _size;
        return result;
    }

    return allocateFallback(_size);
}

byte* MemoryPool::allocateFallback(size_t _size) {
    if(_size > MEMORYPOOL_BLOCK_SIZE/4) {
        // Object is more than a quarter of memory block size.
        // Allocate it separately to avoid wasting too much space.
        byte* res = allocateNewBlock(_size);
        return res;
    }

    // waste the remaining space in current block
    allocPtr = allocateNewBlock(MEMORYPOOL_BLOCK_SIZE);
    allocRemaining = MEMORYPOOL_BLOCK_SIZE;
    byte* res = allocPtr;
    allocPtr += _size;
    allocRemaining -= _size;
    return res;
}

byte* MemoryPool::allocateNewBlock(size_t _size) {
    byte* res = new byte[_size];
    blocks.push_back(res);
    return res;
}

size_t MemoryPool::memoryUsage() const {
    return capacity;
}
