
#include "Project.h"

using namespace simplesql::operators;
 
Project::Project(const std::vector<ExpressionBase *>& _projectList, OperatorBase* _child) 
    : OperatorBase(_Project), child(children[0]) {
    child = _child; 
    projectList.assign(_projectList.begin(), _projectList.end());
 
    children[1] = nullptr;
}

Project::~Project() {
    for (size_t i = 0; i < projectList.size(); i++)
        delete projectList[i];
    if (child != nullptr)
        delete child;
}

bool Project::equalTo(OperatorBase* that) const {
    Project* _that = (Project*)that;
    if (that == nullptr) return false;
    if (that->type != _Project) return false;
    for (size_t i = 0; i < projectList.size(); i++)
        if(!projectList[i]->equalTo(_that->projectList[i]))
            return false;
    return child->equalTo(_that->child);
}

bool Project::open() {
    // maybe assert `resolved` here.
    
    return child->open();
}

bool Project::close() {
    
    return child->close();
}

std::string Project::projectString() const {
    std::string result;
    for (auto iter : projectList) 
        result += iter->toString() + ",";
    return result;
}

NextResult Project::next() {
    NextResult nextResult = child->next();
    if (nextResult.row == nullptr)
        return NextResult(nullptr);

    MemoryPool* mp = nextResult.mp;
    size_t listLen = projectList.size();
    AnyValue** results = (AnyValue**)mp->allocate(listLen * sizeof(AnyValue*));
    for (size_t i = 0; i < listLen; i++)
        results[i] = projectList[i]->eval(nextResult.row, mp); 
        
    Row* newRow = Row::create(results, listLen, mp);
    return NextResult(newRow, mp);
}
