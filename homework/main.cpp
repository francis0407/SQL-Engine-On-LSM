
#include <string>
#include <iostream>
#include <sys/time.h> 

#include "execution/QueryExecutor.h"
#include "catalog/LevelDBCatalog.h"
#include "operators/Join.h"
#include "operators/Filter.h"
#include "operators/Project.h"
#include "operators/Scan.h"
#include "expressions/AttributeReference.h"
#include "expressions/Comparison.h"
#include "expressions/Logic.h"

using namespace simplesql;
using namespace simplesql::catalog;
using namespace simplesql::execution;
using namespace simplesql::expressions;
using std::string;


long getCurrentTime() {  
   struct timeval tv;  
   gettimeofday(&tv,NULL);  
   return tv.tv_sec * 1000 * 1000 + tv.tv_usec;  
}  

void Prepare(string DBNAME, QueryExecutor& qe) {
    string createTable = "CREATE TABLE EMAILS (ID INTEGER, EMAIL STRING) INDEX ON (EMAIL);";
    std::cout << "Creating Table ..." << std::endl;
    Relation result1;
    qe.executeSQL(createTable, result1);
    result1.show();

    std::cout << "Copying File ..." << std::endl;
    long begin_time = getCurrentTime();
    Relation result2;
    qe.executeSQL("COPY EMAILS FROM './"+ DBNAME +".csv' DELIMITER ',' CSV;", result2);
    result2.show();
    long end_time = getCurrentTime();
    std::cout << "Time: " << end_time - begin_time << " ms" << std::endl;
}

void Query(string secondaryIndexKey, int lower, int upper, QueryExecutor& qe) {
    Relation result;
    OperatorBase* opt = 
        new InnerJoin(
            new Filter(
                new And(
                    new GreaterThanOrEqual(new AttributeReference("T1", "ID"), Literal::create(lower)),
                    new LessThanOrEqual(new AttributeReference("T1", "ID"), Literal::create(upper))
                ),
                new SecondIndexScan(new RelationReference("EMAILS", "T1"), 1, Literal::create(secondaryIndexKey), Literal::create(secondaryIndexKey))
            ),
            new Filter(
                new And(
                    new GreaterThanOrEqual(new AttributeReference("T2", "ID"), Literal::create(lower)),
                    new LessThanOrEqual(new AttributeReference("T2", "ID"), Literal::create(upper))
                ),
                new SecondIndexScan(new RelationReference("EMAILS", "T2"), 1, Literal::create(secondaryIndexKey), Literal::create(secondaryIndexKey))
            ),
            BuildLeft,
            new EqualTo(new AttributeReference("T1", "EMAIL"), new AttributeReference("T2", "EMAIL")),
            HashJoin
        );
    ((InnerJoin*)opt)->leftKeyOffset = 1;
    ((InnerJoin*)opt)->rightKeyOffset = 1;
    long begin_time = getCurrentTime();
    qe.executeTree(opt, result);
    long end_time = getCurrentTime();
    result.show();
    std::cout << "Time: " << end_time - begin_time << " us" << std::endl;
}

void test(string secondaryIndexKey, int lower, int upper, QueryExecutor& qe) {
    Relation result;
    OperatorBase* opt = 
        new Filter(
                new And(
                    new GreaterThanOrEqual(new AttributeReference("T2", "ID"), Literal::create(lower)),
                    new LessThanOrEqual(new AttributeReference("T2", "ID"), Literal::create(upper))
                ),
                new SecondIndexScan(new RelationReference("EMAILS", "T2"), 1, Literal::create(secondaryIndexKey), Literal::create(secondaryIndexKey))
    );
    qe.executeTree(opt, result);
    result.show(100);
}

void Query2(string secondaryIndexKey, int lower, int upper, QueryExecutor& qe) {
    Relation result;
    OperatorBase* opt = 
        new InnerJoin(
            new Filter(
                new EqualTo(
                    new AttributeReference("T1", "EMAIL"), Literal::create(secondaryIndexKey)
                ),
                new SeqScan(new RelationReference("EMAILS", "T1"), Literal::create(lower), Literal::create(upper))
            ),
            new Filter(
                new EqualTo(
                    new AttributeReference("T2", "EMAIL"), Literal::create(secondaryIndexKey)
                ),
                new SeqScan(new RelationReference("EMAILS", "T2"), Literal::create(lower), Literal::create(upper))
            ),
            BuildLeft,
            new EqualTo(new AttributeReference("T1", "EMAIL"), new AttributeReference("T2", "EMAIL")),
            HashJoin
        );
    ((InnerJoin*)opt)->leftKeyOffset = 1;
    ((InnerJoin*)opt)->rightKeyOffset = 1;
    long begin_time = getCurrentTime();
    qe.executeTree(opt, result);
    long end_time = getCurrentTime();
    result.show();
    std::cout << "Time: " << end_time - begin_time << " us" << std::endl;
}

void Query3(string secondaryIndexKey, int lower, int upper, QueryExecutor& qe) {
    Relation result;
    OperatorBase* opt = 
        new InnerJoin(
            new Filter(
                new EqualTo(
                    new AttributeReference("T1", "EMAIL"), Literal::create(secondaryIndexKey)
                ),
                new SeqScan(new RelationReference("EMAILS", "T1"), Literal::create(lower), Literal::create(upper))
            ),
            new Filter(
                new And(
                    new GreaterThanOrEqual(new AttributeReference("T2", "ID"), Literal::create(lower)),
                    new LessThanOrEqual(new AttributeReference("T2", "ID"), Literal::create(upper))
                ),
                new SecondIndexScan(new RelationReference("EMAILS", "T2"), 1, Literal::create(secondaryIndexKey), Literal::create(secondaryIndexKey))
            ),
            BuildLeft,
            new EqualTo(new AttributeReference("T1", "EMAIL"), new AttributeReference("T2", "EMAIL")),
            HashJoin
        );
    ((InnerJoin*)opt)->leftKeyOffset = 1;
    ((InnerJoin*)opt)->rightKeyOffset = 1;
    long begin_time = getCurrentTime();
    qe.executeTree(opt, result);
    long end_time = getCurrentTime();
    result.show();
    std::cout << "Time: " << end_time - begin_time << " us" << std::endl;
}

int main(int argc, char** argv) {
    string DBNAME = string(argv[1]);
    QueryExecutor qe(new LevelDBCatalog(DBNAME));
    // Prepare(DBNAME, qe);
    // Query("WTZ@ecnu.cn", 1, 100000, qe);
    // Query2("WTZ@ecnu.cn", 1, 100000, qe);
    Query3("DOG@ecnu.cn", 1, 200000, qe);
    
    // Query("UEL@ecnu.cn", 20000, 80000, qe);
    
    // Query2("NCC@ecnu.cn", 1, 200000, qe);
}