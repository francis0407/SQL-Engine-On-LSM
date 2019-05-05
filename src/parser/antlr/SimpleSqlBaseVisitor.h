
// Generated from /home/francis/File/Code/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SimpleSqlVisitor.h"


namespace simplesql { namespace parser { namespace antlr {

/**
 * This class provides an empty implementation of SimpleSqlVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SimpleSqlBaseVisitor : public SimpleSqlVisitor {
public:

  virtual antlrcpp::Any visitSingleStatement(SimpleSqlParser::SingleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateTableStatement(SimpleSqlParser::CreateTableStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteValueStatement(SimpleSqlParser::DeleteValueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertValueStatement(SimpleSqlParser::InsertValueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQueryStatement(SimpleSqlParser::QueryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreateStatement(SimpleSqlParser::CreateStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndexClause(SimpleSqlParser::IndexClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeleteStatement(SimpleSqlParser::DeleteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsertStatement(SimpleSqlParser::InsertStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectStatement(SimpleSqlParser::SelectStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectClause(SimpleSqlParser::SelectClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFromCluse(SimpleSqlParser::FromCluseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhereCluse(SimpleSqlParser::WhereCluseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(SimpleSqlParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalNot(SimpleSqlParser::LogicalNotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanExpressionDefaule(SimpleSqlParser::BooleanExpressionDefauleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalBinary(SimpleSqlParser::LogicalBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValueExpressionDefault(SimpleSqlParser::ValueExpressionDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparison(SimpleSqlParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticBinary(SimpleSqlParser::ArithmeticBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticUnary(SimpleSqlParser::ArithmeticUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnReference(SimpleSqlParser::ColumnReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstantValue(SimpleSqlParser::ConstantValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenthesizedExpression(SimpleSqlParser::ParenthesizedExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(SimpleSqlParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberLiteral(SimpleSqlParser::NumberLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(SimpleSqlParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDataType(SimpleSqlParser::DataTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnWithTable(SimpleSqlParser::ColumnWithTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitColumnWithoutTable(SimpleSqlParser::ColumnWithoutTableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableIdentifierDefault(SimpleSqlParser::TableIdentifierDefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTableAlias(SimpleSqlParser::TableAliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(SimpleSqlParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperator(SimpleSqlParser::ComparisonOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateOperator(SimpleSqlParser::PredicateOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanValue(SimpleSqlParser::BooleanValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(SimpleSqlParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

}}}  // namespace simplesql::parser::antlr
