
#pragma once

#include <string>
#include "operators/Operator.h"
#include "catalog/RelationReference.h"

namespace simplesql{
namespace operators {

using std::string;
using namespace simplesql::catalog;

enum ScanMethod {
    SeqScan,
    IndexScan,
    FileScan,
    ExtendScan
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
    virtual ~SeqScan();

    virtual bool open() override;
    virtual NextResult next() override;
    virtual bool close() override;
    virtual bool equalTo(OperatorBase* that) const override;
    
    RelationReference* reference;
    ScanMethod method;
};
}} // namespace simplesql::operators