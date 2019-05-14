
// Generated from /mnt/d/Program/Ubuntu/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.2


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
    setState(48);
    statement();
    setState(49);
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
    setState(56);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::CREATE: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::CreateTableStatementContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(51);
        createStatement();
        break;
      }

      case SimpleSqlParser::DELETE: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::DeleteValueStatementContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(52);
        deleteStatement();
        break;
      }

      case SimpleSqlParser::INSERT: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::InsertValueStatementContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(53);
        insertStatement();
        break;
      }

      case SimpleSqlParser::SELECT: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::QueryStatementContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(54);
        selectStatement();
        break;
      }

      case SimpleSqlParser::COPY: {
        _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<SimpleSqlParser::CopyFileStatementContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(55);
        copyStatement();
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
  enterRule(_localctx, 4, SimpleSqlParser::RuleCreateStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(SimpleSqlParser::CREATE);
    setState(59);
    match(SimpleSqlParser::TABLE);
    setState(60);
    dynamic_cast<CreateStatementContext *>(_localctx)->tablenName = tableIdentifier();
    setState(61);
    match(SimpleSqlParser::T__0);
    setState(62);
    identifier();
    setState(63);
    dataType();
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__1) {
      setState(64);
      match(SimpleSqlParser::T__1);
      setState(65);
      identifier();
      setState(66);
      dataType();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(SimpleSqlParser::T__2);
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::INDEX) {
      setState(74);
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
  enterRule(_localctx, 6, SimpleSqlParser::RuleIndexClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(SimpleSqlParser::INDEX);
    setState(78);
    match(SimpleSqlParser::ON);
    setState(79);
    match(SimpleSqlParser::T__0);
    setState(80);
    identifier();
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__1) {
      setState(81);
      match(SimpleSqlParser::T__1);
      setState(82);
      identifier();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    match(SimpleSqlParser::T__2);
   
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
  enterRule(_localctx, 8, SimpleSqlParser::RuleDeleteStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(SimpleSqlParser::DELETE);
    setState(91);
    match(SimpleSqlParser::FROM);
    setState(92);
    dynamic_cast<DeleteStatementContext *>(_localctx)->tablenName = tableIdentifier();
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::WHERE) {
      setState(93);
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

std::vector<SimpleSqlParser::ExpressionContext *> SimpleSqlParser::InsertStatementContext::expression() {
  return getRuleContexts<SimpleSqlParser::ExpressionContext>();
}

SimpleSqlParser::ExpressionContext* SimpleSqlParser::InsertStatementContext::expression(size_t i) {
  return getRuleContext<SimpleSqlParser::ExpressionContext>(i);
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
  enterRule(_localctx, 10, SimpleSqlParser::RuleInsertStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(SimpleSqlParser::INSERT);
    setState(97);
    match(SimpleSqlParser::INTO);
    setState(98);
    dynamic_cast<InsertStatementContext *>(_localctx)->tableName = tableIdentifier();
    setState(99);
    match(SimpleSqlParser::VALUES);
    setState(100);
    match(SimpleSqlParser::T__0);
    setState(101);
    expression();
    setState(106);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__1) {
      setState(102);
      match(SimpleSqlParser::T__1);
      setState(103);
      expression();
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(109);
    match(SimpleSqlParser::T__2);
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__3) {
      setState(110);
      match(SimpleSqlParser::T__3);
      setState(111);
      expression();
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SimpleSqlParser::T__1) {
        setState(112);
        match(SimpleSqlParser::T__1);
        setState(113);
        expression();
        setState(118);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(119);
      match(SimpleSqlParser::T__2);
      setState(125);
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
  enterRule(_localctx, 12, SimpleSqlParser::RuleCopyStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(SimpleSqlParser::COPY);
    setState(127);
    dynamic_cast<CopyStatementContext *>(_localctx)->tableName = tableIdentifier();
    setState(128);
    match(SimpleSqlParser::FROM);
    setState(129);
    dynamic_cast<CopyStatementContext *>(_localctx)->fileName = match(SimpleSqlParser::STRING);
    setState(130);
    match(SimpleSqlParser::DELIMITER);
    setState(131);
    dynamic_cast<CopyStatementContext *>(_localctx)->delimiter = match(SimpleSqlParser::STRING);
    setState(132);
    match(SimpleSqlParser::CSV);
   
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
  enterRule(_localctx, 14, SimpleSqlParser::RuleSelectStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    selectClause();
    setState(135);
    fromCluse();
    setState(137);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SimpleSqlParser::WHERE) {
      setState(136);
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
  enterRule(_localctx, 16, SimpleSqlParser::RuleSelectClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(SimpleSqlParser::SELECT);
    setState(140);
    expression();
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__1) {
      setState(141);
      match(SimpleSqlParser::T__1);
      setState(142);
      expression();
      setState(147);
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
  enterRule(_localctx, 18, SimpleSqlParser::RuleFromCluse);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(SimpleSqlParser::FROM);
    setState(149);
    tableIdentifier();
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleSqlParser::T__1) {
      setState(150);
      match(SimpleSqlParser::T__1);
      setState(151);
      tableIdentifier();
      setState(156);
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
  enterRule(_localctx, 20, SimpleSqlParser::RuleWhereCluse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(SimpleSqlParser::WHERE);
    setState(158);
    expression();
   
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
  enterRule(_localctx, 22, SimpleSqlParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
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
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, SimpleSqlParser::RuleBooleanExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::T__0:
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

        setState(163);
        valueExpression(0);
        break;
      }

      case SimpleSqlParser::NOT: {
        _localctx = _tracker.createInstance<LogicalNotContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(164);
        match(SimpleSqlParser::NOT);
        setState(165);
        booleanExpression(2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(173);
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
        setState(168);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(169);
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
        setState(170);
        dynamic_cast<LogicalBinaryContext *>(_localctx)->right = booleanExpression(2); 
      }
      setState(175);
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
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, SimpleSqlParser::RuleValueExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ValueExpressionDefaultContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(177);
      primaryExpression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ArithmeticUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(178);
      match(SimpleSqlParser::MINUS);
      setState(179);
      valueExpression(4);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(194);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(192);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(182);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(183);
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
          setState(184);
          dynamic_cast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticBinaryContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(185);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(186);
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
          setState(187);
          dynamic_cast<ArithmeticBinaryContext *>(_localctx)->right = valueExpression(3);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ValueExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleValueExpression);
          setState(188);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(189);
          comparisonOperator();
          setState(190);
          dynamic_cast<ComparisonContext *>(_localctx)->right = valueExpression(2);
          break;
        }

        } 
      }
      setState(196);
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
  enterRule(_localctx, 28, SimpleSqlParser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::IDENTIFIER: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<SimpleSqlParser::ColumnReferenceContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(197);
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
        setState(198);
        constant();
        break;
      }

      case SimpleSqlParser::T__0: {
        _localctx = dynamic_cast<PrimaryExpressionContext *>(_tracker.createInstance<SimpleSqlParser::ParenthesizedExpressionContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(199);
        match(SimpleSqlParser::T__0);
        setState(200);
        expression();
        setState(201);
        match(SimpleSqlParser::T__2);
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
  enterRule(_localctx, 30, SimpleSqlParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SimpleSqlParser::STRING: {
        _localctx = dynamic_cast<ConstantContext *>(_tracker.createInstance<SimpleSqlParser::StringLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(205);
        match(SimpleSqlParser::STRING);
        break;
      }

      case SimpleSqlParser::MINUS:
      case SimpleSqlParser::FLOAT_LITERAL:
      case SimpleSqlParser::INTEGER_LITERAL: {
        _localctx = dynamic_cast<ConstantContext *>(_tracker.createInstance<SimpleSqlParser::NumberLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(206);
        number();
        break;
      }

      case SimpleSqlParser::TRUE_:
      case SimpleSqlParser::FALSE_: {
        _localctx = dynamic_cast<ConstantContext *>(_tracker.createInstance<SimpleSqlParser::BooleanLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(207);
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
  enterRule(_localctx, 32, SimpleSqlParser::RuleDataType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
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
  enterRule(_localctx, 34, SimpleSqlParser::RuleColumnIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ColumnIdentifierContext *>(_tracker.createInstance<SimpleSqlParser::ColumnWithTableContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(212);
      tableIdentifier();
      setState(213);
      match(SimpleSqlParser::T__4);
      setState(214);
      identifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ColumnIdentifierContext *>(_tracker.createInstance<SimpleSqlParser::ColumnWithoutTableContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(216);
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
  enterRule(_localctx, 36, SimpleSqlParser::RuleTableIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(224);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<TableIdentifierContext *>(_tracker.createInstance<SimpleSqlParser::TableIdentifierDefaultContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(219);
      dynamic_cast<TableIdentifierDefaultContext *>(_localctx)->tableName = identifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<TableIdentifierContext *>(_tracker.createInstance<SimpleSqlParser::TableAliasContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(220);
      dynamic_cast<TableAliasContext *>(_localctx)->tableName = identifier();
      setState(221);
      match(SimpleSqlParser::AS);
      setState(222);
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
  enterRule(_localctx, 38, SimpleSqlParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
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
  enterRule(_localctx, 40, SimpleSqlParser::RuleComparisonOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
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
  enterRule(_localctx, 42, SimpleSqlParser::RulePredicateOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
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
  enterRule(_localctx, 44, SimpleSqlParser::RuleBooleanValue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
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
  enterRule(_localctx, 46, SimpleSqlParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<SimpleSqlParser::IntegerLiteralContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(235);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::MINUS) {
        setState(234);
        match(SimpleSqlParser::MINUS);
      }
      setState(237);
      match(SimpleSqlParser::INTEGER_LITERAL);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<SimpleSqlParser::FloatLiteralContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(239);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SimpleSqlParser::MINUS) {
        setState(238);
        match(SimpleSqlParser::MINUS);
      }
      setState(241);
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
    case 12: return booleanExpressionSempred(dynamic_cast<BooleanExpressionContext *>(context), predicateIndex);
    case 13: return valueExpressionSempred(dynamic_cast<ValueExpressionContext *>(context), predicateIndex);

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
  "singleStatement", "statement", "createStatement", "indexClause", "deleteStatement", 
  "insertStatement", "copyStatement", "selectStatement", "selectClause", 
  "fromCluse", "whereCluse", "expression", "booleanExpression", "valueExpression", 
  "primaryExpression", "constant", "dataType", "columnIdentifier", "tableIdentifier", 
  "identifier", "comparisonOperator", "predicateOperator", "booleanValue", 
  "number"
};

std::vector<std::string> SimpleSqlParser::_literalNames = {
  "", "'('", "','", "')'", "',('", "'.'", "'SELECT'", "'FROM'", "'WHERE'", 
  "'INSERT'", "'INTO'", "'VALUES'", "'DELETE'", "'CREATE'", "'COPY'", "'DELIMITER'", 
  "'CSV'", "'TABLE'", "'INDEX'", "'ON'", "'AS'", "'OR'", "'AND'", "'NOT'", 
  "'TRUE'", "'FALSE'", "", "'<>'", "'!='", "'<'", "", "'>'", "", "'+'", 
  "'-'", "'*'", "'/'", "'%'"
};

std::vector<std::string> SimpleSqlParser::_symbolicNames = {
  "", "", "", "", "", "", "SELECT", "FROM", "WHERE", "INSERT", "INTO", "VALUES", 
  "DELETE", "CREATE", "COPY", "DELIMITER", "CSV", "TABLE", "INDEX", "ON", 
  "AS", "OR", "AND", "NOT", "TRUE_", "FALSE_", "EQ", "NEQ", "NEQJ", "LT", 
  "LTE", "GT", "GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "STRING", 
  "FLOAT_LITERAL", "INTEGER_LITERAL", "IDENTIFIER", "WS"
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
    0x3, 0x2c, 0xf7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3b, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x47, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x4a, 0xb, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4e, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x56, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x59, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x61, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x6b, 
    0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x6e, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x75, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0x78, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x7c, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x7f, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x8c, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x92, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x95, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x9b, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x9e, 
    0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xa9, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0xae, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xb1, 0xb, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xb7, 0xa, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xc3, 0xa, 0xf, 0xc, 0xf, 0xe, 
    0xf, 0xc6, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xce, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0xd3, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xdc, 0xa, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xe3, 0xa, 
    0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x5, 0x19, 0xee, 0xa, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0xf2, 0xa, 0x19, 0x3, 0x19, 0x5, 0x19, 0xf5, 0xa, 
    0x19, 0x3, 0x19, 0x2, 0x4, 0x1a, 0x1c, 0x1a, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x2, 0x8, 0x3, 0x2, 0x17, 
    0x18, 0x3, 0x2, 0x25, 0x27, 0x3, 0x2, 0x23, 0x24, 0x3, 0x2, 0x1c, 0x22, 
    0x3, 0x2, 0x17, 0x19, 0x3, 0x2, 0x1a, 0x1b, 0x2, 0xfb, 0x2, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x4f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5c, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0xe, 0x80, 0x3, 0x2, 0x2, 0x2, 0x10, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x14, 0x96, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x20, 0xd2, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x24, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0x28, 0xe4, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x5, 0x4, 
    0x3, 0x2, 0x33, 0x34, 0x7, 0x2, 0x2, 0x3, 0x34, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x3b, 0x5, 0x6, 0x4, 0x2, 0x36, 0x3b, 0x5, 0xa, 0x6, 0x2, 
    0x37, 0x3b, 0x5, 0xc, 0x7, 0x2, 0x38, 0x3b, 0x5, 0x10, 0x9, 0x2, 0x39, 
    0x3b, 0x5, 0xe, 0x8, 0x2, 0x3a, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3d, 0x7, 0xf, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x13, 0x2, 
    0x2, 0x3e, 0x3f, 0x5, 0x26, 0x14, 0x2, 0x3f, 0x40, 0x7, 0x3, 0x2, 0x2, 
    0x40, 0x41, 0x5, 0x28, 0x15, 0x2, 0x41, 0x48, 0x5, 0x22, 0x12, 0x2, 
    0x42, 0x43, 0x7, 0x4, 0x2, 0x2, 0x43, 0x44, 0x5, 0x28, 0x15, 0x2, 0x44, 
    0x45, 0x5, 0x22, 0x12, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 0x2, 0x46, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4d, 0x7, 0x5, 0x2, 
    0x2, 0x4c, 0x4e, 0x5, 0x8, 0x5, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x50, 0x7, 0x14, 0x2, 0x2, 0x50, 0x51, 0x7, 0x15, 0x2, 0x2, 0x51, 0x52, 
    0x7, 0x3, 0x2, 0x2, 0x52, 0x57, 0x5, 0x28, 0x15, 0x2, 0x53, 0x54, 0x7, 
    0x4, 0x2, 0x2, 0x54, 0x56, 0x5, 0x28, 0x15, 0x2, 0x55, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x59, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x5, 0x2, 0x2, 0x5b, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0xe, 0x2, 0x2, 0x5d, 0x5e, 
    0x7, 0x9, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x26, 0x14, 0x2, 0x5f, 0x61, 0x5, 
    0x16, 0xc, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0xb, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0xb, 0x2, 
    0x2, 0x63, 0x64, 0x7, 0xc, 0x2, 0x2, 0x64, 0x65, 0x5, 0x26, 0x14, 0x2, 
    0x65, 0x66, 0x7, 0xd, 0x2, 0x2, 0x66, 0x67, 0x7, 0x3, 0x2, 0x2, 0x67, 
    0x6c, 0x5, 0x18, 0xd, 0x2, 0x68, 0x69, 0x7, 0x4, 0x2, 0x2, 0x69, 0x6b, 
    0x5, 0x18, 0xd, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x7d, 0x7, 0x5, 0x2, 0x2, 0x70, 0x71, 0x7, 0x6, 0x2, 0x2, 
    0x71, 0x76, 0x5, 0x18, 0xd, 0x2, 0x72, 0x73, 0x7, 0x4, 0x2, 0x2, 0x73, 
    0x75, 0x5, 0x18, 0xd, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x79, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x7a, 0x7, 0x5, 0x2, 0x2, 0x7a, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x70, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 
    0x7, 0x10, 0x2, 0x2, 0x81, 0x82, 0x5, 0x26, 0x14, 0x2, 0x82, 0x83, 0x7, 
    0x9, 0x2, 0x2, 0x83, 0x84, 0x7, 0x28, 0x2, 0x2, 0x84, 0x85, 0x7, 0x11, 
    0x2, 0x2, 0x85, 0x86, 0x7, 0x28, 0x2, 0x2, 0x86, 0x87, 0x7, 0x12, 0x2, 
    0x2, 0x87, 0xf, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x5, 0x12, 0xa, 0x2, 
    0x89, 0x8b, 0x5, 0x14, 0xb, 0x2, 0x8a, 0x8c, 0x5, 0x16, 0xc, 0x2, 0x8b, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x8, 0x2, 0x2, 0x8e, 0x93, 0x5, 
    0x18, 0xd, 0x2, 0x8f, 0x90, 0x7, 0x4, 0x2, 0x2, 0x90, 0x92, 0x5, 0x18, 
    0xd, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x13, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x97, 0x7, 0x9, 0x2, 0x2, 0x97, 0x9c, 0x5, 0x26, 0x14, 0x2, 0x98, 0x99, 
    0x7, 0x4, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x26, 0x14, 0x2, 0x9a, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0xa, 0x2, 0x2, 
    0xa0, 0xa1, 0x5, 0x18, 0xd, 0x2, 0xa1, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa3, 0x5, 0x1a, 0xe, 0x2, 0xa3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 
    0x8, 0xe, 0x1, 0x2, 0xa5, 0xa9, 0x5, 0x1c, 0xf, 0x2, 0xa6, 0xa7, 0x7, 
    0x19, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x1a, 0xe, 0x4, 0xa8, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xab, 0xc, 0x3, 0x2, 0x2, 0xab, 0xac, 0x9, 0x2, 0x2, 0x2, 
    0xac, 0xae, 0x5, 0x1a, 0xe, 0x4, 0xad, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb3, 0x8, 0xf, 0x1, 0x2, 0xb3, 0xb7, 0x5, 0x1e, 
    0x10, 0x2, 0xb4, 0xb5, 0x7, 0x24, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x1c, 0xf, 
    0x6, 0xb6, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0xc, 0x5, 0x2, 0x2, 0xb9, 
    0xba, 0x9, 0x3, 0x2, 0x2, 0xba, 0xc3, 0x5, 0x1c, 0xf, 0x6, 0xbb, 0xbc, 
    0xc, 0x4, 0x2, 0x2, 0xbc, 0xbd, 0x9, 0x4, 0x2, 0x2, 0xbd, 0xc3, 0x5, 
    0x1c, 0xf, 0x5, 0xbe, 0xbf, 0xc, 0x3, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0x2a, 
    0x16, 0x2, 0xc0, 0xc1, 0x5, 0x1c, 0xf, 0x4, 0xc1, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc2, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xce, 0x5, 
    0x24, 0x13, 0x2, 0xc8, 0xce, 0x5, 0x20, 0x11, 0x2, 0xc9, 0xca, 0x7, 
    0x3, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x18, 0xd, 0x2, 0xcb, 0xcc, 0x7, 0x5, 
    0x2, 0x2, 0xcc, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd3, 0x7, 0x28, 0x2, 0x2, 0xd0, 
    0xd3, 0x5, 0x30, 0x19, 0x2, 0xd1, 0xd3, 0x5, 0x2e, 0x18, 0x2, 0xd2, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 
    0x2b, 0x2, 0x2, 0xd5, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x5, 0x26, 
    0x14, 0x2, 0xd7, 0xd8, 0x7, 0x7, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x28, 0x15, 
    0x2, 0xd9, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdc, 0x5, 0x28, 0x15, 0x2, 
    0xdb, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe3, 0x5, 0x28, 0x15, 0x2, 0xde, 0xdf, 
    0x5, 0x28, 0x15, 0x2, 0xdf, 0xe0, 0x7, 0x16, 0x2, 0x2, 0xe0, 0xe1, 0x5, 
    0x28, 0x15, 0x2, 0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xdd, 0x3, 0x2, 
    0x2, 0x2, 0xe2, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe3, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xe4, 0xe5, 0x7, 0x2b, 0x2, 0x2, 0xe5, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0xe6, 0xe7, 0x9, 0x5, 0x2, 0x2, 0xe7, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0xe9, 0x9, 0x6, 0x2, 0x2, 0xe9, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 
    0x9, 0x7, 0x2, 0x2, 0xeb, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xec, 0xee, 0x7, 
    0x24, 0x2, 0x2, 0xed, 0xec, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf5, 0x7, 0x2a, 0x2, 
    0x2, 0xf0, 0xf2, 0x7, 0x24, 0x2, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf5, 0x7, 0x29, 0x2, 0x2, 0xf4, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf5, 0x31, 0x3, 0x2, 0x2, 0x2, 0x19, 0x3a, 0x48, 
    0x4d, 0x57, 0x60, 0x6c, 0x76, 0x7d, 0x8b, 0x93, 0x9c, 0xa8, 0xaf, 0xb6, 
    0xc2, 0xc4, 0xcd, 0xd2, 0xdb, 0xe2, 0xed, 0xf1, 0xf4, 
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
