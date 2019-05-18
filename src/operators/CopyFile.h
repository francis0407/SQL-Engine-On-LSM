#pragma once

#include <string>

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