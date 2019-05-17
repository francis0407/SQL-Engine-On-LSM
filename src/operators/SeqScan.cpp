#include "operators/Scan.h"
#include "catalog/RelationReference.h"
#include "execution/LevelDB.h"
#include "util/Codec.h"

using namespace simplesql::operators;
using namespace simplesql::expressions;
using namespace simplesql::catalog;
using namespace simplesql::execution;
using namespace simplesql::util;

#define SafeRelease(x) do{if (x != nullptr) {delete x; x = nullptr;}} while(false);
SeqScan::SeqScan(RelationReference* _relation) : Scan(_relation) {
    mp = nullptr;
    iter = nullptr;
}

SeqScan::~SeqScan() {

}

bool SeqScan::open() {
    SafeRelease(mp);
    SafeRelease(iter);
    iter = LevelDB::scanRow(reference->tableID);
    return true;
}

NextResult SeqScan::next() {
    SafeRelease(mp);
    mp = new MemoryPool();

    if (!iter->Valid()) return NextResult(nullptr);
    string key = iter->key().ToString();
    int tableID;
    AnyValue* pk;
    if (decodeRowKey(key, reference->attributes.attributes[0].dataType, tableID, pk, mp)) return NextResult(nullptr);
    if (tableID != reference->tableID) return NextResult(nullptr);
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
