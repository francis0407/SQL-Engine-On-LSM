
#include "operators/SeqScan.h"
#include "catalog/RelationReference.h"

using namespace simplesql::operators;
using namespace simplesql::expressions;
using namespace simplesql::catalog;

SeqScan::SeqScan(RelationReference* _reference) {
    reference = _reference;

    children[0] = nullptr;
    children[1] = nullptr;
}

SeqScan::~SeqScan() {
    if (reference != nullptr)
        delete reference;
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