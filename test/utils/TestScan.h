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

class TestScan : public Scan {
public:
    TestScan(RelationReference* _relation, bool isA): Scan(_relation) {
        method = ExtendScan;
        if (isA) {
            data.push_back(
                std::tuple<int, float, bool, std::string>(1, 1.1f, true, "a1")
            );
            data.push_back(
                std::tuple<int, float, bool, std::string>(2, 2.2f, true, "a2")
            );
            data.push_back(
                std::tuple<int, float, bool, std::string>(3, 3.3f, false, "a3")
            );
        } else {
            data.push_back(
                std::tuple<int, float, bool, std::string>(1, 11.1f, true, "b1")
            );
            data.push_back(
                std::tuple<int, float, bool, std::string>(2, 22.2f, true, "b2")
            );
            data.push_back(
                std::tuple<int, float, bool, std::string>(3, 33.3f, false, "b3")
            );
        }

        mp = nullptr;
        index = 0;
    }
    virtual bool open() override{
        index = 0;
        if (mp != nullptr) {
            delete mp;
            mp = nullptr;
        }
        return true;
    }
    virtual NextResult next() override {
        if (index >= data.size())
            return NextResult(nullptr);
        if (mp != nullptr) {
            delete mp;
            mp = nullptr;
        }
        mp = new MemoryPool();
        AnyValue* vs[4];
        vs[0] = IntegerValue::create(get<0>(data[index]));
        vs[1] = FloatValue::create(get<1>(data[index]));
        vs[2] = BooleanValue::create(get<2>(data[index]));
        vs[3] = StringValue::create(get<3>(data[index]));
        Row* row = Row::create(vs, outputs, mp);
        delete vs[0];
        delete vs[1];
        delete vs[2];
        delete vs[3];
        index ++;
        return NextResult(row, mp);
    }

    virtual bool close() override {
        if (mp != nullptr) {
            delete mp;
            mp = nullptr;
        }
    }

private:
    int index;
    std::vector<std::tuple<int, float, bool, std::string> > data;
    MemoryPool* mp;
};

}} // namespace simplesql::test