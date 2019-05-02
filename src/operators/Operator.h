
#pragma once

#include "expressions/Expression.h"
#include "Attribute.h"

namespace simplesql::operators {

using namespace expressions;

struct NextResult {
    NextResult (Row* _row);
    NextResult (Row* _row, MemoryPool* _mp);
    Row* row = nullptr;  // returns nullptr if there is no more rows
    MemoryPool* mp = nullptr; // MemoryPool should be created and deleted by the SourceNode
};

enum OperatorType {
    Project,
    Filter,
    InnerJoin,
    SeqScan
};

// Relational Operator Base Class
// Use the traditional Volcano Model
class OperatorBase {
public:
    virtual bool open() = 0;
    virtual NextResult next() = 0;
    virtual bool close() = 0;

    const OperatorType type; // Needs to be initialized in the constructor

    OperatorBase* children[2]; // We only have LeafNode, UnaryNode and BinaryNode
    
    bool resolved = false;

    AttributeSeq inputs;
    AttributeSeq outputs;
};

} // namespace simplesql::operators