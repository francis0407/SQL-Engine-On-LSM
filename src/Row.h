#pragma once

namespace simplesql {

using namespace simplesql::datatypes;

class Row {
public:
    static Row* create(AnyValue* _columns[], int _columnNum, MemoryPool* _mp);
    int columnNum;
    AnyValue* columns[0];
};

class AttributeSet {
public:
    
};

} // namespace simplesql