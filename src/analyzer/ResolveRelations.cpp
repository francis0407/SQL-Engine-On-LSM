
#include "analyzer/Analyzer.h"
#include "analyzer/AnalysisException.h"
#include "operators/SeqScan.h"

using namespace simplesql::analyzer;


OperatorBase* ResolveRelations::apply(OperatorBase* opt) {
    if (opt->type != _SeqScan) return opt;
    SeqScan* scan = (SeqScan*)opt;
    if (!catalog->findRelation(*scan->reference)) 
        throw AnalysisException(string("Cannot resolve relation: ") + scan->reference->referenceName);
    return opt;
}