
#include "Expression.h"


namespace simplesql::expressions {

AnyValue* ExpressionBase::eval(Row* r) {
    MemoryPool mp; // use a new MemoryPool
    AnyValue* result = eval(r, &mp);
    return result->makeCopy();
}

} // namespace simplesql::expressions