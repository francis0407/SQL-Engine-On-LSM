 
 #include "expressions/Comparison.h"

 
namespace simplesql {
namespace expressions {
 
AnyValue* EqualTo::eval(Row* r, MemoryPool *mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);

    bool equalTo = leftValue->equalTo(rightValue);

    BooleanValue* result = BooleanValue::create(equalTo, mp);
    return result; 
}

AnyValue* LessThan::eval(Row* r, MemoryPool *mp) {
    AnyValue* leftValue = left->eval(r, mp);
    AnyValue* rightValue = right->eval(r, mp);

    bool equalTo = rightValue->greaterThan(leftValue); // a < b ? === b > a?

    BooleanValue* result = BooleanValue::create(equalTo, mp);
    return result; 
}

}} // namespace simplesql::expressions