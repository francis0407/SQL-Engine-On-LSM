
// Here we parse the Ast to an Operator Tree

#pragma once

#include "parser/antlr/SimpleSqlBaseVisitor.h"
#include "operators/Operator.h"

namespace simplesql {
namespace parser {

using namespace simplesql::parser::antlr;
using namespace simplesql::operators;
// antlrcpp::Any cannot cast the derived class to its base class,
// so that we have to explicitily cast all expressions to ExpressionBase*

class AstBuilder : public SimpleSqlBaseVisitor {
public: 
    virtual antlrcpp::Any visitSingleStatement(SimpleSqlParser::SingleStatementContext *ctx) override {
        OperatorBase* opt = ctx->statement()->accept(this);
        antlrcpp::Any result = opt;
        return result;
    }

    virtual antlrcpp::Any visitCreateTableStatement(SimpleSqlParser::CreateTableStatementContext *ctx) override {
        OperatorBase* opt = ctx->createStatement()->accept(this);
        antlrcpp::Any result = opt;
        return result;
    }

    virtual antlrcpp::Any visitDeleteValueStatement(SimpleSqlParser::DeleteValueStatementContext *ctx) override {
        OperatorBase* opt = ctx->deleteStatement()->accept(this);
        antlrcpp::Any result = opt;
        return result;
    }

    virtual antlrcpp::Any visitInsertValueStatement(SimpleSqlParser::InsertValueStatementContext *ctx) override {
        OperatorBase* opt = ctx->insertStatement()->accept(this);
        antlrcpp::Any result = opt;
        return result;
    }

    virtual antlrcpp::Any visitQueryStatement(SimpleSqlParser::QueryStatementContext *ctx) override {
        OperatorBase* opt = ctx->selectStatement()->accept(this);
        antlrcpp::Any result = opt;
        return result;
    }

    virtual antlrcpp::Any visitCopyFileStatement(SimpleSqlParser::CopyFileStatementContext *ctx) override {
        OperatorBase* opt = ctx->copyStatement()->accept(this);
        antlrcpp::Any result = opt;
        return result;
    }
    virtual antlrcpp::Any visitInsertStatement(SimpleSqlParser::InsertStatementContext *ctx) override;
    
    virtual antlrcpp::Any visitCopyStatement(SimpleSqlParser::CopyStatementContext *ctx) override;
 
    virtual antlrcpp::Any visitCreateStatement(SimpleSqlParser::CreateStatementContext *ctx) override;

    virtual antlrcpp::Any visitSelectStatement(SimpleSqlParser::SelectStatementContext *ctx) override;

    virtual antlrcpp::Any visitFromCluse(SimpleSqlParser::FromCluseContext *ctx) override;

    virtual antlrcpp::Any visitExpressionStruct(SimpleSqlParser::ExpressionStructContext *ctx) override;

    virtual antlrcpp::Any visitExpression(SimpleSqlParser::ExpressionContext *ctx) override;

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
private:
    std::string removeQuotation(const std::string& input);
};

}} // namespace simplesql::parser