
#include <string>

#include "parser/AstBuilder.h"
#include "operators/SeqScan.h"
#include "operators/Join.h"
#include "operators/Project.h"
#include "operators/Filter.h"
#include "expressions/AttributeReference.h"
#include "expressions/Arithmetic.h"
#include "expressions/Comparison.h"
#include "expressions/Literal.h"
#include "expressions/Logic.h"
#include "datatypes/ValueBase.h"
#include "catalog/RelationReference.h"

using antlrcpp::Any;
using namespace simplesql::operators;
using namespace simplesql::expressions;
using namespace simplesql::datatypes;
using namespace simplesql::catalog;
using namespace simplesql::parser;
using std::string;

Any AstBuilder::visitSelectStatement(SimpleSqlParser::SelectStatementContext *ctx) {
    auto selectCtx = ctx->selectClause();
    auto whereCtx = ctx->whereCluse();
    OperatorBase* opt = ctx->fromCluse()->accept(this); 

    // construct filter
    if (whereCtx != nullptr) {
        ExpressionBase* condition = whereCtx->expression()->accept(this);
        opt = new Filter(condition, opt);
    }

    // construct project
    auto exprs = selectCtx->expression();
    size_t num = exprs.size();
    std::vector<ExpressionBase *> projectList;
    for (size_t i = 0;i < num; i++)
        projectList.push_back(exprs[i]->accept(this));
    opt = new Project(projectList, opt);

    Any result = opt;
    return result;
}

Any AstBuilder::visitFromCluse(SimpleSqlParser::FromCluseContext *ctx) {
    // Note that we only return one Operator here.
    // Multi-relations will use condition-less joins
    auto tables = ctx->tableIdentifier();
    size_t num = tables.size();
    
    // map the table identifiers to SeqScan operators
    std::vector<SeqScan* > scans;
    for (size_t i = 0; i < num; i++) {
        RelationReference* ref = tables[i]->accept(this);
        scans.push_back(new SeqScan(ref));
    }
     
    // fold-left the tables with join
    OperatorBase* finalOperator = scans[0];
    for (size_t i = 1; i < num; i++) 
        finalOperator = new InnerJoin(finalOperator, scans[i], JoinSide::BuildLeft);    

    Any result = finalOperator;
    return result;
}

Any AstBuilder::visitLogicalNot(SimpleSqlParser::LogicalNotContext *ctx) {
    ExpressionBase* child = ctx->booleanExpression()->accept(this);
    ExpressionBase* value = (ExpressionBase *)(new Not(child));
    Any result = value;
    return result;
}

Any AstBuilder::visitLogicalBinary(SimpleSqlParser::LogicalBinaryContext *ctx) {
    size_t opt = ctx->opt->getType();
    // ctx->opt->getChannel
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
    size_t opt = ctx->comparisonOperator()->getStart()->getType();
    ExpressionBase* left = ctx->left->accept(this);
    ExpressionBase* right = ctx->right->accept(this);
    ExpressionBase* value = nullptr;
    switch (opt) {
        case SimpleSqlParser::EQ:
            value = new EqualTo(left, right);
            break; 
        case SimpleSqlParser::NEQ:
        case SimpleSqlParser::NEQJ:
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
    size_t opt = ctx->opt->getType();
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

Any AstBuilder::visitExpression(SimpleSqlParser::ExpressionContext *ctx) {
    return ctx->booleanExpression()->accept(this);  
}

Any AstBuilder::visitArithmeticUnary(SimpleSqlParser::ArithmeticUnaryContext *ctx) {
    ExpressionBase* child = ctx->valueExpression()->accept(this);
    Any result = (ExpressionBase *)(new UnaryMinus(child));
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
    Any result = (ExpressionBase *)Literal::create(value);
    return result;
}

Any AstBuilder::visitBooleanLiteral(SimpleSqlParser::BooleanLiteralContext *ctx) {
    bool value = ctx->booleanValue()->TRUE_() != nullptr;  
    Any result = (ExpressionBase *)Literal::create(value);
    return result;
}

Any AstBuilder::visitColumnWithTable(SimpleSqlParser::ColumnWithTableContext *ctx) {
    Any result = (ExpressionBase *)(new AttributeReference(ctx->tableIdentifier()->getText(), ctx->identifier()->getText()));
    return result;    
}
 
Any AstBuilder::visitColumnWithoutTable(SimpleSqlParser::ColumnWithoutTableContext *ctx) {
    Any result = (ExpressionBase *)(new AttributeReference(ctx->identifier()->getText()));
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
    Any result = (ExpressionBase *)Literal::create(value);
    return result;
}

Any AstBuilder::visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *ctx) {
    int value = std::stoi(ctx->INTEGER_LITERAL()->getText());
    if (ctx->MINUS() != nullptr)
        value = -value;
    Any result = (ExpressionBase *)Literal::create(value);
    return result;
}

Any AstBuilder::visitFloatLiteral(SimpleSqlParser::FloatLiteralContext *ctx) {
    float value = std::stof(ctx->FLOAT_LITERAL()->getText());
    if (ctx->MINUS() != nullptr)
        value = -value;
    Any result = (ExpressionBase *)Literal::create(value);

    return result;
}
