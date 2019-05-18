
#include "analyzer/Analyzer.h"
#include "analyzer/AnalysisException.h"
#include "operators/Scan.h"
#include "operators/CreateTable.h"
#include "operators/CopyFile.h"
#include "operators/Insert.h"

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
        case _CopyFile: {
            CopyFile* cp = (CopyFile*) opt;
            if (!catalog->findRelation(cp->ref))
                throw AnalysisException(string("Cannot resolve relation: ") + cp->ref.referenceName);
            break;
        }
        case _Insert: {
            Insert* ins = (Insert*) opt;
            if (!catalog->findRelation(ins->ref))
                throw AnalysisException(string("Cannot resolve relation: ") + ins->ref.referenceName);
            break;
        }
        default: {
            break;
        }
    }
    return opt;
}