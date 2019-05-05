
#include "Project.h"

namespace simplesql {
namespace operators {

Project::Project(std::vector<ExpressionBase *>& _projectList, OperatorBase* _child) {
    child = _child;
    projectList.assign(_projectList.begin(), _projectList.end());

    children[0] = _child;
    children[1] = nullptr;
}

Project::~Project() {
    for(auto item: projectList)
        if (item != nullptr)   
           delete item;
    if (child != nullptr)
        delete child;
}

bool Project::open() {
    // maybe assert `resolved` here.
    return true;
}

bool Project::close() {
    return true;
}

NextResult Project::next() {
    // NextResult nextResult = child->next();
    // if (nextResult.row == nullptr)
    //     return NextResult(nullptr);

    // if (hasNoneReference) {
    //     // If there are non-reference columns such as "a + 1"
    //     // results for project
    //     MemoryPool* mp = nextResult.mp;
    //     size_t listLen = projectList.size();
    //     AnyValue** results = (AnyValue**)mp->allocate(listLen * sizeof(AnyValue*));
    //     for (int i = 0; i < listLen; i++)
    //         results[i] = projectList[i]->eval(nextResult.row, mp); 
        
    //     Row* newRow = Row::create(results, listLen, mp);
    //     return NextResult(newRow, mp);
    // }
    // else {
    //     // we keep the input, only change the offset of the AttributeReference
    //     return nextResult;
    // }
    return NextResult(nullptr);
}

}} // namespace simplesql::opterators