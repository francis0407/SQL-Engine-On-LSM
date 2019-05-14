#include <map>

#include "expressions/Literal.h"
#include "expressions/AttributeReference.h"
#include "expressions/Comparison.h"

#include "operators/Scan.h"
#include "operators/Project.h"
#include "operators/Filter.h"

#include "catalog/Catalog.h"
#include "catalog/RelationReference.h"

#include "execution/QueryExecutor.h"

#include "MemoryPool.h"

using namespace simplesql;
using namespace simplesql::expressions;
using namespace simplesql::operators;
using namespace simplesql::catalog;
using namespace simplesql::execution;
using namespace std;

namespace simplesql {
namespace test {

class TestCatalog : public CatalogBase {
public:
    TestCatalog() {
        vector<Attribute> a;
        a.push_back(Attribute(Integer, 0, "A1"));
        a.push_back(Attribute(Float, 4, "A2"));
        a.push_back(Attribute(Boolean, 8, "A3"));
        a.push_back(Attribute(String, 9, "A4"));
        catalog["A"] = a;

        vector<Attribute> b;
        b.push_back(Attribute(Integer, 0, "B1"));
        b.push_back(Attribute(Float, 4, "B2"));
        b.push_back(Attribute(Boolean, 8, "B3"));
        b.push_back(Attribute(String, 9, "B4"));
        catalog["B"] = b;
    }
    virtual bool findRelation(RelationReference& relation) override {
        auto r = catalog.find(relation.tableName);
        if (r == catalog.end()) return false;
        if (relation.referenceName.empty())
            relation.referenceName = relation.tableName;
        for (auto iter : r->second) {
            iter.tableReference = relation.referenceName;
            relation.attributes.append(iter);
        }
        relation.tableID = r->first[0];
        relation.resolved = true;
        return true;
    }
private:
    map<string, vector<Attribute>> catalog;
};

}} // namespace simplesql::test