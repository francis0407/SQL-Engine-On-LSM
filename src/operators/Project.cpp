
#include "Project.h"

namespace simplesql::operators {

bool Project::open() {
    // maybe assert `resolved` here.
}

NextResult Project::next() {
    NextResult nextResult = child->next();
    if (nextResult.row == nullptr)
        return NextResult(nullptr);
    MemoryPool* mp = nextResult.mp;
    // results for project
    AnyValue** results = (AnyValue**)mp->allocate(listLen * sizeof(AnyValue*));
    for (int i = 0; i < listLen; i++)
        results[i] = projectList[i]->eval(nextResult.row, mp); 
    
    Row* newRow = Row::create(results, listLen, mp);
    return NextResult(newRow, mp);
}

} // namespace simplesql::opterators