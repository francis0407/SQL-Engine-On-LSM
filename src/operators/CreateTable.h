#pragma once

#include <string>

#include "Operator.h"

using namespace simplesql;

namespace simplesql {
namespace operators {

class CreateTable : public OperatorBase {
public:
    CreateTable(const std::string& _tableName, std::vector<Attribute*>& _attrs, std::vector<std::string>& _index) : OperatorBase(_CreateTable) {

    }
    virtual ~CreateTable(){}
    virtual bool open() override {return true;}
    virtual NextResult next() override {return NextResult(nullptr);}
    virtual bool close() override {return true;}

    virtual bool equalTo(OperatorBase* that) const override {return true;}

};

}} // namespace simplesql::operators