
#include "Filter.h"

namespace simplesql{
namespace operators {

using namespace simplesql::expressions;

Filter::Filter(ExpressionBase* _condition, OperatorBase* _child) {
    condition = _condition;
    child = _child;

    children[0] = _child;
    children[1] = nullptr;
}

Filter::~Filter() {
    if (condition != nullptr)
        delete condition;
    if (child != nullptr)
        delete child;
}

bool Filter::open() {
    return true;
}

bool Filter::close() {
    return true;
}

NextResult Filter::next() {
    // while(true) {
    //     NextResult nextResult = child->next();
    //     if (nextResult.row == nullptr)
    //         return NextResult(nullptr);
        
    //     AnyValue* value = condition->eval(nextResult.row);
    //     bool filtered = !(value->asBoolean());

    //     if (filtered)
    //         continue;
    //     else
    //         return nextResult;
    // }
    return NextResult(nullptr);
}

}} // namespace simplesql::opterators