#pragma once

#include <string>

#include "Row.h"
#include "expressions/Literal.h"
#include "operators/Operator.h"
#include "execution/LevelDB.h"
#include "execution/ExecutionException.h"
#include "catalog/RelationReference.h"

using namespace simplesql;
using namespace simplesql::expressions;
using namespace simplesql::execution;
using namespace simplesql::catalog;

using std::string;

namespace simplesql {
namespace operators {

class Insert : public OperatorBase {
public:
    Insert(const string& _tableName, const std::vector<std::vector<ExpressionBase*> >& _rows) 
        : OperatorBase(_Insert), tableName(_tableName) {
        values = _rows;
        ref.tableName = _tableName;
    }
    
    virtual bool open() override {
        MemoryPool* mp = new MemoryPool();
        AnyValue** buf = (AnyValue**) mp->allocate(sizeof(AnyValue*) * ref.attributes.attributes.size());
        for (auto iter : values) {
            for (size_t i = 0; i < iter.size(); i++)
                buf[i] = ((Literal*)buf[i])->value;
            Row* oldRow;
            bool needRemoveIndex = LevelDB::getRow(ref.tableID, buf[0], ref.attributes, oldRow, mp);
            for (size_t i = 1; i < iter.size(); i++) {
                if (ref.attributes.attributes[i].hasIndex) {
                    // update index
                    if (needRemoveIndex) {
                        if (!buf[i]->equalToSemantically(oldRow->values[i])) 
                            LevelDB::removeIndex(ref.tableID, i, oldRow->values[i], buf[0]);
                        // if buf[i] == values[i], no need to update the index.
                    } else  
                        LevelDB::updateIndex(ref.tableID, i, buf[i], buf[0]);
                }
            }
            Row* row = Row::create(buf, iter.size(), mp);
            LevelDB::putRow(ref.tableID, buf[0], row); // update pk
            if (mp->memoryUsage() > 1024 * 1024) { // refresh memory pool
                delete mp;
                mp = new MemoryPool();
            }
        }
        return true;
    }

    virtual NextResult next() override {
        return NextResult(nullptr);
    }

    virtual bool close() override {
        return true;
    }

    virtual bool equalTo(OperatorBase* that) const override {
        Insert* _that = (Insert* )that;
        if (that->type != _Insert) return false;
        if (_that->tableName != tableName) return false;
        if (_that->values.size() != values.size()) return false;
        for (size_t i = 0; i < values.size(); i++) {
            if (_that->values[i].size() != values[i].size()) return false;
            for (size_t j = 0; j < values[i].size(); j++)
                if (!values[i][j]->equalTo(_that->values[i][j])) return false;
        }
        return true;
    }

    string tableName;

    RelationReference ref;

    std::vector<std::vector<ExpressionBase*> > values;
};

}} // namespace simplesql::operators