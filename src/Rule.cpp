
#include <stdarg.h>

#include "Rule.h"

using namespace simplesql;
using namespace simplesql::operators;

RuleBatch::RuleBatch(int iterations, int num, ...) {
    maxIterations = iterations;
    
    va_list ap;
    va_start(ap, num);
    RuleBase* tmp = nullptr;
    for (int i = 0; i < num; i++) {
        tmp = va_arg(ap, RuleBase*);
        rules.push_back(tmp);
    }
    va_end(ap);
}

RuleBase::RuleBase(){}

OperatorBase* RuleBase::recursivelyApply(OperatorBase* opt) {
    // Pre-order visit the operator tree
    if (opt->isLeafOperator())
        return apply(opt);
    else if (opt->isUnaryOperator()) {
        OperatorBase* child = apply(opt->children[0]);
        opt->children[0] = child;
        return apply(opt);
    }
    else {
        OperatorBase* newLeft = apply(opt->children[0]);
        OperatorBase* newRight = apply(opt->children[1]);
        opt->children[0] = newLeft;
        opt->children[1] = newRight;
        return apply(opt);
    }
}


RuleExecutor::RuleExecutor() {
    
}

RuleExecutor::RuleExecutor(std::vector<RuleBatch* > ruleBatches) {
    for (auto iter : ruleBatches) 
        batches.push_back(iter);
}

// traverse the operator tree, and apply all the rules to all of the operators
OperatorBase* RuleExecutor::execute(OperatorBase* opt) {
    for (auto batch : batches) {
        // batches
        for (auto rule : batch->rules) {
            // rules
            for (int iter = 0; iter < batch->maxIterations; iter++) {
                long long oldHash = opt->fashHash();
                opt = rule->recursivelyApply(opt);
                long long newHash = opt->fashHash();
                if (oldHash == newHash) 
                    break;
            }
        }
    }
}