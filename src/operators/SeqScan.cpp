#include "operators/Scan.h"
#include "catalog/RelationReference.h"
#include "execution/LevelDB.h"
#include "util/Codec.h"
#include "expressions/Comparison.h"

using namespace simplesql::operators;
using namespace simplesql::expressions;
using namespace simplesql::catalog;
using namespace simplesql::execution;
using namespace simplesql::util;

#define SafeRelease(x) do{if (x != nullptr) {delete x; x = nullptr;}} while(false);
SeqScan::SeqScan(RelationReference* _relation) : Scan(_relation) {
    mp = nullptr;
    iter = nullptr;
    start = nullptr;
    end = nullptr;
}

SeqScan::SeqScan(RelationReference* _relation, Literal* _start, Literal* _end) : SeqScan(_relation) {
    start = _start;
    end = _end;
}

SeqScan::~SeqScan() {
}

bool SeqScan::open() {
    SafeRelease(mp);
    SafeRelease(iter);
    if (start != nullptr)
        iter = LevelDB::scanRow(reference->tableID, start->value);
    else 
        iter = LevelDB::scanRow(reference->tableID);
    return true;
}

NextResult SeqScan::next() {
    if (mp != nullptr) {
        delete mp;
        mp = nullptr;
    }
    mp = new MemoryPool();

    if (!iter->Valid()) return NextResult(nullptr);
    string key = iter->key().ToString();
    int tableID;
    AnyValue* pk;
    if (!decodeRowKey(key, reference->attributes.attributes[0].dataType, tableID, pk, mp)) return NextResult(nullptr);
    if (tableID != reference->tableID) return NextResult(nullptr);
    if (end != nullptr) {
        // has an end pk
        if (!pk->lessThanOrEqual(end->value)) return NextResult(nullptr);
    }
    Row* row;
    decodeRowValue(iter->value().ToString(), reference->attributes, row, mp);
    iter->Next();
    return NextResult(row, mp);
}

bool SeqScan::close() {
    SafeRelease(mp);
    SafeRelease(iter);
    return true;
}
