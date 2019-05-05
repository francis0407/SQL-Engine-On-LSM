
#pragma once

#include <string>
#include "operators/Operator.h"
#include "catalog/RelationReference.h"

namespace simplesql{
namespace operators {

using std::string;
using namespace simplesql::catalog;

class SeqScan: public OperatorBase {
public:
    // SeqScan(const string& _tableName); 
    SeqScan(RelationReference* _relation);
    virtual ~SeqScan();

    bool open() override;
    NextResult next() override;
    bool close() override;

    RelationReference* reference;
    
};

}} // namespace simplesql::operators