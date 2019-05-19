
// Generated from /home/francis/Git/francis/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.2


#include "SimpleSqlVisitor.h"

#include "SimpleSqlParser.h"


using namespace antlrcpp;
using namespace simplesql::parser::antlr;
using namespace antlr4;

SimpleSqlParser::SimpleSqlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SimpleSqlParser::~SimpleSqlParser() {
  delete _interpreter;
}

std::string SimpleSqlParser::getGrammarFileName() const {
  return "SimpleSql.g4";
}

const std::vector<std::string>& SimpleSqlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SimpleSqlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- SingleStatementContext ------------------------------------------------------------------

SimpleSqlParser::SingleStatementContext::SingleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::StatementContext* SimpleSqlParser::SingleStatementContext::statement() {
  return getRuleContext<SimpleSqlParser::StatementContext>(0);
}

tree::TerminalNode* SimpleSqlParser::SingleStatementContext::EOF() {
  return getToken(SimpleSqlParser::EOF, 0);
}


size_t SimpleSqlParser::SingleStatementContext::getRuleIndex() const {
  return SimpleSqlParser::RuleSingleStatement;
}


antlrcpp::Any SimpleSqlParser::SingleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitSingleStatement(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::SingleStatementContext* SimpleSqlParser::singleStatement() {
  SingleStatementContext *_localctx = _tracker.createInstance<SingleStatementContext>(_ctx, getState());
  enterRule(_localctx, 0, SimpleSqlParser::RuleSingleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    statement();
    setState(55);
    match(SimpleSqlParser::T__0);
    setState(56);
    match(SimpleSqlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SimpleSqlParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSqlParser::StatementContext::getRuleIndex() const {
  return SimpleSqlParser::RuleStatement;
}

void SimpleSqlParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InsertValueStatementContext ------------------------------------------------------------------

SimpleSqlParser::InsertStatementContext* SimpleSqlParser::InsertValueStatementContext::insertStatement() {
  return getRuleContext<SimpleSqlParser::InsertStatementContext>(0);
}

SimpleSqlParser::InsertValueStatementContext::InsertValueStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::InsertValueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitInsertValueStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeleteValueStatementContext ------------------------------------------------------------------

SimpleSqlParser::DeleteStatementContext* SimpleSqlParser::DeleteValueStatementContext::deleteStatement() {
  return getRuleContext<SimpleSqlParser::DeleteStatementContext>(0);
}

SimpleSqlParser::DeleteValueStatementContext::DeleteValueStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::DeleteValueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitDeleteValueStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShowSchemaStatementContext ------------------------------------------------------------------

SimpleSqlParser::ShowSchemaContext* SimpleSqlParser::ShowSchemaStatementContext::showSchema() {
  return getRuleContext<SimpleSqlParser::ShowSchemaContext>(0);
}

SimpleSqlParser::ShowSchemaStatementContext::ShowSchemaStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ShowSchemaStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitShowSchemaStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CreateTableStatementContext ------------------------------------------------------------------

SimpleSqlParser::CreateStatementContext* SimpleSqlParser::CreateTableStatementContext::createStatement() {
  return getRuleContext<SimpleSqlParser::CreateStatementContext>(0);
}

SimpleSqlParser::CreateTableStatementContext::CreateTableStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::CreateTableStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitCreateTableStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- QueryStatementContext ------------------------------------------------------------------

SimpleSqlParser::SelectStatementContext* SimpleSqlParser::QueryStatementContext::selectStatement() {
  return getRuleContext<SimpleSqlParser::SelectStatementContext>(0);
}

SimpleSqlParser::QueryStatementContext::QueryStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::QueryStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitQueryStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShowTableStatementContext ------------------------------------------------------------------

SimpleSqlParser::ShowTableContext* SimpleSqlParser::ShowTableStatementContext::showTable() {
  return getRuleContext<SimpleSqlParser::ShowTableContext>(0);
}

SimpleSqlParser::ShowTableStatementContext::ShowTableStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ShowTableStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitShowTableStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CopyFileStatementContext ------------------------------------------------------------------

SimpleSqlParser::CopyStatementContext* SimpleSqlParser::CopyFileStatementContext::copyStatement() {
  return getRuleContext<SimpleSqlParser::CopyStatementContext>(0);
}

SimpleSqlParser::CopyFileStatementContext::CopyFileStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::CopyFileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitCopyFileStatement(this);
  else
    return visitor->visitChildren(this);
}
SimpleSqlParser::StatementContext* SimpleSqlParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, SimpleSqlParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(65);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::ShowSchemaStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(58);
      showSchema();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::ShowTableStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(59);
      showTable();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::CreateTableStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(60);
      createStatement();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::DeleteValueStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(61);
      deleteStatement();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::InsertValueStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(62);
      insertStatement();
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::QueryStatementContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(63);
      selectStatement();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::CopyFileStatementContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(64);
      copyStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowSchemaContext ------------------------------------------------------------------

SimpleSqlParser::ShowSchemaContext::ShowSchemaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::ShowSchemaContext::SHOW() {
  return getToken(SimpleSqlParser::SHOW, 0);
}

tree::TerminalNode* SimpleSqlParser::ShowSchemaContext::SCHEMA() {
  return getToken(SimpleSqlParser::SCHEMA, 0);
}

tree::TerminalNode* SimpleSqlParser::ShowSchemaContext::FROM() {
  return getToken(SimpleSqlParser::FROM, 0);
}

SimpleSqlParser::TableIdentifierContext* SimpleSqlParser::ShowSchemaContext::tableIdentifier() {
  return getRuleContext<SimpleSqlParser::TableIdentifierContext>(0);
}


size_t SimpleSqlParser::ShowSchemaContext::getRuleIndex() const {
  return SimpleSqlParser::RuleShowSchema;
}


antlrcpp::Any SimpleSqlParser::ShowSchemaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitShowSchema(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::ShowSchemaContext* SimpleSqlParser::showSchema() {
  ShowSchemaContext *_localctx = _tracker.createInstance<ShowSchemaContext>(_ctx, getState());
  enterRule(_localctx, 4, SimpleSqlParser::RuleShowSchema);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(SimpleSqlParser::SHOW);
    setState(68);
    match(SimpleSqlParser::SCHEMA);
    setState(69);
    match(SimpleSqlParser::FROM);
    setState(70);
    dynamic_cast<ShowSchemaContext *>(_localctx)->tableName = tableIdentifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShowTableContext ------------------------------------------------------------------

SimpleSqlParser::ShowTableContext::ShowTableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::ShowTableContext::SHOW() {
  return getToken(SimpleSqlParser::SHOW, 0);
}

tree::TerminalNode* SimpleSqlParser::ShowTableContext::TABLES() {
  return getToken(SimpleSqlParser::TABLES, 0);
}


size_t SimpleSqlParser::ShowTableContext::getRuleIndex() const {
  return SimpleSqlParser::RuleShowTable;
}


antlrcpp::Any SimpleSqlParser::ShowTableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitShowTable(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::ShowTableContext* SimpleSqlParser::showTable() {
  ShowTableContext *_localctx = _tracker.createInstance<ShowTableContext>(_ctx, getState());
  enterRule(_localctx, 6, SimpleSqlParser::RuleShowTable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(SimpleSqlParser::SHOW);
    setState(73);
    match(SimpleSqlParser::TABLES);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateStatementContext ------------------------------------------------------------------

SimpleSqlParser::CreateStatementContext::CreateStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::CreateStatementContext::CREATE() {
  return getToken(SimpleSqlParser::CREATE, 0);
}

tree::TerminalNode* SimpleSqlParser::CreateStatementContext::TABLE() {
  return getToken(SimpleSqlParser::TABLE, 0);
}

std::vector<SimpleSqlParser::IdentifierContext *> SimpleSqlParser::CreateStatementContext::identifier() {
  return getRuleContexts<SimpleSqlParser::IdentifierContext>();
}

SimpleSqlParser::IdentifierContext* SimpleSqlParser::CreateStatementContext::identifier(size_t i) {
  return getRuleContext<SimpleSqlParser::IdentifierContext>(i);
}

std::vector<SimpleSqlParser::DataTypeContext *> SimpleSqlParser::CreateStatementContext::dataType() {
  return getRuleContexts<SimpleSqlParser::DataTypeContext>();
}

SimpleSqlParser::DataTypeContext* SimpleSqlParser::CreateStatementContext::dataType(size_t i) {
  return getRuleContext<SimpleSqlParser::DataTypeContext>(i);
}

SimpleSqlParser::TableIdentifierContext* SimpleSqlParser::CreateStatementContext::tableIdentifier() {
  return getRuleContext<SimpleSqlParser::TableIdentifierContext>(0);
}

SimpleSqlParser::IndexClauseContext* SimpleSqlParser::CreateStatementContext::indexClause() {
  return getRuleContext<SimpleSqlParser::IndexClauseContext>(0);
}


size_t SimpleSqlParser::CreateStatementContext::getRuleIndex() const {
  return SimpleSqlParser::RuleCreateStatement;
}


antlrcpp::Any SimpleSqlParser::CreateStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitCreateStatement(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::CreateStatementContext* SimpleSqlParser::createStatement() {
  CreateStatementContext *_localctx = _tracker.createInstance<CreateStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, SimpleSqlParser::RuleCreateStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(SimpleSqlParser::CREATE);
    setState(76);
    match(SimpleSqlParser::TABLE);
    setState(77);
    dynamic_cast<CreateStatementContext *>(_localctx)->tablenName = tableIdentifier();
    setState(78);
    match(SimpleSqlParser::T__1);
    setState(79);
    identifier();
    setState(80);
    dataType();
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__2) {
      setState(81);
      match(SimpleSqlParser::T__2);
      setState(82);
      identifier();
      setState(83);
      dataType();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
    match(SimpleSqlParser::T__3);
    setState(92);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::INDEX) {
      setState(91);
      indexClause();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexClauseContext ------------------------------------------------------------------

SimpleSqlParser::IndexClauseContext::IndexClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::IndexClauseContext::INDEX() {
  return getToken(SimpleSqlParser::INDEX, 0);
}

tree::TerminalNode* SimpleSqlParser::IndexClauseContext::ON() {
  return getToken(SimpleSqlParser::ON, 0);
}

std::vector<SimpleSqlParser::IdentifierContext *> SimpleSqlParser::IndexClauseContext::identifier() {
  return getRuleContexts<SimpleSqlParser::IdentifierContext>();
}

SimpleSqlParser::IdentifierContext* SimpleSqlParser::IndexClauseContext::identifier(size_t i) {
  return getRuleContext<SimpleSqlParser::IdentifierContext>(i);
}


size_t SimpleSqlParser::IndexClauseContext::getRuleIndex() const {
  return SimpleSqlParser::RuleIndexClause;
}


antlrcpp::Any SimpleSqlParser::IndexClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitIndexClause(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::IndexClauseContext* SimpleSqlParser::indexClause() {
  IndexClauseContext *_localctx = _tracker.createInstance<IndexClauseContext>(_ctx, getState());
  enterRule(_localctx, 10, SimpleSqlParser::RuleIndexClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(SimpleSqlParser::INDEX);
    setState(95);
    match(SimpleSqlParser::ON);
    setState(96);
    match(SimpleSqlParser::T__1);
    setState(97);
    identifier();
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__2) {
      setState(98);
      match(SimpleSqlParser::T__2);
      setState(99);
      identifier();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
    match(SimpleSqlParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteStatementContext ------------------------------------------------------------------

SimpleSqlParser::DeleteStatementContext::DeleteStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::DeleteStatementContext::DELETE() {
  return getToken(SimpleSqlParser::DELETE, 0);
}

tree::TerminalNode* SimpleSqlParser::DeleteStatementContext::FROM() {
  return getToken(SimpleSqlParser::FROM, 0);
}

SimpleSqlParser::TableIdentifierContext* SimpleSqlParser::DeleteStatementContext::tableIdentifier() {
  return getRuleContext<SimpleSqlParser::TableIdentifierContext>(0);
}

SimpleSqlParser::WhereCluseContext* SimpleSqlParser::DeleteStatementContext::whereCluse() {
  return getRuleContext<SimpleSqlParser::WhereCluseContext>(0);
}


size_t SimpleSqlParser::DeleteStatementContext::getRuleIndex() const {
  return SimpleSqlParser::RuleDeleteStatement;
}


antlrcpp::Any SimpleSqlParser::DeleteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitDeleteStatement(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::DeleteStatementContext* SimpleSqlParser::deleteStatement() {
  DeleteStatementContext *_localctx = _tracker.createInstance<DeleteStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, SimpleSqlParser::RuleDeleteStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(SimpleSqlParser::DELETE);
    setState(108);
    match(SimpleSqlParser::FROM);
    setState(109);
    dynamic_cast<DeleteStatementContext *>(_localctx)->tablenName = tableIdentifier();
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::WHERE) {
      setState(110);
      whereCluse();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InsertStatementContext ------------------------------------------------------------------

SimpleSqlParser::InsertStatementContext::InsertStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::InsertStatementContext::INSERT() {
  return getToken(SimpleSqlParser::INSERT, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStatementContext::INTO() {
  return getToken(SimpleSqlParser::INTO, 0);
}

tree::TerminalNode* SimpleSqlParser::InsertStatementContext::VALUES() {
  return getToken(SimpleSqlParser::VALUES, 0);
}

std::vector<SimpleSqlParser::ExpressionStructContext *> SimpleSqlParser::InsertStatementContext::expressionStruct() {
  return getRuleContexts<SimpleSqlParser::ExpressionStructContext>();
}

SimpleSqlParser::ExpressionStructContext* SimpleSqlParser::InsertStatementContext::expressionStruct(size_t i) {
  return getRuleContext<SimpleSqlParser::ExpressionStructContext>(i);
}

SimpleSqlParser::TableIdentifierContext* SimpleSqlParser::InsertStatementContext::tableIdentifier() {
  return getRuleContext<SimpleSqlParser::TableIdentifierContext>(0);
}


size_t SimpleSqlParser::InsertStatementContext::getRuleIndex() const {
  return SimpleSqlParser::RuleInsertStatement;
}


antlrcpp::Any SimpleSqlParser::InsertStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitInsertStatement(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::InsertStatementContext* SimpleSqlParser::insertStatement() {
  InsertStatementContext *_localctx = _tracker.createInstance<InsertStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, SimpleSqlParser::RuleInsertStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(SimpleSqlParser::INSERT);
    setState(114);
    match(SimpleSqlParser::INTO);
    setState(115);
    dynamic_cast<InsertStatementContext *>(_localctx)->tableName = tableIdentifier();
    setState(116);
    match(SimpleSqlParser::VALUES);
    setState(117);
    expressionStruct();
    setState(122);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__2) {
      setState(118);
      match(SimpleSqlParser::T__2);
      setState(119);
      expressionStruct();
      setState(124);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CopyStatementContext ------------------------------------------------------------------

SimpleSqlParser::CopyStatementContext::CopyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::CopyStatementContext::COPY() {
  return getToken(SimpleSqlParser::COPY, 0);
}

tree::TerminalNode* SimpleSqlParser::CopyStatementContext::FROM() {
  return getToken(SimpleSqlParser::FROM, 0);
}

tree::TerminalNode* SimpleSqlParser::CopyStatementContext::DELIMITER() {
  return getToken(SimpleSqlParser::DELIMITER, 0);
}

tree::TerminalNode* SimpleSqlParser::CopyStatementContext::CSV() {
  return getToken(SimpleSqlParser::CSV, 0);
}

SimpleSqlParser::TableIdentifierContext* SimpleSqlParser::CopyStatementContext::tableIdentifier() {
  return getRuleContext<SimpleSqlParser::TableIdentifierContext>(0);
}

std::vector<tree::TerminalNode *> SimpleSqlParser::CopyStatementContext::STRING() {
  return getTokens(SimpleSqlParser::STRING);
}

tree::TerminalNode* SimpleSqlParser::CopyStatementContext::STRING(size_t i) {
  return getToken(SimpleSqlParser::STRING, i);
}

tree::TerminalNode* SimpleSqlParser::CopyStatementContext::HEADER() {
  return getToken(SimpleSqlParser::HEADER, 0);
}


size_t SimpleSqlParser::CopyStatementContext::getRuleIndex() const {
  return SimpleSqlParser::RuleCopyStatement;
}


antlrcpp::Any SimpleSqlParser::CopyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitCopyStatement(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::CopyStatementContext* SimpleSqlParser::copyStatement() {
  CopyStatementContext *_localctx = _tracker.createInstance<CopyStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, SimpleSqlParser::RuleCopyStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(SimpleSqlParser::COPY);
    setState(126);
    dynamic_cast<CopyStatementContext *>(_localctx)->tableName = tableIdentifier();
    setState(127);
    match(SimpleSqlParser::FROM);
    setState(128);
    dynamic_cast<CopyStatementContext *>(_localctx)->fileName = match(SimpleSqlParser::STRING);
    setState(129);
    match(SimpleSqlParser::DELIMITER);
    setState(130);
    dynamic_cast<CopyStatementContext *>(_localctx)->delimiter = match(SimpleSqlParser::STRING);
    setState(131);
    match(SimpleSqlParser::CSV);
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::HEADER) {
      setState(132);
      match(SimpleSqlParser::HEADER);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectStatementContext ------------------------------------------------------------------

SimpleSqlParser::SelectStatementContext::SelectStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::SelectClauseContext* SimpleSqlParser::SelectStatementContext::selectClause() {
  return getRuleContext<SimpleSqlParser::SelectClauseContext>(0);
}

SimpleSqlParser::FromCluseContext* SimpleSqlParser::SelectStatementContext::fromCluse() {
  return getRuleContext<SimpleSqlParser::FromCluseContext>(0);
}

SimpleSqlParser::WhereCluseContext* SimpleSqlParser::SelectStatementContext::whereCluse() {
  return getRuleContext<SimpleSqlParser::WhereCluseContext>(0);
}


size_t SimpleSqlParser::SelectStatementContext::getRuleIndex() const {
  return SimpleSqlParser::RuleSelectStatement;
}


antlrcpp::Any SimpleSqlParser::SelectStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitSelectStatement(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::SelectStatementContext* SimpleSqlParser::selectStatement() {
  SelectStatementContext *_localctx = _tracker.createInstance<SelectStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, SimpleSqlParser::RuleSelectStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    selectClause();
    setState(136);
    fromCluse();
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::WHERE) {
      setState(137);
      whereCluse();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectClauseContext ------------------------------------------------------------------

SimpleSqlParser::SelectClauseContext::SelectClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::SelectClauseContext::SELECT() {
  return getToken(SimpleSqlParser::SELECT, 0);
}

std::vector<SimpleSqlParser::ExpressionContext *> SimpleSqlParser::SelectClauseContext::expression() {
  return getRuleContexts<SimpleSqlParser::ExpressionContext>();
}

SimpleSqlParser::ExpressionContext* SimpleSqlParser::SelectClauseContext::expression(size_t i) {
  return getRuleContext<SimpleSqlParser::ExpressionContext>(i);
}


size_t SimpleSqlParser::SelectClauseContext::getRuleIndex() const {
  return SimpleSqlParser::RuleSelectClause;
}


antlrcpp::Any SimpleSqlParser::SelectClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitSelectClause(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::SelectClauseContext* SimpleSqlParser::selectClause() {
  SelectClauseContext *_localctx = _tracker.createInstance<SelectClauseContext>(_ctx, getState());
  enterRule(_localctx, 20, SimpleSqlParser::RuleSelectClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(SimpleSqlParser::SELECT);
    setState(141);
    expression();
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__2) {
      setState(142);
      match(SimpleSqlParser::T__2);
      setState(143);
      expression();
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FromCluseContext ------------------------------------------------------------------

SimpleSqlParser::FromCluseContext::FromCluseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::FromCluseContext::FROM() {
  return getToken(SimpleSqlParser::FROM, 0);
}

std::vector<SimpleSqlParser::TableIdentifierContext *> SimpleSqlParser::FromCluseContext::tableIdentifier() {
  return getRuleContexts<SimpleSqlParser::TableIdentifierContext>();
}

SimpleSqlParser::TableIdentifierContext* SimpleSqlParser::FromCluseContext::tableIdentifier(size_t i) {
  return getRuleContext<SimpleSqlParser::TableIdentifierContext>(i);
}


size_t SimpleSqlParser::FromCluseContext::getRuleIndex() const {
  return SimpleSqlParser::RuleFromCluse;
}


antlrcpp::Any SimpleSqlParser::FromCluseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitFromCluse(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::FromCluseContext* SimpleSqlParser::fromCluse() {
  FromCluseContext *_localctx = _tracker.createInstance<FromCluseContext>(_ctx, getState());
  enterRule(_localctx, 22, SimpleSqlParser::RuleFromCluse);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(SimpleSqlParser::FROM);
    setState(150);
    tableIdentifier();
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__2) {
      setState(151);
      match(SimpleSqlParser::T__2);
      setState(152);
      tableIdentifier();
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereCluseContext ------------------------------------------------------------------

SimpleSqlParser::WhereCluseContext::WhereCluseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::WhereCluseContext::WHERE() {
  return getToken(SimpleSqlParser::WHERE, 0);
}

SimpleSqlParser::ExpressionContext* SimpleSqlParser::WhereCluseContext::expression() {
  return getRuleContext<SimpleSqlParser::ExpressionContext>(0);
}


size_t SimpleSqlParser::WhereCluseContext::getRuleIndex() const {
  return SimpleSqlParser::RuleWhereCluse;
}


antlrcpp::Any SimpleSqlParser::WhereCluseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitWhereCluse(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::WhereCluseContext* SimpleSqlParser::whereCluse() {
  WhereCluseContext *_localctx = _tracker.createInstance<WhereCluseContext>(_ctx, getState());
  enterRule(_localctx, 24, SimpleSqlParser::RuleWhereCluse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    match(SimpleSqlParser::WHERE);
    setState(159);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStructContext ------------------------------------------------------------------

SimpleSqlParser::ExpressionStructContext::ExpressionStructContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SimpleSqlParser::ExpressionContext *> SimpleSqlParser::ExpressionStructContext::expression() {
  return getRuleContexts<SimpleSqlParser::ExpressionContext>();
}

SimpleSqlParser::ExpressionContext* SimpleSqlParser::ExpressionStructContext::expression(size_t i) {
  return getRuleContext<SimpleSqlParser::ExpressionContext>(i);
}


size_t SimpleSqlParser::ExpressionStructContext::getRuleIndex() const {
  return SimpleSqlParser::RuleExpressionStruct;
}


antlrcpp::Any SimpleSqlParser::ExpressionStructContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitExpressionStruct(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::ExpressionStructContext* SimpleSqlParser::expressionStruct() {
  ExpressionStructContext *_localctx = _tracker.createInstance<ExpressionStructContext>(_ctx, getState());
  enterRule(_localctx, 26, SimpleSqlParser::RuleExpressionStruct);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(SimpleSqlParser::T__1);
    setState(162);
    expression();
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__2) {
      setState(163);
      match(SimpleSqlParser::T__2);
      setState(164);
      expression();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(170);
    match(SimpleSqlParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SimpleSqlParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleSqlParser::BooleanExpressionContext* SimpleSqlParser::ExpressionContext::booleanExpression() {
  return getRuleContext<SimpleSqlParser::BooleanExpressionContext>(0);
}


size_t SimpleSqlParser::ExpressionContext::getRuleIndex() const {
  return SimpleSqlParser::RuleExpression;
}


antlrcpp::Any SimpleSqlParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::ExpressionContext* SimpleSqlParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, SimpleSqlParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    booleanExpression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanExpressionContext ------------------------------------------------------------------

SimpleSqlParser::BooleanExpressionContext::BooleanExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSqlParser::BooleanExpressionContext::getRuleIndex() const {
  return SimpleSqlParser::RuleBooleanExpression;
}

void SimpleSqlParser::BooleanExpressionContext::copyFrom(BooleanExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LogicalNotContext ------------------------------------------------------------------

tree::TerminalNode* SimpleSqlParser::LogicalNotContext::NOT() {
  return getToken(SimpleSqlParser::NOT, 0);
}

SimpleSqlParser::BooleanExpressionContext* SimpleSqlParser::LogicalNotContext::booleanExpression() {
  return getRuleContext<SimpleSqlParser::BooleanExpressionContext>(0);
}

SimpleSqlParser::LogicalNotContext::LogicalNotContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::LogicalNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitLogicalNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExpressionDefauleContext ------------------------------------------------------------------

SimpleSqlParser::ValueExpressionContext* SimpleSqlParser::BooleanExpressionDefauleContext::valueExpression() {
  return getRuleContext<SimpleSqlParser::ValueExpressionContext>(0);
}

SimpleSqlParser::BooleanExpressionDefauleContext::BooleanExpressionDefauleContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::BooleanExpressionDefauleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitBooleanExpressionDefaule(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalBinaryContext ------------------------------------------------------------------

std::vector<SimpleSqlParser::BooleanExpressionContext *> SimpleSqlParser::LogicalBinaryContext::booleanExpression() {
  return getRuleContexts<SimpleSqlParser::BooleanExpressionContext>();
}

SimpleSqlParser::BooleanExpressionContext* SimpleSqlParser::LogicalBinaryContext::booleanExpression(size_t i) {
  return getRuleContext<SimpleSqlParser::BooleanExpressionContext>(i);
}

tree::TerminalNode* SimpleSqlParser::LogicalBinaryContext::AND() {
  return getToken(SimpleSqlParser::AND, 0);
}

tree::TerminalNode* SimpleSqlParser::LogicalBinaryContext::OR() {
  return getToken(SimpleSqlParser::OR, 0);
}

SimpleSqlParser::LogicalBinaryContext::LogicalBinaryContext(BooleanExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::LogicalBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitLogicalBinary(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::BooleanExpressionContext* SimpleSqlParser::booleanExpression() {
   return booleanExpression(0);
}

SimpleSqlParser::BooleanExpressionContext* SimpleSqlParser::booleanExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SimpleSqlParser::BooleanExpressionContext *_localctx = _tracker.createInstance<BooleanExpressionContext>(_ctx, parentState);
  SimpleSqlParser::BooleanExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, SimpleSqlParser::RuleBooleanExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(178);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::T__1:
      case SimpleSqlParser::TRUE_:
      case SimpleSqlParser::FALSE_:
      case SimpleSqlParser::MINUS:
      case SimpleSqlParser::STRING:
      case SimpleSqlParser::FLOAT_LITERAL:
      case SimpleSqlParser::INTEGER_LITERAL:
      case SimpleSqlParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<BooleanExpressionDefauleContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(175);
        valueExpression(0);
        break;
      }

      case SimpleSqlParser::NOT: {
        _localctx = _tracker.createInstance<LogicalNotContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(176);
        match(SimpleSqlParser::NOT);
        setState(177);
        booleanExpression(2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(185);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<LogicalBinaryContext>(_tracker.createInstance<BooleanExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->left = previousContext;
        pushNewRecursionContext(newContext, startState, RuleBooleanExpression);
        setState(180);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(181);
        dynamic_cast<LogicalBinaryContext *>(_localctx)->opt = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == SimpleSqlParser::OR

        || _la == SimpleSqlParser::AND)) {
          dynamic_cast<LogicalBinaryContext *>(_localctx)->opt = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(182);
        dynamic_cast<LogicalBinaryContext *>(_localctx)->right = booleanExpression(2); 
      }
      setState(187);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ValueExpressionContext ------------------------------------------------------------------

SimpleSqlParser::ValueExpressionContext::ValueExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSqlParser::ValueExpressionContext::getRuleIndex() const {
  return SimpleSqlParser::RuleValueExpression;
}

void SimpleSqlParser::ValueExpressionContext::copyFrom(ValueExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ValueExpressionDefaultContext ------------------------------------------------------------------

SimpleSqlParser::PrimaryExpressionContext* SimpleSqlParser::ValueExpressionDefaultContext::primaryExpression() {
  return getRuleContext<SimpleSqlParser::PrimaryExpressionContext>(0);
}

SimpleSqlParser::ValueExpressionDefaultContext::ValueExpressionDefaultContext(ValueExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ValueExpressionDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitValueExpressionDefault(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ComparisonContext ------------------------------------------------------------------

SimpleSqlParser::ComparisonOperatorContext* SimpleSqlParser::ComparisonContext::comparisonOperator() {
  return getRuleContext<SimpleSqlParser::ComparisonOperatorContext>(0);
}

std::vector<SimpleSqlParser::ValueExpressionContext *> SimpleSqlParser::ComparisonContext::valueExpression() {
  return getRuleContexts<SimpleSqlParser::ValueExpressionContext>();
}

SimpleSqlParser::ValueExpressionContext* SimpleSqlParser::ComparisonContext::valueExpression(size_t i) {
  return getRuleContext<SimpleSqlParser::ValueExpressionContext>(i);
}

SimpleSqlParser::ComparisonContext::ComparisonContext(ValueExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticBinaryContext ------------------------------------------------------------------

std::vector<SimpleSqlParser::ValueExpressionContext *> SimpleSqlParser::ArithmeticBinaryContext::valueExpression() {
  return getRuleContexts<SimpleSqlParser::ValueExpressionContext>();
}

SimpleSqlParser::ValueExpressionContext* SimpleSqlParser::ArithmeticBinaryContext::valueExpression(size_t i) {
  return getRuleContext<SimpleSqlParser::ValueExpressionContext>(i);
}

tree::TerminalNode* SimpleSqlParser::ArithmeticBinaryContext::ASTERISK() {
  return getToken(SimpleSqlParser::ASTERISK, 0);
}

tree::TerminalNode* SimpleSqlParser::ArithmeticBinaryContext::SLASH() {
  return getToken(SimpleSqlParser::SLASH, 0);
}

tree::TerminalNode* SimpleSqlParser::ArithmeticBinaryContext::PERCENT() {
  return getToken(SimpleSqlParser::PERCENT, 0);
}

tree::TerminalNode* SimpleSqlParser::ArithmeticBinaryContext::PLUS() {
  return getToken(SimpleSqlParser::PLUS, 0);
}

tree::TerminalNode* SimpleSqlParser::ArithmeticBinaryContext::MINUS() {
  return getToken(SimpleSqlParser::MINUS, 0);
}

SimpleSqlParser::ArithmeticBinaryContext::ArithmeticBinaryContext(ValueExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ArithmeticBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitArithmeticBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArithmeticUnaryContext ------------------------------------------------------------------

tree::TerminalNode* SimpleSqlParser::ArithmeticUnaryContext::MINUS() {
  return getToken(SimpleSqlParser::MINUS, 0);
}

SimpleSqlParser::ValueExpressionContext* SimpleSqlParser::ArithmeticUnaryContext::valueExpression() {
  return getRuleContext<SimpleSqlParser::ValueExpressionContext>(0);
}

SimpleSqlParser::ArithmeticUnaryContext::ArithmeticUnaryContext(ValueExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ArithmeticUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitArithmeticUnary(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::ValueExpressionContext* SimpleSqlParser::valueExpression() {
   return valueExpression(0);
}

SimpleSqlParser::ValueExpressionContext* SimpleSqlParser::valueExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SimpleSqlParser::ValueExpressionContext *_localctx = _tracker.createInstance<ValueExpressionContext>(_ctx, parentState);
  SimpleSqlParser::ValueExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, SimpleSqlParser::RuleValueExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(192);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValueExpressionDefaultContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(189);
      primaryExpression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ArithmeticUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(190);
      match(SimpleSqlParser::MINUS);
      setState(191);
      valueExpression(4);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(206);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(204);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(194);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(195);
          dynamic_cast<ArithmeticBinaryContext *>(_localctx)->opt = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SimpleSqlParser::ASTERISK)
            | (1ULL << SimpleSqlParser::SLASH)
            | (1ULL << SimpleSqlParser::PERCENT))) != 0))) {
            dynamic_cast<ArithmeticBinaryContext *>(_localctx)->opt = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(196);
          dynamic_cast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(197);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(198);
          dynamic_cast<ArithmeticBinaryContext *>(_localctx)->opt = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == SimpleSqlParser::PLUS

          || _la == SimpleSqlParser::MINUS)) {
            dynamic_cast<ArithmeticBinaryContext *>(_localctx)->opt = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(199);
          dynamic_cast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(3);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(200);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(201);
          comparisonOperator();
          setState(202);
          dynamic_cast<ComparisonContext *>(_localctx)->right = valueExpression(2);
          break;
        }

        } 
      }
      setState(208);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

SimpleSqlParser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSqlParser::PrimaryExpressionContext::getRuleIndex() const {
  return SimpleSqlParser::RulePrimaryExpression;
}

void SimpleSqlParser::PrimaryExpressionContext::copyFrom(PrimaryExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ColumnReferenceContext ------------------------------------------------------------------

SimpleSqlParser::ColumnIdentifierContext* SimpleSqlParser::ColumnReferenceContext::columnIdentifier() {
  return getRuleContext<SimpleSqlParser::ColumnIdentifierContext>(0);
}

SimpleSqlParser::ColumnReferenceContext::ColumnReferenceContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ColumnReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitColumnReference(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedExpressionContext ------------------------------------------------------------------

SimpleSqlParser::ExpressionContext* SimpleSqlParser::ParenthesizedExpressionContext::expression() {
  return getRuleContext<SimpleSqlParser::ExpressionContext>(0);
}

SimpleSqlParser::ParenthesizedExpressionContext::ParenthesizedExpressionContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ParenthesizedExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitParenthesizedExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstantValueContext ------------------------------------------------------------------

SimpleSqlParser::ConstantContext* SimpleSqlParser::ConstantValueContext::constant() {
  return getRuleContext<SimpleSqlParser::ConstantContext>(0);
}

SimpleSqlParser::ConstantValueContext::ConstantValueContext(PrimaryExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ConstantValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitConstantValue(this);
  else
    return visitor->visitChildren(this);
}
SimpleSqlParser::PrimaryExpressionContext* SimpleSqlParser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 34, SimpleSqlParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::IDENTIFIER: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<SimpleSqlParser::ColumnReferenceContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(209);
        columnIdentifier();
        break;
      }

      case SimpleSqlParser::TRUE_:
      case SimpleSqlParser::FALSE_:
      case SimpleSqlParser::MINUS:
      case SimpleSqlParser::STRING:
      case SimpleSqlParser::FLOAT_LITERAL:
      case SimpleSqlParser::INTEGER_LITERAL: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<SimpleSqlParser::ConstantValueContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(210);
        constant();
        break;
      }

      case SimpleSqlParser::T__1: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<SimpleSqlParser::ParenthesizedExpressionContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(211);
        match(SimpleSqlParser::T__1);
        setState(212);
        expression();
        setState(213);
        match(SimpleSqlParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

SimpleSqlParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSqlParser::ConstantContext::getRuleIndex() const {
  return SimpleSqlParser::RuleConstant;
}

void SimpleSqlParser::ConstantContext::copyFrom(ConstantContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StringLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SimpleSqlParser::StringLiteralContext::STRING() {
  return getToken(SimpleSqlParser::STRING, 0);
}

SimpleSqlParser::StringLiteralContext::StringLiteralContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanLiteralContext ------------------------------------------------------------------

SimpleSqlParser::BooleanValueContext* SimpleSqlParser::BooleanLiteralContext::booleanValue() {
  return getRuleContext<SimpleSqlParser::BooleanValueContext>(0);
}

SimpleSqlParser::BooleanLiteralContext::BooleanLiteralContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberLiteralContext ------------------------------------------------------------------

SimpleSqlParser::NumberContext* SimpleSqlParser::NumberLiteralContext::number() {
  return getRuleContext<SimpleSqlParser::NumberContext>(0);
}

SimpleSqlParser::NumberLiteralContext::NumberLiteralContext(ConstantContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::NumberLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitNumberLiteral(this);
  else
    return visitor->visitChildren(this);
}
SimpleSqlParser::ConstantContext* SimpleSqlParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 36, SimpleSqlParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::STRING: {
        _localctx = dynamic_cast<ConstantContext *>(_tracker.createInstance<SimpleSqlParser::StringLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(217);
        match(SimpleSqlParser::STRING);
        break;
      }

      case SimpleSqlParser::MINUS:
      case SimpleSqlParser::FLOAT_LITERAL:
      case SimpleSqlParser::INTEGER_LITERAL: {
        _localctx = dynamic_cast<ConstantContext *>(_tracker.createInstance<SimpleSqlParser::NumberLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(218);
        number();
        break;
      }

      case SimpleSqlParser::TRUE_:
      case SimpleSqlParser::FALSE_: {
        _localctx = dynamic_cast<ConstantContext *>(_tracker.createInstance<SimpleSqlParser::BooleanLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(219);
        booleanValue();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataTypeContext ------------------------------------------------------------------

SimpleSqlParser::DataTypeContext::DataTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::DataTypeContext::IDENTIFIER() {
  return getToken(SimpleSqlParser::IDENTIFIER, 0);
}


size_t SimpleSqlParser::DataTypeContext::getRuleIndex() const {
  return SimpleSqlParser::RuleDataType;
}


antlrcpp::Any SimpleSqlParser::DataTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitDataType(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::DataTypeContext* SimpleSqlParser::dataType() {
  DataTypeContext *_localctx = _tracker.createInstance<DataTypeContext>(_ctx, getState());
  enterRule(_localctx, 38, SimpleSqlParser::RuleDataType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(SimpleSqlParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColumnIdentifierContext ------------------------------------------------------------------

SimpleSqlParser::ColumnIdentifierContext::ColumnIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSqlParser::ColumnIdentifierContext::getRuleIndex() const {
  return SimpleSqlParser::RuleColumnIdentifier;
}

void SimpleSqlParser::ColumnIdentifierContext::copyFrom(ColumnIdentifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ColumnWithoutTableContext ------------------------------------------------------------------

SimpleSqlParser::IdentifierContext* SimpleSqlParser::ColumnWithoutTableContext::identifier() {
  return getRuleContext<SimpleSqlParser::IdentifierContext>(0);
}

SimpleSqlParser::ColumnWithoutTableContext::ColumnWithoutTableContext(ColumnIdentifierContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ColumnWithoutTableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitColumnWithoutTable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ColumnWithTableContext ------------------------------------------------------------------

SimpleSqlParser::TableIdentifierContext* SimpleSqlParser::ColumnWithTableContext::tableIdentifier() {
  return getRuleContext<SimpleSqlParser::TableIdentifierContext>(0);
}

SimpleSqlParser::IdentifierContext* SimpleSqlParser::ColumnWithTableContext::identifier() {
  return getRuleContext<SimpleSqlParser::IdentifierContext>(0);
}

SimpleSqlParser::ColumnWithTableContext::ColumnWithTableContext(ColumnIdentifierContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::ColumnWithTableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitColumnWithTable(this);
  else
    return visitor->visitChildren(this);
}
SimpleSqlParser::ColumnIdentifierContext* SimpleSqlParser::columnIdentifier() {
  ColumnIdentifierContext *_localctx = _tracker.createInstance<ColumnIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 40, SimpleSqlParser::RuleColumnIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ColumnIdentifierContext *>(_tracker.createInstance<SimpleSqlParser::ColumnWithTableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(224);
      tableIdentifier();
      setState(225);
      match(SimpleSqlParser::T__4);
      setState(226);
      identifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ColumnIdentifierContext *>(_tracker.createInstance<SimpleSqlParser::ColumnWithoutTableContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(228);
      identifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableIdentifierContext ------------------------------------------------------------------

SimpleSqlParser::TableIdentifierContext::TableIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSqlParser::TableIdentifierContext::getRuleIndex() const {
  return SimpleSqlParser::RuleTableIdentifier;
}

void SimpleSqlParser::TableIdentifierContext::copyFrom(TableIdentifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TableAliasContext ------------------------------------------------------------------

tree::TerminalNode* SimpleSqlParser::TableAliasContext::AS() {
  return getToken(SimpleSqlParser::AS, 0);
}

std::vector<SimpleSqlParser::IdentifierContext *> SimpleSqlParser::TableAliasContext::identifier() {
  return getRuleContexts<SimpleSqlParser::IdentifierContext>();
}

SimpleSqlParser::IdentifierContext* SimpleSqlParser::TableAliasContext::identifier(size_t i) {
  return getRuleContext<SimpleSqlParser::IdentifierContext>(i);
}

SimpleSqlParser::TableAliasContext::TableAliasContext(TableIdentifierContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::TableAliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitTableAlias(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TableIdentifierDefaultContext ------------------------------------------------------------------

SimpleSqlParser::IdentifierContext* SimpleSqlParser::TableIdentifierDefaultContext::identifier() {
  return getRuleContext<SimpleSqlParser::IdentifierContext>(0);
}

SimpleSqlParser::TableIdentifierDefaultContext::TableIdentifierDefaultContext(TableIdentifierContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::TableIdentifierDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitTableIdentifierDefault(this);
  else
    return visitor->visitChildren(this);
}
SimpleSqlParser::TableIdentifierContext* SimpleSqlParser::tableIdentifier() {
  TableIdentifierContext *_localctx = _tracker.createInstance<TableIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 42, SimpleSqlParser::RuleTableIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<TableIdentifierContext *>(_tracker.createInstance<SimpleSqlParser::TableIdentifierDefaultContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(231);
      dynamic_cast<TableIdentifierDefaultContext *>(_localctx)->tableName = identifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<TableIdentifierContext *>(_tracker.createInstance<SimpleSqlParser::TableAliasContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(232);
      dynamic_cast<TableAliasContext *>(_localctx)->tableName = identifier();
      setState(233);
      match(SimpleSqlParser::AS);
      setState(234);
      dynamic_cast<TableAliasContext *>(_localctx)->alias = identifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

SimpleSqlParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::IdentifierContext::IDENTIFIER() {
  return getToken(SimpleSqlParser::IDENTIFIER, 0);
}


size_t SimpleSqlParser::IdentifierContext::getRuleIndex() const {
  return SimpleSqlParser::RuleIdentifier;
}


antlrcpp::Any SimpleSqlParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::IdentifierContext* SimpleSqlParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 44, SimpleSqlParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    match(SimpleSqlParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

SimpleSqlParser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::ComparisonOperatorContext::EQ() {
  return getToken(SimpleSqlParser::EQ, 0);
}

tree::TerminalNode* SimpleSqlParser::ComparisonOperatorContext::NEQ() {
  return getToken(SimpleSqlParser::NEQ, 0);
}

tree::TerminalNode* SimpleSqlParser::ComparisonOperatorContext::NEQJ() {
  return getToken(SimpleSqlParser::NEQJ, 0);
}

tree::TerminalNode* SimpleSqlParser::ComparisonOperatorContext::LT() {
  return getToken(SimpleSqlParser::LT, 0);
}

tree::TerminalNode* SimpleSqlParser::ComparisonOperatorContext::LTE() {
  return getToken(SimpleSqlParser::LTE, 0);
}

tree::TerminalNode* SimpleSqlParser::ComparisonOperatorContext::GT() {
  return getToken(SimpleSqlParser::GT, 0);
}

tree::TerminalNode* SimpleSqlParser::ComparisonOperatorContext::GTE() {
  return getToken(SimpleSqlParser::GTE, 0);
}


size_t SimpleSqlParser::ComparisonOperatorContext::getRuleIndex() const {
  return SimpleSqlParser::RuleComparisonOperator;
}


antlrcpp::Any SimpleSqlParser::ComparisonOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitComparisonOperator(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::ComparisonOperatorContext* SimpleSqlParser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 46, SimpleSqlParser::RuleComparisonOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SimpleSqlParser::EQ)
      | (1ULL << SimpleSqlParser::NEQ)
      | (1ULL << SimpleSqlParser::NEQJ)
      | (1ULL << SimpleSqlParser::LT)
      | (1ULL << SimpleSqlParser::LTE)
      | (1ULL << SimpleSqlParser::GT)
      | (1ULL << SimpleSqlParser::GTE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateOperatorContext ------------------------------------------------------------------

SimpleSqlParser::PredicateOperatorContext::PredicateOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::PredicateOperatorContext::OR() {
  return getToken(SimpleSqlParser::OR, 0);
}

tree::TerminalNode* SimpleSqlParser::PredicateOperatorContext::AND() {
  return getToken(SimpleSqlParser::AND, 0);
}

tree::TerminalNode* SimpleSqlParser::PredicateOperatorContext::NOT() {
  return getToken(SimpleSqlParser::NOT, 0);
}


size_t SimpleSqlParser::PredicateOperatorContext::getRuleIndex() const {
  return SimpleSqlParser::RulePredicateOperator;
}


antlrcpp::Any SimpleSqlParser::PredicateOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitPredicateOperator(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::PredicateOperatorContext* SimpleSqlParser::predicateOperator() {
  PredicateOperatorContext *_localctx = _tracker.createInstance<PredicateOperatorContext>(_ctx, getState());
  enterRule(_localctx, 48, SimpleSqlParser::RulePredicateOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SimpleSqlParser::OR)
      | (1ULL << SimpleSqlParser::AND)
      | (1ULL << SimpleSqlParser::NOT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanValueContext ------------------------------------------------------------------

SimpleSqlParser::BooleanValueContext::BooleanValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleSqlParser::BooleanValueContext::TRUE_() {
  return getToken(SimpleSqlParser::TRUE_, 0);
}

tree::TerminalNode* SimpleSqlParser::BooleanValueContext::FALSE_() {
  return getToken(SimpleSqlParser::FALSE_, 0);
}


size_t SimpleSqlParser::BooleanValueContext::getRuleIndex() const {
  return SimpleSqlParser::RuleBooleanValue;
}


antlrcpp::Any SimpleSqlParser::BooleanValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitBooleanValue(this);
  else
    return visitor->visitChildren(this);
}

SimpleSqlParser::BooleanValueContext* SimpleSqlParser::booleanValue() {
  BooleanValueContext *_localctx = _tracker.createInstance<BooleanValueContext>(_ctx, getState());
  enterRule(_localctx, 50, SimpleSqlParser::RuleBooleanValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    _la = _input->LA(1);
    if (!(_la == SimpleSqlParser::TRUE_

    || _la == SimpleSqlParser::FALSE_)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SimpleSqlParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SimpleSqlParser::NumberContext::getRuleIndex() const {
  return SimpleSqlParser::RuleNumber;
}

void SimpleSqlParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SimpleSqlParser::IntegerLiteralContext::INTEGER_LITERAL() {
  return getToken(SimpleSqlParser::INTEGER_LITERAL, 0);
}

tree::TerminalNode* SimpleSqlParser::IntegerLiteralContext::MINUS() {
  return getToken(SimpleSqlParser::MINUS, 0);
}

SimpleSqlParser::IntegerLiteralContext::IntegerLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatLiteralContext ------------------------------------------------------------------

tree::TerminalNode* SimpleSqlParser::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(SimpleSqlParser::FLOAT_LITERAL, 0);
}

tree::TerminalNode* SimpleSqlParser::FloatLiteralContext::MINUS() {
  return getToken(SimpleSqlParser::MINUS, 0);
}

SimpleSqlParser::FloatLiteralContext::FloatLiteralContext(NumberContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SimpleSqlParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleSqlVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
SimpleSqlParser::NumberContext* SimpleSqlParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 52, SimpleSqlParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<SimpleSqlParser::IntegerLiteralContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(247);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::MINUS) {
        setState(246);
        match(SimpleSqlParser::MINUS);
      }
      setState(249);
      match(SimpleSqlParser::INTEGER_LITERAL);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<SimpleSqlParser::FloatLiteralContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(251);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::MINUS) {
        setState(250);
        match(SimpleSqlParser::MINUS);
      }
      setState(253);
      match(SimpleSqlParser::FLOAT_LITERAL);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SimpleSqlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return booleanExpressionSempred(dynamic_cast<BooleanExpressionContext *>(context), predicateIndex);
    case 16: return valueExpressionSempred(dynamic_cast<ValueExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SimpleSqlParser::booleanExpressionSempred(BooleanExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SimpleSqlParser::valueExpressionSempred(ValueExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 2);
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SimpleSqlParser::_decisionToDFA;
atn::PredictionContextCache SimpleSqlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SimpleSqlParser::_atn;
std::vector<uint16_t> SimpleSqlParser::_serializedATN;

std::vector<std::string> SimpleSqlParser::_ruleNames = {
  "singleStatement", "statement", "showSchema", "showTable", "createStatement", 
  "indexClause", "deleteStatement", "insertStatement", "copyStatement", 
  "selectStatement", "selectClause", "fromCluse", "whereCluse", "expressionStruct", 
  "expression", "booleanExpression", "valueExpression", "primaryExpression", 
  "constant", "dataType", "columnIdentifier", "tableIdentifier", "identifier", 
  "comparisonOperator", "predicateOperator", "booleanValue", "number"
};

std::vector<std::string> SimpleSqlParser::_literalNames = {
  "", "';'", "'('", "','", "')'", "'.'", "'SELECT'", "'FROM'", "'WHERE'", 
  "'INSERT'", "'INTO'", "'VALUES'", "'DELETE'", "'CREATE'", "'COPY'", "'DELIMITER'", 
  "'CSV'", "'HEADER'", "'TABLE'", "'TABLES'", "'SHOW'", "'SCHEMA'", "'INDEX'", 
  "'ON'", "'AS'", "'OR'", "'AND'", "'NOT'", "'TRUE'", "'FALSE'", "", "'<>'", 
  "'!='", "'<'", "", "'>'", "", "'+'", "'-'", "'*'", "'/'", "'%'"
};

std::vector<std::string> SimpleSqlParser::_symbolicNames = {
  "", "", "", "", "", "", "SELECT", "FROM", "WHERE", "INSERT", "INTO", "VALUES", 
  "DELETE", "CREATE", "COPY", "DELIMITER", "CSV", "HEADER", "TABLE", "TABLES", 
  "SHOW", "SCHEMA", "INDEX", "ON", "AS", "OR", "AND", "NOT", "TRUE_", "FALSE_", 
  "EQ", "NEQ", "NEQJ", "LT", "LTE", "GT", "GTE", "PLUS", "MINUS", "ASTERISK", 
  "SLASH", "PERCENT", "STRING", "FLOAT_LITERAL", "INTEGER_LITERAL", "IDENTIFIER", 
  "WS"
};

dfa::Vocabulary SimpleSqlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SimpleSqlParser::_tokenNames;

SimpleSqlParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x30, 0x103, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x44, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x58, 
    0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x5b, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x5f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0x67, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x6a, 0xb, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x72, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0x7b, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x7e, 0xb, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x88, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x8d, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 
    0xc, 0x93, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x96, 0xb, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x9c, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 
    0x9f, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x7, 0xf, 0xa8, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xab, 0xb, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xb5, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x7, 0x11, 0xba, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xbd, 0xb, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xc3, 0xa, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xcf, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0xd2, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xda, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xdf, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xe8, 
    0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 
    0x17, 0xef, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x5, 0x1c, 0xfa, 0xa, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xfe, 0xa, 0x1c, 0x3, 0x1c, 0x5, 
    0x1c, 0x101, 0xa, 0x1c, 0x3, 0x1c, 0x2, 0x4, 0x20, 0x22, 0x1d, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x2, 0x8, 0x3, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x29, 0x2b, 0x3, 0x2, 
    0x27, 0x28, 0x3, 0x2, 0x20, 0x26, 0x3, 0x2, 0x1b, 0x1d, 0x3, 0x2, 0x1e, 
    0x1f, 0x2, 0x106, 0x2, 0x38, 0x3, 0x2, 0x2, 0x2, 0x4, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x45, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x60, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x73, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x89, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8e, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x97, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0x26, 0xde, 0x3, 0x2, 0x2, 0x2, 0x28, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x34, 0xf6, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x100, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x5, 0x4, 0x3, 0x2, 
    0x39, 0x3a, 0x7, 0x3, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x2, 0x2, 0x3, 0x3b, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x44, 0x5, 0x6, 0x4, 0x2, 0x3d, 0x44, 
    0x5, 0x8, 0x5, 0x2, 0x3e, 0x44, 0x5, 0xa, 0x6, 0x2, 0x3f, 0x44, 0x5, 
    0xe, 0x8, 0x2, 0x40, 0x44, 0x5, 0x10, 0x9, 0x2, 0x41, 0x44, 0x5, 0x14, 
    0xb, 0x2, 0x42, 0x44, 0x5, 0x12, 0xa, 0x2, 0x43, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x43, 0x3e, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x43, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x16, 0x2, 0x2, 0x46, 0x47, 0x7, 
    0x17, 0x2, 0x2, 0x47, 0x48, 0x7, 0x9, 0x2, 0x2, 0x48, 0x49, 0x5, 0x2c, 
    0x17, 0x2, 0x49, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x16, 0x2, 
    0x2, 0x4b, 0x4c, 0x7, 0x15, 0x2, 0x2, 0x4c, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4e, 0x7, 0xf, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x14, 0x2, 0x2, 0x4f, 
    0x50, 0x5, 0x2c, 0x17, 0x2, 0x50, 0x51, 0x7, 0x4, 0x2, 0x2, 0x51, 0x52, 
    0x5, 0x2e, 0x18, 0x2, 0x52, 0x59, 0x5, 0x28, 0x15, 0x2, 0x53, 0x54, 
    0x7, 0x5, 0x2, 0x2, 0x54, 0x55, 0x5, 0x2e, 0x18, 0x2, 0x55, 0x56, 0x5, 
    0x28, 0x15, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x7, 0x6, 0x2, 0x2, 0x5d, 
    0x5f, 0x5, 0xc, 0x7, 0x2, 0x5e, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 
    0x18, 0x2, 0x2, 0x61, 0x62, 0x7, 0x19, 0x2, 0x2, 0x62, 0x63, 0x7, 0x4, 
    0x2, 0x2, 0x63, 0x68, 0x5, 0x2e, 0x18, 0x2, 0x64, 0x65, 0x7, 0x5, 0x2, 
    0x2, 0x65, 0x67, 0x5, 0x2e, 0x18, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x6, 0x2, 0x2, 0x6c, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0xe, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x9, 
    0x2, 0x2, 0x6f, 0x71, 0x5, 0x2c, 0x17, 0x2, 0x70, 0x72, 0x5, 0x1a, 0xe, 
    0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0xf, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0xb, 0x2, 0x2, 0x74, 
    0x75, 0x7, 0xc, 0x2, 0x2, 0x75, 0x76, 0x5, 0x2c, 0x17, 0x2, 0x76, 0x77, 
    0x7, 0xd, 0x2, 0x2, 0x77, 0x7c, 0x5, 0x1c, 0xf, 0x2, 0x78, 0x79, 0x7, 
    0x5, 0x2, 0x2, 0x79, 0x7b, 0x5, 0x1c, 0xf, 0x2, 0x7a, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x10, 0x2, 0x2, 0x80, 
    0x81, 0x5, 0x2c, 0x17, 0x2, 0x81, 0x82, 0x7, 0x9, 0x2, 0x2, 0x82, 0x83, 
    0x7, 0x2c, 0x2, 0x2, 0x83, 0x84, 0x7, 0x11, 0x2, 0x2, 0x84, 0x85, 0x7, 
    0x2c, 0x2, 0x2, 0x85, 0x87, 0x7, 0x12, 0x2, 0x2, 0x86, 0x88, 0x7, 0x13, 
    0x2, 0x2, 0x87, 0x86, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x13, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x16, 0xc, 0x2, 
    0x8a, 0x8c, 0x5, 0x18, 0xd, 0x2, 0x8b, 0x8d, 0x5, 0x1a, 0xe, 0x2, 0x8c, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x8, 0x2, 0x2, 0x8f, 0x94, 0x5, 
    0x1e, 0x10, 0x2, 0x90, 0x91, 0x7, 0x5, 0x2, 0x2, 0x91, 0x93, 0x5, 0x1e, 
    0x10, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0x17, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x98, 0x7, 0x9, 0x2, 0x2, 0x98, 0x9d, 0x5, 0x2c, 0x17, 0x2, 0x99, 0x9a, 
    0x7, 0x5, 0x2, 0x2, 0x9a, 0x9c, 0x5, 0x2c, 0x17, 0x2, 0x9b, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0xa, 0x2, 0x2, 
    0xa1, 0xa2, 0x5, 0x1e, 0x10, 0x2, 0xa2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa4, 0x7, 0x4, 0x2, 0x2, 0xa4, 0xa9, 0x5, 0x1e, 0x10, 0x2, 0xa5, 0xa6, 
    0x7, 0x5, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0x1e, 0x10, 0x2, 0xa7, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 0x6, 0x2, 0x2, 
    0xad, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x5, 0x20, 0x11, 0x2, 0xaf, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x8, 0x11, 0x1, 0x2, 0xb1, 0xb5, 
    0x5, 0x22, 0x12, 0x2, 0xb2, 0xb3, 0x7, 0x1d, 0x2, 0x2, 0xb3, 0xb5, 0x5, 
    0x20, 0x11, 0x4, 0xb4, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0xc, 0x3, 0x2, 
    0x2, 0xb7, 0xb8, 0x9, 0x2, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x20, 0x11, 0x4, 
    0xb9, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x8, 
    0x12, 0x1, 0x2, 0xbf, 0xc3, 0x5, 0x24, 0x13, 0x2, 0xc0, 0xc1, 0x7, 0x28, 
    0x2, 0x2, 0xc1, 0xc3, 0x5, 0x22, 0x12, 0x6, 0xc2, 0xbe, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xd0, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0xc5, 0xc, 0x5, 0x2, 0x2, 0xc5, 0xc6, 0x9, 0x3, 0x2, 0x2, 0xc6, 
    0xcf, 0x5, 0x22, 0x12, 0x6, 0xc7, 0xc8, 0xc, 0x4, 0x2, 0x2, 0xc8, 0xc9, 
    0x9, 0x4, 0x2, 0x2, 0xc9, 0xcf, 0x5, 0x22, 0x12, 0x5, 0xca, 0xcb, 0xc, 
    0x3, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x30, 0x19, 0x2, 0xcc, 0xcd, 0x5, 0x22, 
    0x12, 0x4, 0xcd, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xce, 0xc4, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xce, 0xca, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xda, 0x5, 0x2a, 0x16, 0x2, 0xd4, 0xda, 0x5, 
    0x26, 0x14, 0x2, 0xd5, 0xd6, 0x7, 0x4, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x1e, 
    0x10, 0x2, 0xd7, 0xd8, 0x7, 0x6, 0x2, 0x2, 0xd8, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xda, 0x25, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xdf, 0x7, 0x2c, 0x2, 0x2, 0xdc, 0xdf, 0x5, 0x36, 0x1c, 0x2, 0xdd, 0xdf, 
    0x5, 0x34, 0x1b, 0x2, 0xde, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xe1, 0x7, 0x2f, 0x2, 0x2, 0xe1, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe3, 0x5, 0x2c, 0x17, 0x2, 0xe3, 0xe4, 0x7, 0x7, 0x2, 0x2, 
    0xe4, 0xe5, 0x5, 0x2e, 0x18, 0x2, 0xe5, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe6, 
    0xe8, 0x5, 0x2e, 0x18, 0x2, 0xe7, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xef, 0x5, 
    0x2e, 0x18, 0x2, 0xea, 0xeb, 0x5, 0x2e, 0x18, 0x2, 0xeb, 0xec, 0x7, 
    0x1a, 0x2, 0x2, 0xec, 0xed, 0x5, 0x2e, 0x18, 0x2, 0xed, 0xef, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xee, 0xea, 0x3, 0x2, 0x2, 
    0x2, 0xef, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x2f, 0x2, 0x2, 
    0xf1, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x9, 0x5, 0x2, 0x2, 0xf3, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x9, 0x6, 0x2, 0x2, 0xf5, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x9, 0x7, 0x2, 0x2, 0xf7, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xfa, 0x7, 0x28, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 
    0x2, 0xfb, 0x101, 0x7, 0x2e, 0x2, 0x2, 0xfc, 0xfe, 0x7, 0x28, 0x2, 0x2, 
    0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x7, 0x2d, 0x2, 0x2, 0x100, 0xf9, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x101, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x19, 0x43, 0x59, 0x5e, 0x68, 0x71, 0x7c, 0x87, 0x8c, 
    0x94, 0x9d, 0xa9, 0xb4, 0xbb, 0xc2, 0xce, 0xd0, 0xd9, 0xde, 0xe7, 0xee, 
    0xf9, 0xfd, 0x100, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SimpleSqlParser::Initializer SimpleSqlParser::_init;
