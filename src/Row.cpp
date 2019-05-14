
#include <cstring>

#include "Row.h"

using namespace simplesql;

// Row* Row::create(AnyValue* columns[], AttributeSeq& attrs, MemoryPool* mp) {
//     byte* buf = mp->allocate(sizeof(Row) + attrs.bytes());
//     Row* row = (Row*) buf;
//     buf += sizeof(Row);
//     row->values = buf;
//     row->bytes = attrs.bytes();
//     for (size_t i = 0; i < attrs.attributes.size(); i++) {
//         switch (columns[i]->valueType) {
//             case Integer: {
//                 int* v = (int*) buf;
//                 *v = ((IntegerValue*)columns[i])->value;
//                 buf += sizeof(int);  
//                 break;
//             }
//             case Float: {
//                 float* v = (float*) buf;
//                 *v = ((FloatValue*)columns[i])->value;
//                 buf += sizeof(float);  
//                 break;
//             }
//             case Boolean: {
//                 bool* v = (bool*) buf;
//                 *v = ((BooleanValue*)columns[i])->value;
//                 buf += sizeof(bool);  
//                 break;
//             }
//             case String: {
//                 // char** v = (char**) buf;
//                 buf = (byte*)((StringValue*)columns[i])->value;
//                 buf += sizeof(char**);  
//                 break;
//             }
//         }
//     }
//     return row;
// }

// Row* Row::concat(Row* r1, Row* r2, MemoryPool* mp) {
//     byte* buf = mp->allocate(sizeof(Row) + r1->bytes + r2->bytes);
//     Row* row = (Row*) buf;
//     buf += sizeof(Row);
//     row->values = buf;
//     row->bytes = r1->bytes + r2->bytes;
//     memcpy(buf, r1->values, r1->bytes);
//     memcpy(buf + r1->bytes, r2->values, r2->bytes);
//     return row;
// }

Row* Row::copyFrom(AnyValue* columns[], size_t _len, MemoryPool *mp) {   
    byte* buf = mp->allocate(sizeof(Row) + _len * sizeof(AnyValue*));
    Row* row = (Row*) buf;
    buf += sizeof(Row);
    row->values = (AnyValue**)buf;
    row->len = _len;
    memcpy(row->values, columns, sizeof(AnyValue*) * _len);
    return row;
}

Row* Row::create(AnyValue* columns[], size_t _len, MemoryPool *mp) {
    byte* buf = mp->allocate(sizeof(Row));
    Row* row = (Row*) buf;
    row->values = columns;
    row->len = _len;
    return row; 
}

Row* Row::concat(Row* r1, Row* r2, MemoryPool* mp) {
    byte* buf = mp->allocate(sizeof(Row) + sizeof(AnyValue*) * (r1->len + r2->len));
    Row* row = (Row*) buf;
    buf += sizeof(Row);
    row->values = (AnyValue**)buf;
    row->len = r1->len + r2->len;
    memcpy(buf, r1->values, r1->len * sizeof(AnyValue*));
    memcpy(buf + r1->len * sizeof(AnyValue*), r2->values, r2->len * sizeof(AnyValue*));
    return row;
}

Row* Row::makeCopy(MemoryPool* mp) {
    byte* buf = mp->allocate(sizeof(Row) + sizeof(AnyValue*) * len);
    Row* row = (Row*) buf;
    buf += sizeof(Row);
    row->values = (AnyValue**)buf;
    row->len = len;
    for (size_t i = 0; i < len; i++) 
        row->values[i] = values[i]->makeCopy(mp);
    return row;
}