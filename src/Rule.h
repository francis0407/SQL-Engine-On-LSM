
#pragma once

#include "operators/Operator.h"


namespace simplesql {

using namespace simplesql::operators;

class RuleBase {
public:
    RuleBase();
    virtual OperatorBase* apply(OperatorBase* opt) = 0;
    OperatorBase* recursivelyApply(OperatorBase* opt);
};

struct RuleBatch {
    RuleBatch(int iterations, int num, ...);
    std::vector<RuleBase* > rules;
    int maxIterations = 1;
};

class RuleExecutor {
public:
    RuleExecutor(std::vector<RuleBatch* > ruleBatches);
    RuleExecutor();
    virtual OperatorBase* run(OperatorBase* opt) = 0;
    virtual OperatorBase* execute(OperatorBase* opt);

protected:
    std::vector<RuleBatch*> batches;
};

} // namespace simplesql