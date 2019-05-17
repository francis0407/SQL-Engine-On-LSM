
#include <iostream>

#include "parser/SQLParser.h"
#include "parser/ParseException.h"
#include "parser/antlr/SimpleSqlLexer.h"
#include "parser/antlr/SimpleSqlParser.h"


using namespace simplesql::expressions;
using namespace simplesql::operators;
using namespace simplesql::parser;
using namespace antlr4;

using std::string;


SQLParser::SQLParser() {

}

ExpressionBase* SQLParser::parseExpression(const string& expression) {
    try {
        ANTLRInputStream instream(expression);
        SimpleSqlLexer lexer(&instream);
        CommonTokenStream tokens(&lexer);
        SimpleSqlParser parser(&tokens);

        auto ctx = parser.expression();
        
        ExpressionBase* expr = visitor.visitExpression(ctx).as<ExpressionBase*>();
        return expr;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        throw ParseException();
    }
}

OperatorBase* SQLParser::parseSelectQuery(const string& sql) {
    try {
        ANTLRInputStream instream(sql);
        SimpleSqlLexer lexer(&instream);
        CommonTokenStream tokens(&lexer);
        SimpleSqlParser parser(&tokens);

        auto ctx = parser.selectStatement();
        
        OperatorBase* opt = (visitor.visitSelectStatement(ctx)).as<OperatorBase*>();
        return opt;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        throw ParseException();
    }
}

OperatorBase* SQLParser::parseStatement(const string& sql) {
    try {
        ANTLRInputStream instream(sql);
        SimpleSqlLexer lexer(&instream);
        CommonTokenStream tokens(&lexer);
        SimpleSqlParser parser(&tokens);

        auto ctx = parser.singleStatement();
        
        OperatorBase* opt = (visitor.visitSingleStatement(ctx)).as<OperatorBase*>();
        return opt;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        throw ParseException();
    }
}