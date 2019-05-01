
#pragma once

#include "expressions/Expression.h"

namespace simplesql::operators {

using namespace simplesql::expressions;

struct NextResult {
    NextResult (Row* _row);
    NextResult (Row* _row, MemoryPool* _mp);
    Row* row = nullptr;  // returns nullptr if there is no more rows
    MemoryPool* mp = nullptr; // MemoryPool should be created and deleted by the SourceNode
};

// Relational Operator Base Class
// Use the traditional Volcano Model
class OperatorBase {
public:
    virtual bool open() = 0;
    virtual NextResult next() = 0;
    virtual bool close() = 0;

    OperatorBase* children[2]; // We only have LeafNode, UnaryNode and BinaryNode
    
    bool resolved = false;
};

} // namespace simplesql::operators