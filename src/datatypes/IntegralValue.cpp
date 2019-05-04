
// #include "datatypes/ValueBase.h"

// namespace simplesql::datatypes {

// bool IntegerValue::equalTo(AnyValue* that) {
//     switch (that->valueType) {
//         case Integer:
//             return value == ((IntegerValue*)that)->value;
//         case SmallInt:
//             return value == ((SmallIntValue*)that)->value;
//         case BigInt:
//             return value == ((BigIntValue*)that)->value;
//         case Float:
//             return value == ((FloatValue*)that)->value;
//         case Double:
//             return value == ((DoubleValue*)that)->value;
//         default:
//             return false;  
//     }
//     return false;
// }

// bool IntegerValue::greaterThan(AnyValue* that) {
//     switch (that->valueType) {
//         case Integer:
//             return value > ((IntegerValue*)that)->value;
//         case SmallInt:
//             return value > ((SmallIntValue*)that)->value;
//         case BigInt:
//             return value > ((BigIntValue*)that)->value;
//         case Float:
//             return value > ((FloatValue*)that)->value;
//         case Double:
//             return value > ((DoubleValue*)that)->value;
//         default:
//             return false;  
//     }
//     return false;
// }

// bool IntegerValue::greaterThanOrEqual(AnyValue* that) {
//     switch (that->valueType) {
//         case Integer:
//             return value >= ((IntegerValue*)that)->value;
//         case SmallInt:
//             return value >= ((SmallIntValue*)that)->value;
//         case BigInt:
//             return value >= ((BigIntValue*)that)->value;
//         case Float:
//             return value >= ((FloatValue*)that)->value;
//         case Double:
//             return value >= ((DoubleValue*)that)->value;
//         default:
//             return false;  
//     }
//     return false;
// }


// } // namespace simplesql::datatypes