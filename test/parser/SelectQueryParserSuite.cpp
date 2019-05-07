
#include <stdarg.h>

#include "gtest/gtest.h"

#include "parser/SQLParser.h"

#include "operators/Operator.h"
#include "operators/Project.h"
#include "operators/Filter.h"
#include "operators/Join.h"
#include "operators/SeqScan.h"

#include "expressions/Literal.h"
#include "expressions/Logic.h"
#include "expressions/Comparison.h"
#include "expressions/Arithmetic.h"
#include "expressions/AttributeReference.h"

using namespace simplesql::expressions;
using namespace simplesql::parser;
using namespace simplesql;

class SelectQueryParserSuite : public testing::Test {
public:
    SelectQueryParserSuite() {

    }

    virtual void SetUp() override {

    }

    virtual void TearDown() override {

    }

    void assertQuery(const string& sql, OperatorBase* opt) {
        OperatorBase* newOpt = parser.parseSelectQuery(sql);
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

TEST_F(SelectQueryParserSuite, BasicQuery) {
    // only P
    assertQuery(
        "SELECT A FROM B",
        new Project(
            buildExprList(1, new AttributeReference("A")),
            new SeqScan(new RelationReference("B"))   
        )
    );
    // S-P
    assertQuery(
        "SELECT A FROM B WHERE C > D", 
        new Project(
            buildExprList(1, new AttributeReference("A")),
            new Filter(
                new GreaterThan(new AttributeReference("C"), new AttributeReference("D")),
                new SeqScan(new RelationReference("B"))
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
                    new SeqScan(new RelationReference("B")),
                    new SeqScan(new RelationReference("C")),
                    BuildLeft
                )
            )
        )
    );
}

TEST_F(SelectQueryParserSuite, MultiAttributeProject) {
    assertQuery(
        "SELECT A, B, C FROM D",
        new Project(
            buildExprList(
                3,
                new AttributeReference("A"), 
                new AttributeReference("B"),
                new AttributeReference("C")),
            new SeqScan(new RelationReference("D"))
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
            new SeqScan(new RelationReference("E", "P"))
        )
    );
} 
