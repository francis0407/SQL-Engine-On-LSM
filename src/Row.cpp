
#include <cstring>

#include "Row.h"

using namespace simplesql;

Row* Row::create(AnyValue* columns[], AttributeSeq& attrs, MemoryPool* mp) {
    byte* buf = mp->allocate(sizeof(Row) + attrs.bytes());
    Row* row = (Row*) buf;
    buf += sizeof(Row);
    row->values = buf;
    row->bytes = attrs.bytes();
    for (size_t i = 0; i < attrs.attributes.size(); i++) {
        switch (columns[i]->valueType) {
            case Integer: {
                int* v = (int*) buf;
                *v = ((IntegerValue*)columns[i])->value;
                buf += sizeof(int);  
                break;
            }
            case Float: {
                float* v = (float*) buf;
                *v = ((FloatValue*)columns[i])->value;
                buf += sizeof(float);  
                break;
            }
            case Boolean: {
                bool* v = (bool*) buf;
                *v = ((BooleanValue*)columns[i])->value;
                buf += sizeof(bool);  
                break;
            }
            case String: {
                char** v = (char**) buf;
                *v = ((StringValue*)columns[i])->value;
                buf += sizeof(char**);  
                break;
            }
        }
    }
    return row;
}

Row* Row::concat(Row* r1, Row* r2, MemoryPool* mp) {
    byte* buf = mp->allocate(sizeof(Row) + r1->bytes + r2->bytes);
    Row* row = (Row*) buf;
    buf += sizeof(Row);
    row->values = buf;
    row->bytes = r1->bytes + r2->bytes;
    memcpy(buf, r1->values, r1->bytes);
    memcpy(buf + r1->bytes, r2->values, r2->bytes);
    return row;
}