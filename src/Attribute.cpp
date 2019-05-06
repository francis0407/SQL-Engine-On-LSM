#include "Attribute.h"

using namespace simplesql;

Attribute::Attribute() {

}

bool Attribute::equalTo(const Attribute& that) {
    return tableReference == that.tableReference && name == that.name;
}

AttributeSeq::AttributeSeq() {
    
}
