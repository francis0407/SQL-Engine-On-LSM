
#include <string>

#include "parser/AstBuilder.h"
#include "expressions/AttributeReference.h"
#include "expressions/Arithmetic.h"
#include "expressions/Comparison.h"
#include "expressions/Literal.h"
#include "expressions/Logic.h"
#include "datatypes/ValueBase.h"
#include "catalog/RelationReference.h"

using antlrcpp::Any;
using namespace simplesql::expressions;
using namespace simplesql::datatypes;
using namespace simplesql::catalog;
using namespace simplesql::parser;
using std::string;

// Any

Any AstBuilder::visitLogicalNot(SimpleSqlParser::LogicalNotContext *ctx) {
    ExpressionBase* child = ctx->booleanExpression()->accept(this);
    ExpressionBase* value = new Not(child);
    Any result = value;
    return result;
}

Any AstBuilder::visitLogicalBinary(SimpleSqlParser::LogicalBinaryContext *ctx) {
    size_t opt = ctx->opt->getTokenIndex();
    ExpressionBase* left = ctx->left->accept(this);
    ExpressionBase* right = ctx->right->accept(this);
    ExpressionBase* value = nullptr;
    switch (opt) {
        case SimpleSqlParser::AND:
            value = new And(left, right);
            break;
        case SimpleSqlParser::OR:
            value = new Or(left, right);
            break;
    }
    Any result = value;
    return result;
}

Any AstBuilder::visitComparison(SimpleSqlParser::ComparisonContext *ctx) {
    size_t opt = ctx->comparisonOperator()->getStart()->getTokenIndex();
    ExpressionBase* left = ctx->left->accept(this);
    ExpressionBase* right = ctx->right->accept(this);
    ExpressionBase* value = nullptr;
    switch (opt) {
        case SimpleSqlParser::EQ:
            value = new EqualTo(left, right);
            break; 
        case SimpleSqlParser::NEQ:
            value = new Not(new EqualTo(left, right));
            break;
        case SimpleSqlParser::LT:
            value = new LessThan(left, right);
            break;
        case SimpleSqlParser::LTE:
            value = new LessThanOrEqual(left, right);
            break;
        case SimpleSqlParser::GT:
            value = new GreaterThan(left, right);
            break;
        case SimpleSqlParser::GTE:
            value = new GreaterThanOrEqual(left, right);
            break;
    }
    Any result = value;
    return result;
}

Any AstBuilder::visitArithmeticBinary(SimpleSqlParser::ArithmeticBinaryContext *ctx) {
    size_t opt = ctx->opt->getTokenIndex();
    ExpressionBase* left = ctx->left->accept(this);
    ExpressionBase* right = ctx->right->accept(this);
    ExpressionBase* value = nullptr;
    switch (opt) {
        case SimpleSqlParser::PLUS:
            value = new Add(left, right);
            break;
        case SimpleSqlParser::MINUS:
            value = new Minus(left, right);
            break;
        case SimpleSqlParser::ASTERISK:
            value = new Multiply(left, right);
            break;
        case SimpleSqlParser::SLASH:
            value = new Divide(left, right);
            break;
        case SimpleSqlParser::PERCENT:
            value = new Mod(left, right);
            break;
    }
    Any result = value;
    return result;
}

Any AstBuilder::visitArithmeticUnary(SimpleSqlParser::ArithmeticUnaryContext *ctx) {
    ExpressionBase* child = ctx->valueExpression()->accept(this);
    Any result = new UnaryMinus(child);
    return result;
}

Any AstBuilder::visitColumnReference(SimpleSqlParser::ColumnReferenceContext *ctx) {
    Any result = ctx->columnIdentifier()->accept(this);
    return result;
}

Any AstBuilder::visitConstantValue(SimpleSqlParser::ConstantValueContext *ctx) {
    Any result = ctx->constant()->accept(this);
    return result;
}

Any AstBuilder::visitParenthesizedExpression(SimpleSqlParser::ParenthesizedExpressionContext *ctx) {
    Any result = ctx->expression()->accept(this);
    return result;
}

Any AstBuilder::visitStringLiteral(SimpleSqlParser::StringLiteralContext *ctx) {
    string stringWithQuotation = ctx->getText();
    string value = stringWithQuotation.substr(1, stringWithQuotation.size() - 2);
    Any result = Literal::create(value);
    return result;
}

Any AstBuilder::visitBooleanLiteral(SimpleSqlParser::BooleanLiteralContext *ctx) {
    bool value = ctx->booleanValue()->TRUE_() != nullptr;
    Any result = Literal::create(value);
    return result;
}

Any AstBuilder::visitColumnWithTable(SimpleSqlParser::ColumnWithTableContext *ctx) {
    Any result = new AttributeReference(ctx->identifier()->getText(), ctx->tableIdentifier()->getText());
    return result;    
}
 
Any AstBuilder::visitColumnWithoutTable(SimpleSqlParser::ColumnWithoutTableContext *ctx) {
    Any result = new AttributeReference(ctx->identifier()->getText());
    return result;
}

Any AstBuilder::visitTableIdentifierDefault(SimpleSqlParser::TableIdentifierDefaultContext *ctx) {
    Any result = new RelationReference(ctx->tableName->getText());
    return result;
}

Any AstBuilder::visitTableAlias(SimpleSqlParser::TableAliasContext *ctx) {
    Any result = new RelationReference(ctx->tableName->getText(), ctx->alias->getText());
    return result;
}

Any AstBuilder::visitBooleanValue(SimpleSqlParser::BooleanValueContext *ctx) {
    bool value = false;
    if (ctx->FALSE_() == nullptr)
        value = true;
    Any result = Literal::create(value);
    return result;
}

Any AstBuilder::visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *ctx) {
    int value = std::stoi(ctx->INTEGER_LITERAL()->getText());
    if (ctx->MINUS() != nullptr)
        value = -value;
    Any result = Literal::create(value);
    return result;
}

Any AstBuilder::visitFloatLiteral(SimpleSqlParser::FloatLiteralContext *ctx) {
    float value = std::stof(ctx->FLOAT_LITERAL()->getText());
    if (ctx->MINUS() != nullptr)
        value = -value;
    Any result = Literal::create(value);
    return result;
}
