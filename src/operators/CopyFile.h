#pragma once

#include <cstring>
#include <string>
#include <iostream>
#include <fstream>

#include "operators/Operator.h"
#include "execution/LevelDB.h"
#include "execution/ExecutionException.h"
#include "catalog/RelationReference.h"

using namespace simplesql;
using namespace simplesql::execution;
using namespace simplesql::catalog;

using std::string;
namespace simplesql {
namespace operators {

class CopyFile : public OperatorBase {
public:
    CopyFile(string _tableName, string _filePath, string _delimiter, bool _hasHeader) 
        : OperatorBase(_CopyFile), tableName(_tableName), filePath(_filePath), delimiter(_delimiter), hasHeader(_hasHeader) {
        mp = nullptr;
        ref.tableName = _tableName;
        outputs.clean();
        outputs.append(Attribute(String, string("INFO")));
    }
    virtual ~CopyFile() {
        if (mp != nullptr) 
            delete mp;
    }
    
    virtual bool open() override {
        mp = new MemoryPool();
        size_t num = ref.attributes.attributes.size();
        std::ifstream fp;
        fp.open(filePath);
        if (!fp.is_open()) throw ExecutionException("File " + filePath + " not found");
        char str[1024];
        bool header = hasHeader;
        rowCount = 0;  
        resultFlag = true;
        while (fp.getline(str, 1024)) {
            char* tmpStr = strtok(str, delimiter.data());
            std::vector<string> res;
            while (tmpStr != nullptr) {
                res.push_back(string(tmpStr));
                tmpStr = strtok(nullptr, delimiter.data());
            }
            if (header) {
                header = false;
                continue;
            }
            AnyValue** values = (AnyValue**) mp->allocate(sizeof(AnyValue*) * num);
            for (size_t i = 0; i < res.size(); i++) {
                DataType attribute = ref.attributes.attributes[i].dataType;
                switch (attribute) {
                    case Boolean:
                        values[i] = BooleanValue::create(res[i] == "TRUE" ? true : false, mp);
                        break;
                    case String:
                        values[i] = StringValue::create(res[i], mp);
                        break;
                    case Integer:
                        values[i] = IntegerValue::create(std::stoi(res[i]), mp);
                        break;
                    case Float:
                        values[i] = FloatValue::create(std::stof(res[i]), mp);
                        break;
                    default:
                        break;
                }
            }
            Row* oldRow;
            bool needRemoveIndex = LevelDB::getRow(ref.tableID, values[0], ref.attributes, oldRow, mp);
            for (size_t i = 1; i < num; i++) {
                if (ref.attributes.attributes[i].hasIndex) {
                    // update index
                    if (needRemoveIndex) {
                        if (!values[i]->equalToSemantically(oldRow->values[i])) 
                            LevelDB::removeIndex(ref.tableID, i, oldRow->values[i], values[0]);
                        // if buf[i] == values[i], no need to update the index.
                    } else  
                        LevelDB::updateIndex(ref.tableID, i, values[i], values[0]);
                }
            }
            Row* row = Row::create(values, num, mp);
            LevelDB::putRow(ref.tableID, values[0], row);
            rowCount ++;
            if (mp->memoryUsage() > 1024 * 1024) { // refresh memory pool
                delete mp;
                mp = new MemoryPool();
            }
        }
        return true;
    }

    virtual NextResult next() override {
        if (resultFlag) {
            resultFlag = false;
            StringValue* result = StringValue::create(
                string("COPY ") + std::to_string(rowCount) + string(" ROWS!"), mp);
            Row* row = Row::copyFrom((AnyValue**)&result, 1, mp);
            return NextResult(row, mp);
        } else {
            return NextResult(nullptr);
        }
    }

    virtual bool close() override {
        delete mp;
        mp = nullptr;
        return true;
    }

    virtual bool equalTo(OperatorBase* that) const override {return true;}

    string tableName;
    string filePath;
    string delimiter;
    bool hasHeader;

    RelationReference ref;
private:
    MemoryPool* mp;
    size_t rowCount = 0;
    bool resultFlag;
};

}} // namespace simplesql::operators