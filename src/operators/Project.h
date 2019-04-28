
#pragma once

#include "Operator.h"

namespace simplesql::operators {

class Project: public OperatorBase {
public:
    Project(ExpressionBase** _projectList, int _listLen, OperatorBase* _child);

    ExpressionBase** projectList = nullptr;
    int listLen = 0;

    OperatorBase* child = nullptr;
};

} // namespace simplesql::operators