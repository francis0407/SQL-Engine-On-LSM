#pragma once

#include <string>
#include <iostream>

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
        
    }
    virtual ~CopyFile() {}
    
    virtual bool open() override {
        size_t num = ref.attributes.attributes.size();
        std::ifstream fp(filePath.data);
        char* str;  
        while(fp.getline(str,1024)){
            char* tmpStr = strtok(str, delimiter.data);
            std::vector<string> res;
            while(tmpStr != NULL) {
                res.push_back(string(tmpStr));
                tmpStr = strtok(NULL,delimiter.data);
            }
            MemoryPool* mp = new MemoryPool();
            AnyValue** buf = (AnyValue**) mp->allocate(sizeof(AnyValue*) * ref.attributes.attributes.size());
            AnyValue* values[num];
            for(int i = 0 ;i< res.size();i++) {
                DataType attribute = ref.attributes.attributes[i].dataType;
                switch (attribute)
                {
                case Boolean :
                    values[i] = BooleanValue::create(res[i]=="TRUE"?true:false,mp);
                    break;
                case String :
                    values[i] = StringValue::create(res[i],mp);
                    break;
                case Integer:
                    values[i] = IntegerValue::create(std::stoi(res[i]),mp);
                    break;
                case Float :
                    values[i] = FloatValue::create(std::stof(res[i]),mp);
                    break;
                default:
                    break;
                }
            }
            Row* row = Row::create(values, num, mp);
            LevelDB::putRow(SCHEMA_TABLE_ID, values[0], row);
        }
        return true;
    }

    virtual NextResult next() override {
        return NextResult(nullptr);
    }

    virtual bool close() override {
        return true;
    }

    virtual bool equalTo(OperatorBase* that) const override {return true;}

    string tableName;
    string filePath;
    string delimiter;
    bool hasHeader;

    RelationReference ref;
};

}} // namespace simplesql::operators