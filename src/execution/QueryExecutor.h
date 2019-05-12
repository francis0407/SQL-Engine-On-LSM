#pragma once

#include "analyzer/Analyzer.h"
#include "parser/SQLParser.h"

namespace simplesql {
namespace execution {

using namespace simplesql::parser;
using namespace simplesql::analyzer;
using namespace simplesql::operators;
using namespace simplesql;


class QueryExecutor {
public:
    QueryExecutor();
    QueryExecutor(SQLParser* _parser, Analyzer* _analyzer);
    SQLParser* parser;
    Analyzer* analyzer;
    
private:
    bool prepareForExecution();
    
};

}} // namespace simplesql::execution