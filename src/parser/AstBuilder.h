
// Here we parse the Ast to an Operator Tree

#pragma once

#include "parser/antlr/SimpleSqlBaseVisitor.h"

namespace simplesql {
namespace parser {

using namespace simplesql::parser::antlr;

class AstBuilder : public SimpleSqlBaseVisitor {
public:
    virtual antlrcpp::Any visitLogicalNot(SimpleSqlParser::LogicalNotContext *ctx) override;
    
    virtual antlrcpp::Any visitLogicalBinary(SimpleSqlParser::LogicalBinaryContext *ctx) override;
    
    virtual antlrcpp::Any visitComparison(SimpleSqlParser::ComparisonContext *ctx) override;

    virtual antlrcpp::Any visitArithmeticBinary(SimpleSqlParser::ArithmeticBinaryContext *ctx) override;
    
    virtual antlrcpp::Any visitArithmeticUnary(SimpleSqlParser::ArithmeticUnaryContext *ctx) override;
    
    virtual antlrcpp::Any visitColumnReference(SimpleSqlParser::ColumnReferenceContext *ctx) override;

    virtual antlrcpp::Any visitConstantValue(SimpleSqlParser::ConstantValueContext *ctx) override;

    virtual antlrcpp::Any visitParenthesizedExpression(SimpleSqlParser::ParenthesizedExpressionContext *ctx) override;

    virtual antlrcpp::Any visitStringLiteral(SimpleSqlParser::StringLiteralContext *ctx) override;

    virtual antlrcpp::Any visitBooleanLiteral(SimpleSqlParser::BooleanLiteralContext *ctx) override;
    
    virtual antlrcpp::Any visitColumnWithTable(SimpleSqlParser::ColumnWithTableContext *ctx) override;

    virtual antlrcpp::Any visitColumnWithoutTable(SimpleSqlParser::ColumnWithoutTableContext *ctx) override;

    virtual antlrcpp::Any visitTableIdentifierDefault(SimpleSqlParser::TableIdentifierDefaultContext *ctx) override;

    virtual antlrcpp::Any visitTableAlias(SimpleSqlParser::TableAliasContext *ctx) override; 

    virtual antlrcpp::Any visitBooleanValue(SimpleSqlParser::BooleanValueContext *ctx) override;

    virtual antlrcpp::Any visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *ctx) override;

    virtual antlrcpp::Any visitFloatLiteral(SimpleSqlParser::FloatLiteralContext *ctx) override;
};

}} // namespace simplesql::parser