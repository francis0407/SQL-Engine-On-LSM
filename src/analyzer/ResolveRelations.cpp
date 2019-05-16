
#include "analyzer/Analyzer.h"
#include "analyzer/AnalysisException.h"
#include "operators/Scan.h"
#include "operators/CreateTable.h"

using namespace simplesql::analyzer;


OperatorBase* ResolveRelations::apply(OperatorBase* opt) {
    switch (opt->type) {
        case _Scan: {
            Scan* scan = (Scan*)opt;
            if (!catalog->findRelation(*scan->reference)) 
                throw AnalysisException(string("Cannot resolve relation: ") + scan->reference->referenceName);
            break;
        }
        case _CreateTable: {
            CreateTable* ct = (CreateTable*) opt;
            RelationReference ref(ct->tableName);
            if (catalog->findRelation(ref))
                throw AnalysisException(ct->tableName + " is existed.");
            break;
        }
    }
    return opt;
}