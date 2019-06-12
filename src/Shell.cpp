
#include <string>
#include <iostream>
#include <time.h>
#include "execution/QueryExecutor.h"
#include "catalog/LevelDBCatalog.h"

using namespace simplesql;
using namespace simplesql::catalog;
using namespace simplesql::execution;
using std::string;

int main() {
    QueryExecutor qe(new LevelDBCatalog("DB"));
    while (true) {
        char cmd[1024];
        std::cout << "SQL > ";
        std::cin.getline(cmd, 1024);
        Relation result;
        if (string(cmd) == "EXIT;") return 0;
        clock_t startTime = clock();
        if (qe.executeSQL(string(cmd), result)) {
            clock_t executeTime = clock() - startTime;
            result.show();
            std::cout << "Time: " << executeTime << "ms" << std::endl;
        } else {
            std::cout << "WTF??" << std::endl;
        }
        
    }

    return 0;
}