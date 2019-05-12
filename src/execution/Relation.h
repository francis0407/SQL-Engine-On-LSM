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
    void append(Row* row, const AttributeSeq& schema);
    std::vector<std::vector<AnyValue*> > rows;
    int columns = 0;
};


}} // namespace simplesql::execution