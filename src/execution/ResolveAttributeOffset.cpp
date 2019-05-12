
#include "execution/QueryExecutor.h"

#include "operators/Scan.h"
#include "operators/Operator.h"
#include "operators/Filter.h"
#include "operators/Project.h"
#include "operators/Join.h"

using namespace simplesql::execution;
using namespace simplesql::operators;
using namespace simplesql::datatypes;
using namespace simplesql;

OperatorBase* ResolveAttributeOffset::apply(OperatorBase* opt) {
    size_t total = 0;
    for (auto iter = opt->outputs.attributes.begin(); iter != opt->outputs.attributes.end(); iter++) {
        iter->offset = total;
        total += valueSize(iter->dataType);
    }
    switch (opt->type) {
        case _Project: {
            Project* project = (Project*) opt;
            for (auto iter : project->projectList) 
                iter->transform(ResolveAttributes::resolveAttributes(&project->child->outputs));
            break;
        }
        case _Filter: {
            Filter* filter = (Filter*) opt;
            filter->condition->transform(ResolveAttributes::resolveAttributes(&filter->child->outputs));
            break;
        }
        case _InnerJoin: {
            InnerJoin* join = (InnerJoin*) opt;
            join->condition->transform(ResolveAttributes::resolveAttributes(&join->left->outputs));
            // we will concat the two children as left + right, so that we should 
            // add left.bytes to right.outputs
            AttributeSeq rightOutputs = join->right->outputs;
            for (auto iter = rightOutputs.attributes.begin(); iter != rightOutputs.attributes.end(); iter++)
                iter->offset += join->left->outputs.bytes();    
            join->condition->transform(ResolveAttributes::resolveAttributes(&rightOutputs));
            break;
        }
        default: {
            break;
        }
    }
    return opt;
}