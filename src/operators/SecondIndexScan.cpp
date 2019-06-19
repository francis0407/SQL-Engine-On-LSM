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
SecondIndexScan::SecondIndexScan(RelationReference* _relation, int _indexId, Literal* _start, Literal* _end) : Scan(_relation) {
    method = _IndexScan;
    mp = nullptr;
    indexValueMp = nullptr;
    iter = nullptr;
    start = _start;
    end = _end;
    indexId = _indexId;
}

SecondIndexScan::~SecondIndexScan() {
    if (start != nullptr) delete start;
    if (end != nullptr) delete end;
}

bool SecondIndexScan::open() {
    if (start == nullptr)
        iter = LevelDB::scanIndex(reference->tableID, indexId);
    else 
        iter = LevelDB::scanIndex(reference->tableID, indexId, start->value);
    return true;
}

NextResult SecondIndexScan::next() {
    if (mp != nullptr) {
        delete mp;
        mp = nullptr;
    }
    mp = new MemoryPool();

    // Check Value Queue
    if (valueQueue.empty()) {
        // if the valueQueue is empty, get new second index
        if (indexValueMp != nullptr) {
            delete indexValueMp;
            indexValueMp = nullptr;
        }
        indexValueMp = new MemoryPool();

        if (!iter->Valid()) return NextResult(nullptr);
        string key = iter->key().ToString();
        int tableID;
        int decodeIndexID;
        AnyValue* indexValue;
        if (!decodeIndexKey(key, reference->attributes.attributes[indexId].dataType, tableID, decodeIndexID, indexValue, indexValueMp))
            return NextResult(nullptr);
        if (tableID != reference->tableID) return NextResult(nullptr);
        if (indexId != decodeIndexID) return NextResult(nullptr);
        if (end != nullptr) {
            if (!indexValue->lessThanOrEqual(end->value)) return NextResult(nullptr);
        }
        // the index key is valid, get index values and push into the queue
        Row* indexValueRow;
        decodeIndexValue(iter->value().ToString(), reference->attributes.attributes[0].dataType, indexValueRow, indexValueMp);
        iter->Next();
        for (size_t i = 0; i < indexValueRow->len; i++)
            valueQueue.push(indexValueRow->values[i]);
    }

    // return the value if the queue is not empty
    auto value = valueQueue.front(); // value is the PK
    valueQueue.pop();
    Row* row = getRowFromPK(value);
    return NextResult(row, mp);
}

bool SecondIndexScan::close() {
    SafeRelease(mp);
    SafeRelease(indexValueMp);
    SafeRelease(iter);
    return true;
}

Row* SecondIndexScan::getRowFromPK(AnyValue* pk) {
    Row* row = nullptr;
    LevelDB::getRow(reference->tableID, pk, outputs, row, mp);
    return row;
}