 
#include "expressions/AttributeReference.h"
 
namespace simplesql {
namespace expressions {
 
AnyValue* AttributeReference::eval(Row* r, MemoryPool *mp) {
    return AnyValue::create(reference.dataType, r->values + reference.offset, mp);
}


}} // namespace simplesql::expressions