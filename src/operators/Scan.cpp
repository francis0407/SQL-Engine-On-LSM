
#include "operators/Scan.h"
#include "catalog/RelationReference.h"

using namespace simplesql::operators;
using namespace simplesql::expressions;
using namespace simplesql::catalog;

Scan::Scan(RelationReference* _reference) : OperatorBase(_Scan), method(SeqScan) {
    reference = _reference;

    children[0] = nullptr;
    children[1] = nullptr;
}

Scan::~Scan() {
    if (reference != nullptr)
        delete reference;
}

bool Scan::equalTo(OperatorBase* that) const {
    Scan* _that = (Scan*)that;
    if (that == nullptr) return false;
    if (that->type != _Scan) return false;
    return reference->referenceName == _that->reference->referenceName
        && reference->tableName == _that->reference->tableName;
}

bool Scan::open() {
    return true;
}

bool Scan::close() {
    return true;
}

NextResult Scan::next() {
    return NextResult(nullptr);
}