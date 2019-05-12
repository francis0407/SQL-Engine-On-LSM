#include "gtest/gtest.h"

#include <map>
#include <stdarg.h>

#include "operators/Operator.h"
#include "operators/Project.h"
#include "operators/Filter.h"
#include "operators/Join.h"
#include "operators/Scan.h"

#include "analyzer/Analyzer.h"
#include "analyzer/AnalysisException.h"

#include "expressions/Literal.h"
#include "expressions/Logic.h"
#include "expressions/Comparison.h"
#include "expressions/Arithmetic.h"
#include "expressions/AttributeReference.h"

using namespace simplesql::expressions;
using namespace simplesql::analyzer;
using namespace simplesql::catalog;
using namespace simplesql;

using std::string;
using std::vector;
using std::map;

class TestCatalog : public CatalogBase {
public:
    TestCatalog() {
        vector<Attribute> a;
        a.push_back(Attribute(Integer, 0, "A1"));
        a.push_back(Attribute(Integer, 4, "A2"));
        a.push_back(Attribute(String, 8, "A3"));
        a.push_back(Attribute(Float, 16, "A4"));
        catalog["A"] = a;

        vector<Attribute> b;
        b.push_back(Attribute(Integer, 0, "B1"));
        b.push_back(Attribute(Boolean, 4, "B2"));
        b.push_back(Attribute(String, 5, "B3"));
        b.push_back(Attribute(Float, 13, "B4"));
        catalog["B"] = b;
    }
    virtual bool findRelation(RelationReference& relation) override {
        auto r = catalog.find(relation.tableName);
        if (r == catalog.end()) return false;
        for (auto iter : r->second)
            relation.attributes.append(iter);
        if (relation.referenceName.empty())
            relation.referenceName = relation.tableName;
        relation.tableID = r->first[0];
        relation.resolved = true;
        return true;
    }
private:
    map<string, vector<Attribute>> catalog;
};

class TestAnalyzer : public RuleExecutor {
public:
    TestAnalyzer(CatalogBase* _catalog) : catalog(_catalog){}
    void addRule(RuleBatch* batch) {
        batches.push_back(batch);
    }
    virtual OperatorBase* run(OperatorBase* opt) override {
        return execute(opt);
    }
    CatalogBase* catalog;
};

class AnalyzerSuite : public testing::Test {
public:

    std::vector<ExpressionBase *> buildExprList(int n, ...) {
        std::vector<ExpressionBase *> list;
        va_list ap;
        va_start(ap, n);
        ExpressionBase* tmp = nullptr;
        for (int i = 0; i < n; i++) {
            tmp = va_arg(ap, ExpressionBase*);
            list.push_back(tmp);
        }
        va_end(ap);
        return list;
    }
};

TEST_F(AnalyzerSuite, ResolveRelation) {
    TestAnalyzer analyzer(new TestCatalog());
    analyzer.addRule(
        new RuleBatch(
            1, 1, 
            new ResolveRelations(analyzer.catalog)
        )
    );
    OperatorBase* opts = 
        new Project(
            buildExprList(1, new AttributeReference("A1")),
            new Filter(
                new EqualTo(new AttributeReference("B1"), new AttributeReference("A2")),
                new InnerJoin(
                    new Scan(new RelationReference("A")),
                    new Scan(new RelationReference("B")),
                    BuildLeft
                )
            )
        );
    bool resolved = true;
    try {
        opts = analyzer.run(opts);
        resolved = true;
    } catch (AnalysisException& e) {
        resolved = false;
    }
    ASSERT_TRUE(resolved);
    delete opts;

    opts = 
        new Project(
            buildExprList(1, new AttributeReference("A1")),
            new Filter(
                new EqualTo(new AttributeReference("B1"), new AttributeReference("A2")),
                new InnerJoin(
                    new Scan(new RelationReference("C")),
                    new Scan(new RelationReference("B")),
                    BuildLeft
                )
            )
        );
    try {
        opts = analyzer.run(opts);
        resolved = true;
    } catch (AnalysisException& e) {
        resolved = false;
    }
    ASSERT_FALSE(resolved);
    delete opts;
}

TEST_F(AnalyzerSuite, ResolveAttributes) {
    TestAnalyzer analyzer(new TestCatalog());
    analyzer.addRule(
        new RuleBatch(
            1, 2, 
            new ResolveRelations(analyzer.catalog),
            new ResolveAttributes()
        )
    );
    OperatorBase* opts = 
        new Project(
            buildExprList(1, new AttributeReference("A1")),
            new Filter(
                new EqualTo(new AttributeReference("B1"), new AttributeReference("A2")),
                new InnerJoin(
                    new Scan(new RelationReference("A")),
                    new Scan(new RelationReference("B")),
                    BuildLeft
                )
            )
        );
    bool resolved = true;
    try {
        opts = analyzer.run(opts);
    } catch (AnalysisException& e) {
        resolved = false;
    }
    ASSERT_TRUE(resolved);
    delete opts;

    opts = 
        new Project(
            buildExprList(1, new AttributeReference("A1")),
            new Filter(
                new EqualTo(new AttributeReference("B5"), new AttributeReference("A2")),
                new InnerJoin(
                    new Scan(new RelationReference("A")),
                    new Scan(new RelationReference("B")),
                    BuildLeft
                )
            )
        );
    try {
        opts = analyzer.run(opts);
        resolved = true;
    } catch (AnalysisException& e) {
        resolved = false;
    }
    ASSERT_FALSE(resolved);
    delete opts;
}