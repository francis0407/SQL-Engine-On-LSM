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
    void append(Row* row);
    std::vector<Row*> rows;
    int columns = 0;
private:
    MemoryPool* mp;
};


}} // namespace simplesql::execution