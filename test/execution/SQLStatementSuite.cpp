#include "gtest/gtest.h"

#include <map>
#include <stdio.h>
#include <dirent.h>

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
#include "catalog/LevelDBCatalog.h"
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
        qe = new QueryExecutor(new LevelDBCatalog("TestDB"));
    }
    ~SQLStatementSuite() {
        // delete qe;
    }

    virtual void TearDown() override {
        // DIR* dirp = opendir("TestDB");
        // struct dirent *dir;
        // while ((dir = readdir(dirp)) != NULL)
        //     unlink(dir->d_name);
        // closedir(dirp);
        // rmdir("TestDB");
    }
    QueryExecutor* qe;

    void withTableTest() {
        static bool isCreated = false;
        if (isCreated) return;
        Relation result;
        qe->executeSQL("CREATE TABLE TEMP (A INTEGER, B STRING, C FLOAT) INDEX ON (B);", result);
    }

    template<size_t rows, size_t columns>
    void assertResult(const Relation& result, AnyValue* answer[rows][columns] ) {
        ASSERT_EQ(result.columns, columns);
        ASSERT_EQ(result.rows.size(), rows);
        for (size_t i = 0; i < rows; i++)
            for (size_t j = 0; j < columns; j++) {
                ASSERT_TRUE(result.rows[i]->values[j]->equalToSemantically(answer[i][j]));
                delete answer[i][j];
            }
    }
};

TEST_F(SQLStatementSuite, CreateTable) {
    Relation result;
    qe->executeSQL("CREATE TABLE TEMP (A INTEGER, B STRING, C FLOAT) INDEX ON (B);", result);
    RelationReference relation("TEMP");
    ASSERT_TRUE(qe->catalog->findRelation(relation));
    ASSERT_TRUE(relation.attributes.attributes[0].equalTo(Attribute(Integer, "A")));
    ASSERT_TRUE(relation.attributes.attributes[0].hasIndex);
    ASSERT_TRUE(relation.attributes.attributes[1].equalTo(Attribute(Integer, "B")));
    ASSERT_TRUE(relation.attributes.attributes[1].hasIndex);
    ASSERT_TRUE(relation.attributes.attributes[2].equalTo(Attribute(Integer, "C")));
    ASSERT_FALSE(relation.attributes.attributes[2].hasIndex);

    qe->executeSQL("INSERT INTO TEMP VALUES (1, 'ddd', 1.0), (2, 'ddd', 2.0), (3, 'ccc', 3.0);", result);
    Relation result2;
    qe->executeSQL("SELECT A, B, C FROM TEMP;", result2);
    AnyValue* answer[3][3] = {
        {IntegerValue::create(1), StringValue::create(string("ddd")), FloatValue::create(1.0f)},
        {IntegerValue::create(2), StringValue::create(string("ddd")), FloatValue::create(2.0f)},
        {IntegerValue::create(3), StringValue::create(string("ccc")), FloatValue::create(3.0f)},
    };
    assertResult<3, 3>(result2, answer);

    // Secondary Index Scan
    OperatorBase* opt = new SecondIndexScan(new RelationReference("TEMP"), 1, Literal::create(string("ccc")), nullptr);
    Relation result3;
    qe->executeTree(opt, result3);
    AnyValue* answer3[3][3] = {
        {IntegerValue::create(3), StringValue::create(string("ccc")), FloatValue::create(3.0f)},
        {IntegerValue::create(1), StringValue::create(string("ddd")), FloatValue::create(1.0f)},
        {IntegerValue::create(2), StringValue::create(string("ddd")), FloatValue::create(2.0f)}
    };
    assertResult<3, 3>(result3, answer3);

    // HashJoin
    OperatorBase* opt2 = new InnerJoin(
        new SecondIndexScan(new RelationReference("TEMP", "T1"), 1, nullptr, nullptr),
        new SeqScan(new RelationReference("TEMP", "T2")),
        BuildLeft,
        new EqualTo(new AttributeReference("T1", "B"), new AttributeReference("T2", "B")),
        HashJoin
    );
    ((InnerJoin*)opt2)->leftKeyOffset = 1;
    ((InnerJoin*)opt2)->rightKeyOffset = 1;
    Relation result4;
    qe->executeTree(opt2, result4);
    ASSERT_EQ(result4.rows.size(), 5);
    result4.show();
}

TEST_F(SQLStatementSuite, Insert) {
    // withTableTest();
    // Relation result;
    // qe->executeSQL("INSERT INTO TEMP VALUES (1, 'aaa', 1.0), (2, 'bbb', 2.0), (3, 'ccc', 3.0);", result);
    // Relation result2;
    // qe->executeSQL("SELECT A, B, C FROM TEMP;", result2);
    // AnyValue* answer[3][3] = {
    //     {IntegerValue::create(1), StringValue::create(string("aaa")), FloatValue::create(1.0f)},
    //     {IntegerValue::create(2), StringValue::create(string("bbb")), FloatValue::create(2.0f)},
    //     {IntegerValue::create(3), StringValue::create(string("ccc")), FloatValue::create(3.0f)},
    // };
    // assertResult<3, 3>(result2, answer);
}



