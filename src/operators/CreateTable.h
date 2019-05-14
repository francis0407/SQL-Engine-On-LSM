#pragma once

#include <string>

#include "Operator.h"

using namespace simplesql;

namespace simplesql {
namespace operators {

class CreateTable : public OperatorBase {
public:
    CreateTable(const std::string& _tableName, std::vector<Attribute*>& _attrs, std::vector<std::string>& _index);
    virtual ~CreateTable();
    virtual bool open() override;
    virtual NextResult next() override;
    virtual bool close() override;

    virtual bool equalTo(OperatorBase* that) const override;

};

}} // namespace simplesql::operators