
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
    ANTLRInputStream instream(expression);
    SimpleSqlLexer lexer(&instream);
    CommonTokenStream tokens(&lexer);
    SimpleSqlParser parser(&tokens);

    parser.removeErrorListeners();
    parser.addErrorListener(new ParseErrorListener());
    auto ctx = parser.expression();
    
    ExpressionBase* expr = visitor.visitExpression(ctx).as<ExpressionBase*>();
    return expr;
}

OperatorBase* SQLParser::parseSelectQuery(const string& sql) {
    ANTLRInputStream instream(sql);
    SimpleSqlLexer lexer(&instream);
    CommonTokenStream tokens(&lexer);
    SimpleSqlParser parser(&tokens);

    parser.removeErrorListeners();
    parser.addErrorListener(new ParseErrorListener());
    auto ctx = parser.selectStatement();
    
    OperatorBase* opt = (visitor.visitSelectStatement(ctx)).as<OperatorBase*>();
    return opt;
}

OperatorBase* SQLParser::parseStatement(const string& sql) {
    ANTLRInputStream instream(sql);
    SimpleSqlLexer lexer(&instream);
    CommonTokenStream tokens(&lexer);
    SimpleSqlParser parser(&tokens);
    
    parser.removeErrorListeners();
    parser.addErrorListener(new ParseErrorListener());
    auto ctx = parser.singleStatement();

    OperatorBase* opt = (visitor.visitSingleStatement(ctx)).as<OperatorBase*>();
    return opt;
}