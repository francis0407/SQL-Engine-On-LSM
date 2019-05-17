
#include <stdarg.h>

#include "gtest/gtest.h"

#include "parser/SQLParser.h"

#include "operators/Operator.h"
#include "operators/Project.h"
#include "operators/Filter.h"
#include "operators/Join.h"
#include "operators/Scan.h"
#include "operators/CreateTable.h"

#include "expressions/Literal.h"
#include "expressions/Logic.h"
#include "expressions/Comparison.h"
#include "expressions/Arithmetic.h"
#include "expressions/AttributeReference.h"

using namespace simplesql::expressions;
using namespace simplesql::parser;
using namespace simplesql;

class SQLParserSuite : public testing::Test {
public:
    SQLParserSuite() {

    }

    virtual void SetUp() override {

    }

    virtual void TearDown() override {

    }

    void assertQuery(const string& sql, OperatorBase* opt) {
        OperatorBase* newOpt = parser.parseStatement(sql);
        ASSERT_TRUE(newOpt->equalTo(opt));// << sql  << " : "<< newExpr->toString();
        delete newOpt;
        delete opt;
    }
    
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

    SQLParser parser;
};

TEST_F(SQLParserSuite, BasicQuery) {
    // only P
    assertQuery(
        "SELECT A FROM B",
        new Project(
            buildExprList(1, new AttributeReference("A")),
            new Scan(new RelationReference("B"))   
        )
    );
    // S-P
    assertQuery(
        "SELECT A FROM B WHERE C > D", 
        new Project(
            buildExprList(1, new AttributeReference("A")),
            new Filter(
                new GreaterThan(new AttributeReference("C"), new AttributeReference("D")),
                new Scan(new RelationReference("B"))
            )
    ));
    // S-P-J
    assertQuery(
        "SELECT A FROM B, C WHERE E = F",
        new Project(
            buildExprList(1, new AttributeReference("A")),
            new Filter(
                new EqualTo(new AttributeReference("E"), new AttributeReference("F")),
                new InnerJoin(
                    new Scan(new RelationReference("B")),
                    new Scan(new RelationReference("C")),
                    BuildLeft
                )
            )
        )
    );
}

TEST_F(SQLParserSuite, MultiAttributeProject) {
    assertQuery(
        "SELECT A, B, C FROM D",
        new Project(
            buildExprList(
                3,
                new AttributeReference("A"), 
                new AttributeReference("B"),
                new AttributeReference("C")),
            new Scan(new RelationReference("D"))
        )
    );

    assertQuery(
        "SELECT A + 1, B - C, E.D FROM E AS P",
        new Project(
            buildExprList(
                3,
                new Add(new AttributeReference("A"), Literal::create(1)),
                new Minus(new AttributeReference("B"), new AttributeReference("C")),
                new AttributeReference("E", "D")
            ),
            new Scan(new RelationReference("E", "P"))
        )
    );
} 

TEST_F(SQLParserSuite, CreateTable) {
    {
        std::vector<Attribute* > attrs;
        std::vector<string> index;
        attrs.push_back(new Attribute(Integer, string("T1A")));
        attrs.push_back(new Attribute(String, string("T1B")));
        attrs.push_back(new Attribute(Float, string("T1C")));
        attrs.push_back(new Attribute(Boolean, string("T1D")));
        assertQuery(
            "CREATE TABLE T1(T1A INTEGER, T1B STRING, T1C FLOAT, T1D BOOLEAN)",
            new CreateTable(string("T1"), attrs, index)
        );
    }
    {
        std::vector<Attribute*> attrs;
        std::vector<string> index;
        attrs.push_back(new Attribute(Integer, string("T1A")));
        attrs.push_back(new Attribute(String, string("T1B")));
        attrs.push_back(new Attribute(Float, string("T1C")));
        attrs.push_back(new Attribute(Boolean, string("T1D")));
        index.push_back("T1B");
        index.push_back("T1C");
        assertQuery(
            "CREATE TABLE T1(T1A INTEGER, T1B STRING, T1C FLOAT, T1D BOOLEAN) INDEX ON (T1B, T1C)",
            new CreateTable(string("T1"), attrs, index)
        );
    }
}
