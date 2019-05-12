
#include "analyzer/Analyzer.h"
#include "analyzer/AnalysisException.h"
#include "operators/Scan.h"

using namespace simplesql::analyzer;


OperatorBase* ResolveRelations::apply(OperatorBase* opt) {
    if (opt->type != _Scan) return opt;
    Scan* scan = (Scan*)opt;
    if (!catalog->findRelation(*scan->reference)) 
        throw AnalysisException(string("Cannot resolve relation: ") + scan->reference->referenceName);
    return opt;
}