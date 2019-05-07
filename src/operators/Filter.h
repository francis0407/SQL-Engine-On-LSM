
#pragma once

#include "Operator.h"

namespace simplesql{
namespace operators {

class Filter: public OperatorBase {
public:
    Filter(ExpressionBase* _condition, OperatorBase* _child);
    virtual ~Filter();
    bool open() override;
    NextResult next() override;
    bool close() override;
    virtual bool equalTo(OperatorBase* that) const override;
    ExpressionBase* condition = nullptr;
    OperatorBase* child = nullptr;
};


}} // namespace simplesql::operators