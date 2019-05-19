
// Generated from /home/francis/Git/francis/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace simplesql { namespace parser { namespace antlr {


class  SimpleSqlParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, SELECT = 6, FROM = 7, 
    WHERE = 8, INSERT = 9, INTO = 10, VALUES = 11, DELETE = 12, CREATE = 13, 
    COPY = 14, DELIMITER = 15, CSV = 16, HEADER = 17, TABLE = 18, TABLES = 19, 
    SHOW = 20, SCHEMA = 21, INDEX = 22, ON = 23, AS = 24, OR = 25, AND = 26, 
    NOT = 27, TRUE_ = 28, FALSE_ = 29, EQ = 30, NEQ = 31, NEQJ = 32, LT = 33, 
    LTE = 34, GT = 35, GTE = 36, PLUS = 37, MINUS = 38, ASTERISK = 39, SLASH = 40, 
    PERCENT = 41, STRING = 42, FLOAT_LITERAL = 43, INTEGER_LITERAL = 44, 
    IDENTIFIER = 45, WS = 46
  };

  enum {
    RuleSingleStatement = 0, RuleStatement = 1, RuleShowSchema = 2, RuleShowTable = 3, 
    RuleCreateStatement = 4, RuleIndexClause = 5, RuleDeleteStatement = 6, 
    RuleInsertStatement = 7, RuleCopyStatement = 8, RuleSelectStatement = 9, 
    RuleSelectClause = 10, RuleFromCluse = 11, RuleWhereCluse = 12, RuleExpressionStruct = 13, 
    RuleExpression = 14, RuleBooleanExpression = 15, RuleValueExpression = 16, 
    RulePrimaryExpression = 17, RuleConstant = 18, RuleDataType = 19, RuleColumnIdentifier = 20, 
    RuleTableIdentifier = 21, RuleIdentifier = 22, RuleComparisonOperator = 23, 
    RulePredicateOperator = 24, RuleBooleanValue = 25, RuleNumber = 26
  };

  SimpleSqlParser(antlr4::TokenStream *input);
  ~SimpleSqlParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class SingleStatementContext;
  class StatementContext;
  class ShowSchemaContext;
  class ShowTableContext;
  class CreateStatementContext;
  class IndexClauseContext;
  class DeleteStatementContext;
  class InsertStatementContext;
  class CopyStatementContext;
  class SelectStatementContext;
  class SelectClauseContext;
  class FromCluseContext;
  class WhereCluseContext;
  class ExpressionStructContext;
  class ExpressionContext;
  class BooleanExpressionContext;
  class ValueExpressionContext;
  class PrimaryExpressionContext;
  class ConstantContext;
  class DataTypeContext;
  class ColumnIdentifierContext;
  class TableIdentifierContext;
  class IdentifierContext;
  class ComparisonOperatorContext;
  class PredicateOperatorContext;
  class BooleanValueContext;
  class NumberContext; 

  class  SingleStatementContext : public antlr4::ParserRuleContext {
  public:
    SingleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleStatementContext* singleStatement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InsertValueStatementContext : public StatementContext {
  public:
    InsertValueStatementContext(StatementContext *ctx);

    InsertStatementContext *insertStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeleteValueStatementContext : public StatementContext {
  public:
    DeleteValueStatementContext(StatementContext *ctx);

    DeleteStatementContext *deleteStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowSchemaStatementContext : public StatementContext {
  public:
    ShowSchemaStatementContext(StatementContext *ctx);

    ShowSchemaContext *showSchema();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateTableStatementContext : public StatementContext {
  public:
    CreateTableStatementContext(StatementContext *ctx);

    CreateStatementContext *createStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QueryStatementContext : public StatementContext {
  public:
    QueryStatementContext(StatementContext *ctx);

    SelectStatementContext *selectStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowTableStatementContext : public StatementContext {
  public:
    ShowTableStatementContext(StatementContext *ctx);

    ShowTableContext *showTable();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CopyFileStatementContext : public StatementContext {
  public:
    CopyFileStatementContext(StatementContext *ctx);

    CopyStatementContext *copyStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  ShowSchemaContext : public antlr4::ParserRuleContext {
  public:
    SimpleSqlParser::TableIdentifierContext *tableName = nullptr;;
    ShowSchemaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *SCHEMA();
    antlr4::tree::TerminalNode *FROM();
    TableIdentifierContext *tableIdentifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowSchemaContext* showSchema();

  class  ShowTableContext : public antlr4::ParserRuleContext {
  public:
    ShowTableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLES();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShowTableContext* showTable();

  class  CreateStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleSqlParser::TableIdentifierContext *tablenName = nullptr;;
    CreateStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<DataTypeContext *> dataType();
    DataTypeContext* dataType(size_t i);
    TableIdentifierContext *tableIdentifier();
    IndexClauseContext *indexClause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateStatementContext* createStatement();

  class  IndexClauseContext : public antlr4::ParserRuleContext {
  public:
    IndexClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INDEX();
    antlr4::tree::TerminalNode *ON();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndexClauseContext* indexClause();

  class  DeleteStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleSqlParser::TableIdentifierContext *tablenName = nullptr;;
    DeleteStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *FROM();
    TableIdentifierContext *tableIdentifier();
    WhereCluseContext *whereCluse();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeleteStatementContext* deleteStatement();

  class  InsertStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleSqlParser::TableIdentifierContext *tableName = nullptr;;
    InsertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *VALUES();
    std::vector<ExpressionStructContext *> expressionStruct();
    ExpressionStructContext* expressionStruct(size_t i);
    TableIdentifierContext *tableIdentifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertStatementContext* insertStatement();

  class  CopyStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleSqlParser::TableIdentifierContext *tableName = nullptr;;
    antlr4::Token *fileName = nullptr;;
    antlr4::Token *delimiter = nullptr;;
    CopyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COPY();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *DELIMITER();
    antlr4::tree::TerminalNode *CSV();
    TableIdentifierContext *tableIdentifier();
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    antlr4::tree::TerminalNode *HEADER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CopyStatementContext* copyStatement();

  class  SelectStatementContext : public antlr4::ParserRuleContext {
  public:
    SelectStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectClauseContext *selectClause();
    FromCluseContext *fromCluse();
    WhereCluseContext *whereCluse();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStatementContext* selectStatement();

  class  SelectClauseContext : public antlr4::ParserRuleContext {
  public:
    SelectClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectClauseContext* selectClause();

  class  FromCluseContext : public antlr4::ParserRuleContext {
  public:
    FromCluseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    std::vector<TableIdentifierContext *> tableIdentifier();
    TableIdentifierContext* tableIdentifier(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromCluseContext* fromCluse();

  class  WhereCluseContext : public antlr4::ParserRuleContext {
  public:
    WhereCluseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereCluseContext* whereCluse();

  class  ExpressionStructContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStructContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStructContext* expressionStruct();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BooleanExpressionContext *booleanExpression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  BooleanExpressionContext : public antlr4::ParserRuleContext {
  public:
    BooleanExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BooleanExpressionContext() = default;
    void copyFrom(BooleanExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LogicalNotContext : public BooleanExpressionContext {
  public:
    LogicalNotContext(BooleanExpressionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    BooleanExpressionContext *booleanExpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExpressionDefauleContext : public BooleanExpressionContext {
  public:
    BooleanExpressionDefauleContext(BooleanExpressionContext *ctx);

    ValueExpressionContext *valueExpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogicalBinaryContext : public BooleanExpressionContext {
  public:
    LogicalBinaryContext(BooleanExpressionContext *ctx);

    SimpleSqlParser::BooleanExpressionContext *left = nullptr;
    antlr4::Token *opt = nullptr;
    SimpleSqlParser::BooleanExpressionContext *right = nullptr;
    std::vector<BooleanExpressionContext *> booleanExpression();
    BooleanExpressionContext* booleanExpression(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BooleanExpressionContext* booleanExpression();
  BooleanExpressionContext* booleanExpression(int precedence);
  class  ValueExpressionContext : public antlr4::ParserRuleContext {
  public:
    ValueExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueExpressionContext() = default;
    void copyFrom(ValueExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValueExpressionDefaultContext : public ValueExpressionContext {
  public:
    ValueExpressionDefaultContext(ValueExpressionContext *ctx);

    PrimaryExpressionContext *primaryExpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ComparisonContext : public ValueExpressionContext {
  public:
    ComparisonContext(ValueExpressionContext *ctx);

    SimpleSqlParser::ValueExpressionContext *left = nullptr;
    SimpleSqlParser::ValueExpressionContext *right = nullptr;
    ComparisonOperatorContext *comparisonOperator();
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticBinaryContext : public ValueExpressionContext {
  public:
    ArithmeticBinaryContext(ValueExpressionContext *ctx);

    SimpleSqlParser::ValueExpressionContext *left = nullptr;
    antlr4::Token *opt = nullptr;
    SimpleSqlParser::ValueExpressionContext *right = nullptr;
    std::vector<ValueExpressionContext *> valueExpression();
    ValueExpressionContext* valueExpression(size_t i);
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticUnaryContext : public ValueExpressionContext {
  public:
    ArithmeticUnaryContext(ValueExpressionContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    ValueExpressionContext *valueExpression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueExpressionContext* valueExpression();
  ValueExpressionContext* valueExpression(int precedence);
  class  PrimaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryExpressionContext() = default;
    void copyFrom(PrimaryExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnReferenceContext : public PrimaryExpressionContext {
  public:
    ColumnReferenceContext(PrimaryExpressionContext *ctx);

    ColumnIdentifierContext *columnIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesizedExpressionContext : public PrimaryExpressionContext {
  public:
    ParenthesizedExpressionContext(PrimaryExpressionContext *ctx);

    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstantValueContext : public PrimaryExpressionContext {
  public:
    ConstantValueContext(PrimaryExpressionContext *ctx);

    ConstantContext *constant();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryExpressionContext* primaryExpression();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConstantContext() = default;
    void copyFrom(ConstantContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StringLiteralContext : public ConstantContext {
  public:
    StringLiteralContext(ConstantContext *ctx);

    antlr4::tree::TerminalNode *STRING();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanLiteralContext : public ConstantContext {
  public:
    BooleanLiteralContext(ConstantContext *ctx);

    BooleanValueContext *booleanValue();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberLiteralContext : public ConstantContext {
  public:
    NumberLiteralContext(ConstantContext *ctx);

    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConstantContext* constant();

  class  DataTypeContext : public antlr4::ParserRuleContext {
  public:
    DataTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DataTypeContext* dataType();

  class  ColumnIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ColumnIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ColumnIdentifierContext() = default;
    void copyFrom(ColumnIdentifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnWithoutTableContext : public ColumnIdentifierContext {
  public:
    ColumnWithoutTableContext(ColumnIdentifierContext *ctx);

    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnWithTableContext : public ColumnIdentifierContext {
  public:
    ColumnWithTableContext(ColumnIdentifierContext *ctx);

    TableIdentifierContext *tableIdentifier();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ColumnIdentifierContext* columnIdentifier();

  class  TableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableIdentifierContext() = default;
    void copyFrom(TableIdentifierContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableAliasContext : public TableIdentifierContext {
  public:
    TableAliasContext(TableIdentifierContext *ctx);

    SimpleSqlParser::IdentifierContext *tableName = nullptr;
    SimpleSqlParser::IdentifierContext *alias = nullptr;
    antlr4::tree::TerminalNode *AS();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableIdentifierDefaultContext : public TableIdentifierContext {
  public:
    TableIdentifierDefaultContext(TableIdentifierContext *ctx);

    SimpleSqlParser::IdentifierContext *tableName = nullptr;
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TableIdentifierContext* tableIdentifier();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *NEQJ();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTE();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  PredicateOperatorContext : public antlr4::ParserRuleContext {
  public:
    PredicateOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateOperatorContext* predicateOperator();

  class  BooleanValueContext : public antlr4::ParserRuleContext {
  public:
    BooleanValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE_();
    antlr4::tree::TerminalNode *FALSE_();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanValueContext* booleanValue();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IntegerLiteralContext : public NumberContext {
  public:
    IntegerLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FloatLiteralContext : public NumberContext {
  public:
    FloatLiteralContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *FLOAT_LITERAL();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex);
  bool valueExpressionSempred(ValueExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}}}  // namespace simplesql::parser::antlr
