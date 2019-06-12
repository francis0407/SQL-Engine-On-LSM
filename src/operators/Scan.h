
#pragma once

#include <queue>
#include <string>
#include "operators/Operator.h"
#include "catalog/RelationReference.h"
#include "expressions/Comparison.h"
#include "expressions/Literal.h"

namespace simplesql{
namespace operators {

using std::string;
using namespace simplesql::catalog;
using namespace simplesql::expressions;
enum ScanMethod {
    _SeqScan,
    _IndexScan,
    _FileScan,
    _ExtendScan
};

class Scan: public OperatorBase {
public:
    Scan(RelationReference* _relation);
    virtual ~Scan();

    virtual bool open() override;
    virtual NextResult next() override;
    virtual bool close() override;
    virtual bool equalTo(OperatorBase* that) const override;
    
    RelationReference* reference;
    ScanMethod method;
};

class SeqScan: public Scan {
public:
    SeqScan(RelationReference* _relation);
    SeqScan(RelationReference* _realtion, Literal* _start, Literal* _end);
    virtual ~SeqScan();

    virtual bool open() override;
    virtual NextResult next() override;
    virtual bool close() override;
private:
    MemoryPool* mp;
    Literal* start;
    Literal* end;
    leveldb::Iterator* iter;
};

class SecondIndexScan: public Scan {
public:
    // SecondIndexScan(RelationReference* _relation, );
    SecondIndexScan(RelationReference* _realtion, int _indexId, Literal* _start, Literal* _end);
    virtual ~SecondIndexScan();

    virtual bool open() override;
    virtual NextResult next() override;
    virtual bool close() override;

    bool findIndexAttribute();
private:
    MemoryPool* mp;
    MemoryPool* indexValueMp;
    int indexId;
    Literal* start;
    Literal* end;
    leveldb::Iterator* iter;
    std::queue<AnyValue*> valueQueue;

    Row* getRowFromPK(AnyValue* pk);
    Attribute indexAttribute;
};

}} // namespace simplesql::operators