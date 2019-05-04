
// Here we parse the Ast to an Operator Tree

#pragma once

#include "parser/antlr/SimpleSqlBaseVisitor.h"

namespace simplesql {
namespace parser {

using namespace antlr;

class AstBuilder : public SimpleSqlBaseVisitor {

    virtual antlrcpp::Any visitBooleanValue(SimpleSqlParser::BooleanValueContext *ctx) override;

    virtual antlrcpp::Any visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *ctx) override;

};

}} // namespace simplesql::parser