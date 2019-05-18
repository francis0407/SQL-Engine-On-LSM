#pragma once

#include <vector>

#include "datatypes/ValueBase.h"
#include "Row.h"

namespace simplesql {
namespace execution {

using namespace simplesql::datatypes;
using namespace simplesql;
class Relation {
public:
    Relation();
    ~Relation();
    void show();
    void append(Row* row);
    std::vector<Row*> rows;
    AttributeSeq schema;
    int columns = 0;
private:
    MemoryPool* mp;
};


}} // namespace simplesql::execution