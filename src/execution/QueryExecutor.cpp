
#include "execution/QueryExecutor.h"
#include "parser/ParseException.h"
#include "analyzer/AnalysisException.h"

using namespace simplesql::execution;
using namespace simplesql;


QueryExecutor::QueryExecutor(CatalogBase* catalog) : RuleExecutor() {
    parser = new SQLParser();
    analyzer = new Analyzer(catalog);
    initRules();
}

QueryExecutor::QueryExecutor(SQLParser* _parser, Analyzer* _analyzer) 
    : RuleExecutor(), parser(_parser), analyzer(_analyzer) {
    initRules();
}

QueryExecutor::~QueryExecutor() {
    if (parser != nullptr)  delete parser;
    if (analyzer != nullptr) delete analyzer;
}

void QueryExecutor::initRules() {
    batches.push_back(
        new RuleBatch(
            1, 1,
            new ResolveAttributeOffset()
        )
    );
}

OperatorBase* QueryExecutor::run(OperatorBase* opt) {
    return execute(opt);
}

void QueryExecutor::executeTree(OperatorBase* opt, Relation& result) {
    try {
        opt = analyzer->run(opt);
        opt = run(opt);
        opt->open();
        while(true) {
            NextResult nextResult = opt->next();
            if (nextResult.row == nullptr)
                break;
            result.append(nextResult.row);
        }
        opt->close();
    } catch (ParseException& pe) {

    } catch (AnalysisException& ae) {

    } catch (std::exception& e) {
    }
}

void QueryExecutor::executeSQL(const std::string sql, Relation& result) {
    try {
        OperatorBase* opt = parser->parseStatement(sql);
        opt = analyzer->run(opt);
        opt = run(opt);
        
        // execute operator tree
        opt->open();
        while(true) {
            NextResult nextResult = opt->next();
            if (nextResult.row == nullptr)
                break;
            result.append(nextResult.row);
        }
        opt->close();
    } catch (ParseException& pe) {

    } catch (AnalysisException& ae) {

    } catch (std::exception& e) {

    }
}


