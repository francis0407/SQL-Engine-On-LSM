#pragma once

#include <string>

#include "operators/Operator.h"
#include "execution/LevelDB.h"
#include "execution/ExecutionException.h"
using namespace simplesql;
using namespace simplesql::execution;

namespace simplesql {
namespace operators {

class CreateTable : public OperatorBase {
public:
    CreateTable(const std::string& _tableName, std::vector<Attribute*>& _attrs, std::vector<std::string>& _index) : OperatorBase(_CreateTable) {
        tableName = _tableName;
        attrs = _attrs;
        index = _index;
    }
    virtual ~CreateTable() {
        for (auto iter : attrs)
            delete iter;
    }
    virtual bool open() override {
        MemoryPool mp;
        AttributeSeq attrSeq;
        for (auto attr : attrs) 
            attrSeq.append(*attr);
        AnyValue* values[3];
        int tabelID = increaseTableNum(&mp);
        
        values[0] = StringValue::create(tableName, &mp);
        values[1] = IntegerValue::create(tabelID, &mp);
        values[2] = StringValue::create(attrSeq.encode(), &mp);
        Row* row = Row::create(values, 3, &mp);
        LevelDB::putRow(SCHEMA_TABLE_ID, values[0], row);
        return true;
    }
    virtual NextResult next() override {return NextResult(nullptr);}
    virtual bool close() override {return true;}

    virtual bool equalTo(OperatorBase* that) const override {
        if (that->type != type) return false;
        CreateTable* _that = (CreateTable*) that;
        if (attrs.size() != _that->attrs.size()) return false;
        for (size_t i = 0; i < attrs.size(); i++) 
            if (!attrs[i]->equalTo(*(_that->attrs[i]))) return false;
        if (index.size() != _that->index.size()) return false;
        for (size_t i = 0; i > index.size(); i++)
            if (index[i] != _that->index[i]) return false;
        if (tableName != _that->tableName) return false;
        return true;
    }
    string tableName;
    std::vector<Attribute*> attrs;
    std::vector<string> index;
private:
    int increaseTableNum(MemoryPool* mp) {
        IntegerValue* keyNum = IntegerValue::create(GlobalSettingID::TableCount, mp);
        Row* row;
        AttributeSeq schema;
        schema.append(Attribute(Integer, string("Key")));
        schema.append(Attribute(String, string("Value")));
        LevelDB::getRow(0, keyNum, schema, row, mp);
        StringValue* value = (StringValue*)row->values[1];
        int num = std::stoi(value->toString());
        StringValue* newValue = StringValue::create(std::to_string(num + 1), mp);
        row->values[1] = newValue;
        LevelDB::putRow(0, keyNum, row);
        return num;
    }
};

}} // namespace simplesql::operators