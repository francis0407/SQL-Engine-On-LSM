#pragma once

#include "Rule.h"
#include "catalog/Catalog.h"

namespace simplesql {
namespace analyzer {

using namespace simplesql;
using namespace simplesql::operators;
using namespace simplesql::catalog;

class Analyzer : public RuleExecutor {
public:
    Analyzer(CatalogBase* _catalog);
    virtual ~Analyzer();
    virtual OperatorBase* run(OperatorBase* opt) override;
private:
    CatalogBase* catalog;
};


class ResolveRelations : public RuleBase {
public:
    ResolveRelations(CatalogBase* _catalog) : catalog(_catalog) {}
    virtual OperatorBase* apply(OperatorBase* opt) override;
private:
    CatalogBase* catalog;
};

class ResolveAttributes : public RuleBase {
public:
    virtual OperatorBase* apply(OperatorBase* opt) override;
    static std::function<ExpressionBase*(ExpressionBase*)> resolveAttributes(AttributeSeq* attrs);
};

}} // namespace simplesql::analyzer