
#include <string>
#include <iostream>
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
        if (qe.executeSQL(string(cmd), result)) {
            result.show();
        } else {
            std::cout << "WTF??" << std::endl;
        }
        
    }

    return 0;
}