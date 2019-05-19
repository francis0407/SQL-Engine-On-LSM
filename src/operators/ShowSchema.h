#pragma once

#include <string>

#include "operators/Operator.h"
#include "execution/LevelDB.h"
#include "execution/ExecutionException.h"
using namespace simplesql;
using namespace simplesql::execution;

namespace simplesql {
namespace operators {

class ShowSchema : public OperatorBase {
public:
    ShowSchema(const std::string& _tableName) 
        : OperatorBase(_ShowSchema), tableName(_tableName) {
        ref.tableName = _tableName;
        outputs.append(Attribute(String, "NAME"));
        outputs.append(Attribute(String, "DATATYPE"));
        outputs.append(Attribute(Boolean, "INDEX?"));
    }    

    virtual bool open() override {
        mp = new MemoryPool();
        offset = 0;
    }
    
    virtual NextResult next() override {
        if (offset >= ref.attributes.attributes.size()) {
            return NextResult(nullptr);
        }
        AnyValue* values[3];
        values[0] = StringValue::create(ref.attributes.attributes[offset].name, mp);
        values[1] = StringValue::create(dataTypeToString(ref.attributes.attributes[offset].dataType), mp);
        values[2] = BooleanValue::create(ref.attributes.attributes[offset].hasIndex, mp);
        Row* row = Row::copyFrom(values, 3, mp);
        offset ++;
        return NextResult(row, mp);
    }

    virtual bool close() override {
        delete mp;
    }

    virtual bool equalTo(OperatorBase* that) const override {
        
    }
    string tableName;
    RelationReference ref;
private:
    MemoryPool* mp;
    size_t offset = 0;
};

}} // namespace simplesql::operators