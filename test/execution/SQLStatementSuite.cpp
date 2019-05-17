#include "gtest/gtest.h"

#include <map>

#include "expressions/Literal.h"
#include "expressions/AttributeReference.h"
#include "expressions/Comparison.h"

#include "operators/Scan.h"
#include "operators/Project.h"
#include "operators/Filter.h"
#include "operators/Join.h"

#include "catalog/Catalog.h"
#include "catalog/RelationReference.h"

#include "execution/QueryExecutor.h"

#include "MemoryPool.h"

#include "test/util/TestCatalog.h" 
#include "test/util/TestScan.h"

using namespace simplesql;
using namespace simplesql::expressions;
using namespace simplesql::operators;
using namespace simplesql::catalog;
using namespace simplesql::execution;
using namespace simplesql::test;
using namespace std;


class SQLStatementSuite : public testing::Test {
public:
    SQLStatementSuite() {
        qe = new QueryExecutor(new TestCatalog());
    }
    ~SQLStatementSuite() {
        delete qe;
    }
    QueryExecutor* qe;

};

