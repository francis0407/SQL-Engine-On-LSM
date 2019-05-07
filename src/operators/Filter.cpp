
#include "Filter.h"

namespace simplesql{
namespace operators {

using namespace simplesql::expressions;

Filter::Filter(ExpressionBase* _condition, OperatorBase* _child) : OperatorBase(_Filter) {
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

bool Filter::equalTo(OperatorBase* that) const {
    Filter* _that = (Filter*)that;
    if (that == nullptr) return false;
    if (that->type != _Filter) return false;
    if (!condition->equalTo(_that->condition)) return false;
    return child->equalTo(_that->child);
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