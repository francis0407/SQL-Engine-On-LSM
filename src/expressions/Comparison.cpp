 
 #include "Comparison.h"

 
namespace simplesql::expressions {
 
AnyValue* EqualTo::eval(Row* r, MemoryPool *mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);

    bool equalTo = leftValue->equalTo(rightValue);

    BooleanValue* result = BooleanValue::create(equalTo, mp);
    return result; 
}


} // namespace simplesql::expressions