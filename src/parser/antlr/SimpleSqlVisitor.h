
// Generated from /home/francis/File/Code/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SimpleSqlParser.h"


namespace simplesql { namespace parser { namespace antlr {

/**
 * This class defines an abstract visitor for a parse tree 
 * produced by SimpleSqlParser.
 */
class  SimpleSqlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SimpleSqlParser.
   */
    virtual antlrcpp::Any visitSingleStatement(SimpleSqlParser::SingleStatementContext *context) = 0;

    virtual antlrcpp::Any visitCreateTableStatement(SimpleSqlParser::CreateTableStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeleteValueStatement(SimpleSqlParser::DeleteValueStatementContext *context) = 0;

    virtual antlrcpp::Any visitInsertValueStatement(SimpleSqlParser::InsertValueStatementContext *context) = 0;

    virtual antlrcpp::Any visitQueryStatement(SimpleSqlParser::QueryStatementContext *context) = 0;

    virtual antlrcpp::Any visitCreateStatement(SimpleSqlParser::CreateStatementContext *context) = 0;

    virtual antlrcpp::Any visitIndexClause(SimpleSqlParser::IndexClauseContext *context) = 0;

    virtual antlrcpp::Any visitDeleteStatement(SimpleSqlParser::DeleteStatementContext *context) = 0;

    virtual antlrcpp::Any visitInsertStatement(SimpleSqlParser::InsertStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectStatement(SimpleSqlParser::SelectStatementContext *context) = 0;

    virtual antlrcpp::Any visitSelectClause(SimpleSqlParser::SelectClauseContext *context) = 0;

    virtual antlrcpp::Any visitFromCluse(SimpleSqlParser::FromCluseContext *context) = 0;

    virtual antlrcpp::Any visitWhereCluse(SimpleSqlParser::WhereCluseContext *context) = 0;

    virtual antlrcpp::Any visitExpression(SimpleSqlParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLogicalNot(SimpleSqlParser::LogicalNotContext *context) = 0;

    virtual antlrcpp::Any visitBooleanExpressionDefaule(SimpleSqlParser::BooleanExpressionDefauleContext *context) = 0;

    virtual antlrcpp::Any visitLogicalBinary(SimpleSqlParser::LogicalBinaryContext *context) = 0;

    virtual antlrcpp::Any visitValueExpressionDefault(SimpleSqlParser::ValueExpressionDefaultContext *context) = 0;

    virtual antlrcpp::Any visitComparison(SimpleSqlParser::ComparisonContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticBinary(SimpleSqlParser::ArithmeticBinaryContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticUnary(SimpleSqlParser::ArithmeticUnaryContext *context) = 0;

    virtual antlrcpp::Any visitColumnReference(SimpleSqlParser::ColumnReferenceContext *context) = 0;

    virtual antlrcpp::Any visitConstantValue(SimpleSqlParser::ConstantValueContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedExpression(SimpleSqlParser::ParenthesizedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(SimpleSqlParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitNumberLiteral(SimpleSqlParser::NumberLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(SimpleSqlParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitDataType(SimpleSqlParser::DataTypeContext *context) = 0;

    virtual antlrcpp::Any visitColumnWithTable(SimpleSqlParser::ColumnWithTableContext *context) = 0;

    virtual antlrcpp::Any visitColumnWithoutTable(SimpleSqlParser::ColumnWithoutTableContext *context) = 0;

    virtual antlrcpp::Any visitTableIdentifierDefault(SimpleSqlParser::TableIdentifierDefaultContext *context) = 0;

    virtual antlrcpp::Any visitTableAlias(SimpleSqlParser::TableAliasContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(SimpleSqlParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(SimpleSqlParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPredicateOperator(SimpleSqlParser::PredicateOperatorContext *context) = 0;

    virtual antlrcpp::Any visitBooleanValue(SimpleSqlParser::BooleanValueContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(SimpleSqlParser::FloatLiteralContext *context) = 0;


};

}}}  // namespace simplesql::parser::antlr
