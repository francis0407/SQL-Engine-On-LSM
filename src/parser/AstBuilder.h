
// Here we parse the Ast to an Operator Tree

#pragma once

#include "parser/antlr/SimpleSqlBaseVisitor.h"

namespace simplesql {
namespace parser {

using namespace antlr;

class AstBuilder : public SimpleSqlBaseVisitor {

    virtual antlrcpp::Any visitColumnWithTable(SimpleSqlParser::ColumnWithTableContext *ctx) override;

    virtual antlrcpp::Any visitColumnWithoutTable(SimpleSqlParser::ColumnWithoutTableContext *ctx) override;

    virtual antlrcpp::Any visitTableIdentifierDefault(SimpleSqlParser::TableIdentifierDefaultContext *ctx) override;

    virtual antlrcpp::Any visitTableAlias(SimpleSqlParser::TableAliasContext *ctx) override; 

    virtual antlrcpp::Any visitBooleanValue(SimpleSqlParser::BooleanValueContext *ctx) override;

    virtual antlrcpp::Any visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *ctx) override;

    virtual antlrcpp::Any visitFloatLiteral(SimpleSqlParser::FloatLiteralContext *ctx) override;
};

}} // namespace simplesql::parser