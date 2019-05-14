#pragma once

#include "execution/Relation.h"
#include "analyzer/Analyzer.h"
#include "parser/SQLParser.h"

namespace simplesql {
namespace execution {

using namespace simplesql::parser;
using namespace simplesql::analyzer;
using namespace simplesql::operators;
using namespace simplesql;


// TODO: add optimizer

class QueryExecutor : public RuleExecutor {
public:
    QueryExecutor(CatalogBase* catalog);
    QueryExecutor(SQLParser* _parser, Analyzer* _analyzer);
    virtual ~QueryExecutor();
    virtual OperatorBase* run(OperatorBase* opt) override;

    void executeSQL(const std::string sql, Relation& result); // TODO : return 
    void executeTree(OperatorBase* opt, Relation& result);
    SQLParser* parser;
    Analyzer* analyzer;
private:
    void initRules();
    bool prepareForExecution();
    
};

class ResolveAttributeOffset : public RuleBase {
public:
    // Reuse the analyzer method `resolveAttribute` to finally compute the
    // attribute offsets.
    virtual OperatorBase* apply(OperatorBase* opt) override;
};

}} // namespace simplesql::execution