
#pragma once

#include <vector>

#include "Operator.h"

namespace simplesql {
namespace operators {

class Project: public OperatorBase {
public:
    // Project(ExpressionBase** _projectList, int _listLen, OperatorBase* _child);
    Project(const std::vector<ExpressionBase *>& _projectList, OperatorBase* _child);
    virtual ~Project();
    bool open() override;
    NextResult next() override;
    bool close() override;
    virtual bool equalTo(OperatorBase* that) const override;


    std::vector<ExpressionBase *> projectList;
    std::string projectString() const;

    OperatorBase* &child;
};

}} // namespace simplesql::operators