#include "iostream"
#include "execution/Relation.h"

using namespace simplesql::execution;
using namespace simplesql::datatypes;
using namespace simplesql;


Relation::Relation() {
    mp = new MemoryPool();
}

Relation::~Relation() {
    delete mp;
    // for(auto iter : rows) {
    //     for (int i = 0; i < columns; i++)
    //         delete iter[i];
    // }
}
void Relation::append(Row* row) {
    columns = row->len;
    rows.push_back(row->makeCopy(mp));
}

void Relation::show() {
    for (size_t i = 0; i < columns; i++) {
        if (i != 0)
            std::cout << " | ";
        std::cout << schema.attributes[i].name;
    }
    std::cout << std::endl;
    for (size_t i = 0; i < rows.size(); i++) {
        for (size_t j = 0; j < columns; j++) {
            if (j != 0) 
                std::cout << " | ";
            std::cout << rows[i]->values[j]->toString();
        }
        std::cout << std::endl;
    }
}
// void Relation::append(Row* row, const AttributeSeq& schema) {
//     rows.push_back(std::vector<AnyValue*>());
//     std::vector<AnyValue*> &newRow = rows.back();
//     newRow.resize(schema.attributes.size());
//     for (int i = 0; i < schema.attributes.size(); i++) {
//         AnyValue* value = AnyValue::create(
//             schema.attributes[i].dataType, row->values + schema.attributes[i].offset);
//         newRow[i] = value;
//     }
// }
