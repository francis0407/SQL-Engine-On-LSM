
#include "operators/SeqScan.h"
#include "catalog/RelationReference.h"

using namespace simplesql::operators;
using namespace simplesql::expressions;
using namespace simplesql::catalog;

SeqScan::SeqScan(RelationReference* _reference) : OperatorBase(_SeqScan) {
    reference = _reference;

    children[0] = nullptr;
    children[1] = nullptr;
}

SeqScan::~SeqScan() {
    if (reference != nullptr)
        delete reference;
}

bool SeqScan::equalTo(OperatorBase* that) const {
    SeqScan* _that = (SeqScan*)that;
    if (that == nullptr) return false;
    if (that->type != _SeqScan) return false;
    return reference->referenceName == _that->reference->referenceName
        && reference->tableName == _that->reference->tableName;
}

bool SeqScan::open() {
    return true;
}

bool SeqScan::close() {
    return true;
}

NextResult SeqScan::next() {
    return NextResult(nullptr);
}