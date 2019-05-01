
#pragma once

#include "Operator.h"

namespace simplesql::operators {

class Project: public OperatorBase {
public:
    Project(ExpressionBase** _projectList, int _listLen, OperatorBase* _child);

    bool open() override;
    NextResult next() override;
    bool close() override;

    ExpressionBase** projectList = nullptr;
    int listLen = 0;

    OperatorBase* child = nullptr;
};

} // namespace simplesql::operators