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
    show(20);
}

void Relation::show(size_t maxRows) {
    if (rows.size() < maxRows)
        maxRows = rows.size();
    size_t firstLineLength = 0;
    for (size_t i = 0; i < columns; i++) {
        if (i != 0)
            std::cout << " | ";
        std::cout << schema.attributes[i].name;
        firstLineLength += schema.attributes[i].name.length() + 3;
    }
    std::cout << std::endl;
    for (size_t i = 0; i < firstLineLength; i++)
        std::cout << "-";
    std::cout << std::endl;
    for (size_t i = 0; i < maxRows; i++) {
        for (size_t j = 0; j < columns; j++) {
            if (j != 0) 
                std::cout << " | ";
            std::string value = rows[i]->values[j]->toString();
            std::cout << value;
        }
        std::cout << std::endl;
    }
    std::cout << "(" << rows.size() << " rows)" << std::endl;
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
