
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

    bool open() override;
    NextResult next() override;
    bool close() override;
    virtual bool equalTo(OperatorBase* that) const override;
    
    RelationReference* reference;
    ScanMethod method;
};

}} // namespace simplesql::operators