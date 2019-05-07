
#pragma once

#include "expressions/Expression.h"
#include "Attribute.h"

namespace simplesql {
namespace operators {

using namespace expressions;

struct NextResult {
    NextResult (Row* _row) : row(_row), mp(nullptr){}
    NextResult (Row* _row, MemoryPool* _mp);
    Row* row = nullptr;  // returns nullptr if there is no more rows
    MemoryPool* mp = nullptr; // MemoryPool should be created and deleted by the SourceNode
};

enum OperatorType {
    _Project,
    _Filter,
    _InnerJoin,
    _SeqScan
};

// Relational Operator Base Class
// Use the traditional Volcano Model
class OperatorBase {
public:
    OperatorBase(OperatorType _type) : type(_type){}
    virtual ~OperatorBase(){}
    virtual bool open() = 0;
    virtual NextResult next() = 0;
    virtual bool close() = 0;

    virtual bool equalTo(OperatorBase* that) const = 0;

    const OperatorType type; // Needs to be initialized in the constructor

    OperatorBase* children[2]; // We only have LeafNode, UnaryNode and BinaryNode
    
    bool resolved = false;

    AttributeSeq inputs;
    AttributeSeq outputs;
};

}} // namespace simplesql::operators