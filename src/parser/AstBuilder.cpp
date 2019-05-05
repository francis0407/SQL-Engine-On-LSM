
#include <string>

#include "parser/AstBuilder.h"
#include "expressions/AttributeReference.h"
#include "expressions/Literal.h"
#include "datatypes/ValueBase.h"
#include "catalog/RelationReference.h"

namespace simplesql {
namespace parser {

using antlrcpp::Any;
using namespace simplesql::expressions;
using namespace simplesql::datatypes;
using namespace simplesql::catalog;
using std::string;

antlrcpp::Any visitColumnWithTable(SimpleSqlParser::ColumnWithTableContext *ctx) {
    Any result = new AttributeReference(ctx->identifier()->getText(), ctx->tableIdentifier()->getText());
    return result;    
}

antlrcpp::Any visitColumnWithoutTable(SimpleSqlParser::ColumnWithoutTableContext *ctx) {
    Any result = new AttributeReference(ctx->identifier()->getText());
    return result;
}

antlrcpp::Any visitTableIdentifierDefault(SimpleSqlParser::TableIdentifierDefaultContext *ctx) {
    Any result = new RelationReference(ctx->tableName->getText());
    return result;
}

antlrcpp::Any visitTableAlias(SimpleSqlParser::TableAliasContext *ctx) {
    Any result = new RelationReference(ctx->tableName->getText(), ctx->alias->getText());
    return result;
}

antlrcpp::Any AstBuilder::visitBooleanValue(SimpleSqlParser::BooleanValueContext *ctx) {
    bool value = false;
    if (ctx->FALSE_() == nullptr)
        value = true;
    Any result = Literal::create(value);
    return result;
}

antlrcpp::Any AstBuilder::visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *ctx) {
    int value = std::stoi(ctx->INTEGER_LITERAL()->getText());
    if (ctx->MINUS() != nullptr)
        value = -value;
    Any result = Literal::create(value);
    return result;
}

antlrcpp::Any visitFloatLiteral(SimpleSqlParser::FloatLiteralContext *ctx) {
    float value = std::stof(ctx->FLOAT_LITERAL()->getText());
    if (ctx->MINUS() != nullptr)
        value = -value;
    Any result = Literal::create(value);
    return result;
}

}} // namespace simplesql::parser