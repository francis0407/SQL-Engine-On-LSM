
#include "Project.h"

namespace simplesql {
namespace operators {

bool Project::open() {
    // maybe assert `resolved` here.
}

NextResult Project::next() {
    NextResult nextResult = child->next();
    if (nextResult.row == nullptr)
        return NextResult(nullptr);

    if (hasNoneReference) {
        // If there are non-reference columns such as "a + 1"
        // results for project
        MemoryPool* mp = nextResult.mp;
        AnyValue** results = (AnyValue**)mp->allocate(listLen * sizeof(AnyValue*));
        for (int i = 0; i < listLen; i++)
            results[i] = projectList[i]->eval(nextResult.row, mp); 
        
        Row* newRow = Row::create(results, listLen, mp);
        return NextResult(newRow, mp);
    }
    else {
        // we keep the input, only change the offset of the AttributeReference
        return nextResult;
    }
}

}} // namespace simplesql::opterators