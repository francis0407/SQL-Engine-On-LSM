#include "analyzer/Analyzer.h"

using namespace simplesql::analyzer;
using namespace simplesql;

Analyzer::Analyzer(CatalogBase* _catalog) {
    catalog = _catalog;
    batches.push_back(
        new RuleBatch(
            1, 2, 
            new ResolveRelations(catalog),
            new ResolveAttributes())
    );
}