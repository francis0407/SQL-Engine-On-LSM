
#include "Filter.h"

namespace simplesql{
namespace operators {

bool Filter::open() {
    // maybe assert `resolved` here.
}

NextResult Filter::next() {
    while(true) {
        NextResult nextResult = child->next();
        if (nextResult.row == nullptr)
            return NextResult(nullptr);
        
        AnyValue* value = condition->eval(nextResult.row);
        bool filtered = !(value->asBoolean());

        if (filtered)
            continue;
        else
            return nextResult;
    }
}

}} // namespace simplesql::opterators