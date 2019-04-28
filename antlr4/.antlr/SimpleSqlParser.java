// Generated from /home/francis/File/Code/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class SimpleSqlParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, SELECT=6, FROM=7, WHERE=8, INSERT=9, 
		INTO=10, VALUES=11, DELETE=12, CREATE=13, TABLE=14, INDEX=15, ON=16, AS=17, 
		OR=18, AND=19, NOT=20, TRUE_=21, FALSE_=22, EQ=23, NSEQ=24, NEQ=25, NEQJ=26, 
		LT=27, LTE=28, GT=29, GTE=30, PLUS=31, MINUS=32, ASTERISK=33, SLASH=34, 
		PERCENT=35, DIV=36, TILDE=37, AMPERSAND=38, PIPE=39, HAT=40, STRING=41, 
		DOUBLE_LITERAL=42, BIGINT_LITERAL=43, INTEGER_LITERAL=44, SMALLINT_LITERAL=45, 
		IDENTIFIER=46, WS=47;
	public static final int
		RULE_singleStatement = 0, RULE_statement = 1, RULE_createStatement = 2, 
		RULE_indexClause = 3, RULE_deleteStatement = 4, RULE_insertStatement = 5, 
		RULE_selectStatement = 6, RULE_selectClause = 7, RULE_fromCluse = 8, RULE_whereCluse = 9, 
		RULE_expression = 10, RULE_booleanExpression = 11, RULE_valueExpression = 12, 
		RULE_primaryExpression = 13, RULE_constant = 14, RULE_dataType = 15, RULE_columnIdentifier = 16, 
		RULE_tableIdentifier = 17, RULE_identifier = 18, RULE_comparisonOperator = 19, 
		RULE_predicateOperator = 20, RULE_booleanValue = 21, RULE_number = 22;
	public static final String[] ruleNames = {
		"singleStatement", "statement", "createStatement", "indexClause", "deleteStatement", 
		"insertStatement", "selectStatement", "selectClause", "fromCluse", "whereCluse", 
		"expression", "booleanExpression", "valueExpression", "primaryExpression", 
		"constant", "dataType", "columnIdentifier", "tableIdentifier", "identifier", 
		"comparisonOperator", "predicateOperator", "booleanValue", "number"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "','", "')'", "',('", "'.'", "'SELECT'", "'FROM'", "'WHERE'", 
		"'INSERT'", "'INTO'", "'VALUES'", "'DELETE'", "'CREATE'", "'TABLE'", "'INDEX'", 
		"'ON'", "'AS'", "'OR'", "'AND'", "'NOT'", "'TRUE'", "'FALSE'", null, "'<=>'", 
		"'<>'", "'!='", "'<'", null, "'>'", null, "'+'", "'-'", "'*'", "'/'", 
		"'%'", "'DIV'", "'~'", "'&'", "'|'", "'^'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, "SELECT", "FROM", "WHERE", "INSERT", 
		"INTO", "VALUES", "DELETE", "CREATE", "TABLE", "INDEX", "ON", "AS", "OR", 
		"AND", "NOT", "TRUE_", "FALSE_", "EQ", "NSEQ", "NEQ", "NEQJ", "LT", "LTE", 
		"GT", "GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "DIV", "TILDE", 
		"AMPERSAND", "PIPE", "HAT", "STRING", "DOUBLE_LITERAL", "BIGINT_LITERAL", 
		"INTEGER_LITERAL", "SMALLINT_LITERAL", "IDENTIFIER", "WS"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "SimpleSql.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public SimpleSqlParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class SingleStatementContext extends ParserRuleContext {
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public TerminalNode EOF() { return getToken(SimpleSqlParser.EOF, 0); }
		public SingleStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_singleStatement; }
	}

	public final SingleStatementContext singleStatement() throws RecognitionException {
		SingleStatementContext _localctx = new SingleStatementContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_singleStatement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(46);
			statement();
			setState(47);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class InsertValueStatementContext extends StatementContext {
		public InsertStatementContext insertStatement() {
			return getRuleContext(InsertStatementContext.class,0);
		}
		public InsertValueStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class DeleteValueStatementContext extends StatementContext {
		public DeleteStatementContext deleteStatement() {
			return getRuleContext(DeleteStatementContext.class,0);
		}
		public DeleteValueStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class CreateTableStatementContext extends StatementContext {
		public CreateStatementContext createStatement() {
			return getRuleContext(CreateStatementContext.class,0);
		}
		public CreateTableStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class QueryStatementContext extends StatementContext {
		public SelectStatementContext selectStatement() {
			return getRuleContext(SelectStatementContext.class,0);
		}
		public QueryStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		try {
			setState(53);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CREATE:
				_localctx = new CreateTableStatementContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(49);
				createStatement();
				}
				break;
			case DELETE:
				_localctx = new DeleteValueStatementContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(50);
				deleteStatement();
				}
				break;
			case INSERT:
				_localctx = new InsertValueStatementContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(51);
				insertStatement();
				}
				break;
			case SELECT:
				_localctx = new QueryStatementContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(52);
				selectStatement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CreateStatementContext extends ParserRuleContext {
		public TableIdentifierContext tablenName;
		public TerminalNode CREATE() { return getToken(SimpleSqlParser.CREATE, 0); }
		public TerminalNode TABLE() { return getToken(SimpleSqlParser.TABLE, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public List<DataTypeContext> dataType() {
			return getRuleContexts(DataTypeContext.class);
		}
		public DataTypeContext dataType(int i) {
			return getRuleContext(DataTypeContext.class,i);
		}
		public TableIdentifierContext tableIdentifier() {
			return getRuleContext(TableIdentifierContext.class,0);
		}
		public CreateStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_createStatement; }
	}

	public final CreateStatementContext createStatement() throws RecognitionException {
		CreateStatementContext _localctx = new CreateStatementContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_createStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(55);
			match(CREATE);
			setState(56);
			match(TABLE);
			setState(57);
			((CreateStatementContext)_localctx).tablenName = tableIdentifier();
			setState(58);
			match(T__0);
			setState(59);
			identifier();
			setState(60);
			dataType();
			setState(67);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(61);
				match(T__1);
				setState(62);
				identifier();
				setState(63);
				dataType();
				}
				}
				setState(69);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(70);
			match(T__2);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IndexClauseContext extends ParserRuleContext {
		public TerminalNode INDEX() { return getToken(SimpleSqlParser.INDEX, 0); }
		public TerminalNode ON() { return getToken(SimpleSqlParser.ON, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public IndexClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_indexClause; }
	}

	public final IndexClauseContext indexClause() throws RecognitionException {
		IndexClauseContext _localctx = new IndexClauseContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_indexClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(72);
			match(INDEX);
			setState(73);
			match(ON);
			setState(74);
			match(T__0);
			setState(75);
			identifier();
			setState(80);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(76);
				match(T__1);
				setState(77);
				identifier();
				}
				}
				setState(82);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(83);
			match(T__2);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeleteStatementContext extends ParserRuleContext {
		public TableIdentifierContext tablenName;
		public TerminalNode DELETE() { return getToken(SimpleSqlParser.DELETE, 0); }
		public TerminalNode FROM() { return getToken(SimpleSqlParser.FROM, 0); }
		public TableIdentifierContext tableIdentifier() {
			return getRuleContext(TableIdentifierContext.class,0);
		}
		public WhereCluseContext whereCluse() {
			return getRuleContext(WhereCluseContext.class,0);
		}
		public DeleteStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_deleteStatement; }
	}

	public final DeleteStatementContext deleteStatement() throws RecognitionException {
		DeleteStatementContext _localctx = new DeleteStatementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_deleteStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(85);
			match(DELETE);
			setState(86);
			match(FROM);
			setState(87);
			((DeleteStatementContext)_localctx).tablenName = tableIdentifier();
			setState(89);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(88);
				whereCluse();
				}
			}

			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InsertStatementContext extends ParserRuleContext {
		public TableIdentifierContext tableName;
		public TerminalNode INSERT() { return getToken(SimpleSqlParser.INSERT, 0); }
		public TerminalNode INTO() { return getToken(SimpleSqlParser.INTO, 0); }
		public TerminalNode VALUES() { return getToken(SimpleSqlParser.VALUES, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TableIdentifierContext tableIdentifier() {
			return getRuleContext(TableIdentifierContext.class,0);
		}
		public InsertStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_insertStatement; }
	}

	public final InsertStatementContext insertStatement() throws RecognitionException {
		InsertStatementContext _localctx = new InsertStatementContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_insertStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(91);
			match(INSERT);
			setState(92);
			match(INTO);
			setState(93);
			((InsertStatementContext)_localctx).tableName = tableIdentifier();
			setState(94);
			match(VALUES);
			setState(95);
			match(T__0);
			setState(96);
			expression();
			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(97);
				match(T__1);
				setState(98);
				expression();
				}
				}
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(104);
			match(T__2);
			setState(118);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(105);
				match(T__3);
				setState(106);
				expression();
				setState(111);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__1) {
					{
					{
					setState(107);
					match(T__1);
					setState(108);
					expression();
					}
					}
					setState(113);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(114);
				match(T__2);
				}
				}
				setState(120);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectStatementContext extends ParserRuleContext {
		public SelectClauseContext selectClause() {
			return getRuleContext(SelectClauseContext.class,0);
		}
		public FromCluseContext fromCluse() {
			return getRuleContext(FromCluseContext.class,0);
		}
		public WhereCluseContext whereCluse() {
			return getRuleContext(WhereCluseContext.class,0);
		}
		public SelectStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectStatement; }
	}

	public final SelectStatementContext selectStatement() throws RecognitionException {
		SelectStatementContext _localctx = new SelectStatementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_selectStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(121);
			selectClause();
			setState(122);
			fromCluse();
			setState(124);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(123);
				whereCluse();
				}
			}

			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SelectClauseContext extends ParserRuleContext {
		public TerminalNode SELECT() { return getToken(SimpleSqlParser.SELECT, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public SelectClauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_selectClause; }
	}

	public final SelectClauseContext selectClause() throws RecognitionException {
		SelectClauseContext _localctx = new SelectClauseContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_selectClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			match(SELECT);
			setState(127);
			expression();
			setState(132);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(128);
				match(T__1);
				setState(129);
				expression();
				}
				}
				setState(134);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class FromCluseContext extends ParserRuleContext {
		public TerminalNode FROM() { return getToken(SimpleSqlParser.FROM, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public FromCluseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fromCluse; }
	}

	public final FromCluseContext fromCluse() throws RecognitionException {
		FromCluseContext _localctx = new FromCluseContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_fromCluse);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			match(FROM);
			setState(136);
			identifier();
			setState(141);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(137);
				match(T__1);
				setState(138);
				identifier();
				}
				}
				setState(143);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhereCluseContext extends ParserRuleContext {
		public TerminalNode WHERE() { return getToken(SimpleSqlParser.WHERE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public WhereCluseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whereCluse; }
	}

	public final WhereCluseContext whereCluse() throws RecognitionException {
		WhereCluseContext _localctx = new WhereCluseContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_whereCluse);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(144);
			match(WHERE);
			setState(145);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public BooleanExpressionContext booleanExpression() {
			return getRuleContext(BooleanExpressionContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(147);
			booleanExpression(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BooleanExpressionContext extends ParserRuleContext {
		public BooleanExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanExpression; }
	 
		public BooleanExpressionContext() { }
		public void copyFrom(BooleanExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class LogicalNotContext extends BooleanExpressionContext {
		public TerminalNode NOT() { return getToken(SimpleSqlParser.NOT, 0); }
		public BooleanExpressionContext booleanExpression() {
			return getRuleContext(BooleanExpressionContext.class,0);
		}
		public LogicalNotContext(BooleanExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class BooleanExpressionDefauleContext extends BooleanExpressionContext {
		public ValueExpressionContext valueExpression() {
			return getRuleContext(ValueExpressionContext.class,0);
		}
		public BooleanExpressionDefauleContext(BooleanExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class LogicalBinaryContext extends BooleanExpressionContext {
		public BooleanExpressionContext left;
		public Token opt;
		public BooleanExpressionContext right;
		public List<BooleanExpressionContext> booleanExpression() {
			return getRuleContexts(BooleanExpressionContext.class);
		}
		public BooleanExpressionContext booleanExpression(int i) {
			return getRuleContext(BooleanExpressionContext.class,i);
		}
		public TerminalNode AND() { return getToken(SimpleSqlParser.AND, 0); }
		public TerminalNode OR() { return getToken(SimpleSqlParser.OR, 0); }
		public LogicalBinaryContext(BooleanExpressionContext ctx) { copyFrom(ctx); }
	}

	public final BooleanExpressionContext booleanExpression() throws RecognitionException {
		return booleanExpression(0);
	}

	private BooleanExpressionContext booleanExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		BooleanExpressionContext _localctx = new BooleanExpressionContext(_ctx, _parentState);
		BooleanExpressionContext _prevctx = _localctx;
		int _startState = 22;
		enterRecursionRule(_localctx, 22, RULE_booleanExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(153);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TRUE_:
			case FALSE_:
			case MINUS:
			case TILDE:
			case HAT:
			case STRING:
			case DOUBLE_LITERAL:
			case BIGINT_LITERAL:
			case INTEGER_LITERAL:
			case SMALLINT_LITERAL:
			case IDENTIFIER:
				{
				_localctx = new BooleanExpressionDefauleContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(150);
				valueExpression(0);
				}
				break;
			case NOT:
				{
				_localctx = new LogicalNotContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(151);
				match(NOT);
				setState(152);
				booleanExpression(2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(160);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalBinaryContext(new BooleanExpressionContext(_parentctx, _parentState));
					((LogicalBinaryContext)_localctx).left = _prevctx;
					pushNewRecursionContext(_localctx, _startState, RULE_booleanExpression);
					setState(155);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(156);
					((LogicalBinaryContext)_localctx).opt = _input.LT(1);
					_la = _input.LA(1);
					if ( !(_la==OR || _la==AND) ) {
						((LogicalBinaryContext)_localctx).opt = (Token)_errHandler.recoverInline(this);
					}
					else {
						if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
						_errHandler.reportMatch(this);
						consume();
					}
					setState(157);
					((LogicalBinaryContext)_localctx).right = booleanExpression(2);
					}
					} 
				}
				setState(162);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ValueExpressionContext extends ParserRuleContext {
		public ValueExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_valueExpression; }
	 
		public ValueExpressionContext() { }
		public void copyFrom(ValueExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ValueExpressionDefaultContext extends ValueExpressionContext {
		public PrimaryExpressionContext primaryExpression() {
			return getRuleContext(PrimaryExpressionContext.class,0);
		}
		public ValueExpressionDefaultContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ComparisonContext extends ValueExpressionContext {
		public ValueExpressionContext left;
		public ValueExpressionContext right;
		public ComparisonOperatorContext comparisonOperator() {
			return getRuleContext(ComparisonOperatorContext.class,0);
		}
		public List<ValueExpressionContext> valueExpression() {
			return getRuleContexts(ValueExpressionContext.class);
		}
		public ValueExpressionContext valueExpression(int i) {
			return getRuleContext(ValueExpressionContext.class,i);
		}
		public ComparisonContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ArithmeticBinaryContext extends ValueExpressionContext {
		public ValueExpressionContext left;
		public Token opt;
		public ValueExpressionContext right;
		public List<ValueExpressionContext> valueExpression() {
			return getRuleContexts(ValueExpressionContext.class);
		}
		public ValueExpressionContext valueExpression(int i) {
			return getRuleContext(ValueExpressionContext.class,i);
		}
		public TerminalNode PLUS() { return getToken(SimpleSqlParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public TerminalNode ASTERISK() { return getToken(SimpleSqlParser.ASTERISK, 0); }
		public TerminalNode SLASH() { return getToken(SimpleSqlParser.SLASH, 0); }
		public TerminalNode PERCENT() { return getToken(SimpleSqlParser.PERCENT, 0); }
		public TerminalNode DIV() { return getToken(SimpleSqlParser.DIV, 0); }
		public TerminalNode AMPERSAND() { return getToken(SimpleSqlParser.AMPERSAND, 0); }
		public TerminalNode PIPE() { return getToken(SimpleSqlParser.PIPE, 0); }
		public ArithmeticBinaryContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ArithmeticUnaryContext extends ValueExpressionContext {
		public Token opt;
		public ValueExpressionContext valueExpression() {
			return getRuleContext(ValueExpressionContext.class,0);
		}
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public TerminalNode TILDE() { return getToken(SimpleSqlParser.TILDE, 0); }
		public TerminalNode HAT() { return getToken(SimpleSqlParser.HAT, 0); }
		public ArithmeticUnaryContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}

	public final ValueExpressionContext valueExpression() throws RecognitionException {
		return valueExpression(0);
	}

	private ValueExpressionContext valueExpression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ValueExpressionContext _localctx = new ValueExpressionContext(_ctx, _parentState);
		ValueExpressionContext _prevctx = _localctx;
		int _startState = 24;
		enterRecursionRule(_localctx, 24, RULE_valueExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(167);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				{
				_localctx = new ValueExpressionDefaultContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(164);
				primaryExpression();
				}
				break;
			case 2:
				{
				_localctx = new ArithmeticUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(165);
				((ArithmeticUnaryContext)_localctx).opt = _input.LT(1);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << MINUS) | (1L << TILDE) | (1L << HAT))) != 0)) ) {
					((ArithmeticUnaryContext)_localctx).opt = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(166);
				valueExpression(2);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(184);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(182);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(169);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(170);
						((ArithmeticBinaryContext)_localctx).opt = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << PLUS) | (1L << MINUS) | (1L << ASTERISK) | (1L << SLASH))) != 0)) ) {
							((ArithmeticBinaryContext)_localctx).opt = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(171);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(6);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(172);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(173);
						((ArithmeticBinaryContext)_localctx).opt = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PERCENT || _la==DIV) ) {
							((ArithmeticBinaryContext)_localctx).opt = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(174);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(5);
						}
						break;
					case 3:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(175);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(176);
						((ArithmeticBinaryContext)_localctx).opt = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==AMPERSAND || _la==PIPE) ) {
							((ArithmeticBinaryContext)_localctx).opt = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(177);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(4);
						}
						break;
					case 4:
						{
						_localctx = new ComparisonContext(new ValueExpressionContext(_parentctx, _parentState));
						((ComparisonContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(178);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(179);
						comparisonOperator();
						setState(180);
						((ComparisonContext)_localctx).right = valueExpression(2);
						}
						break;
					}
					} 
				}
				setState(186);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,14,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class PrimaryExpressionContext extends ParserRuleContext {
		public PrimaryExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_primaryExpression; }
	 
		public PrimaryExpressionContext() { }
		public void copyFrom(PrimaryExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ColumnReferenceContext extends PrimaryExpressionContext {
		public ColumnIdentifierContext columnIdentifier() {
			return getRuleContext(ColumnIdentifierContext.class,0);
		}
		public ColumnReferenceContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ConstantValueContext extends PrimaryExpressionContext {
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public ConstantValueContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}

	public final PrimaryExpressionContext primaryExpression() throws RecognitionException {
		PrimaryExpressionContext _localctx = new PrimaryExpressionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_primaryExpression);
		try {
			setState(189);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENTIFIER:
				_localctx = new ColumnReferenceContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(187);
				columnIdentifier();
				}
				break;
			case TRUE_:
			case FALSE_:
			case MINUS:
			case STRING:
			case DOUBLE_LITERAL:
			case BIGINT_LITERAL:
			case INTEGER_LITERAL:
			case SMALLINT_LITERAL:
				_localctx = new ConstantValueContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(188);
				constant();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConstantContext extends ParserRuleContext {
		public ConstantContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_constant; }
	 
		public ConstantContext() { }
		public void copyFrom(ConstantContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class StringLiteralContext extends ConstantContext {
		public List<TerminalNode> STRING() { return getTokens(SimpleSqlParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(SimpleSqlParser.STRING, i);
		}
		public StringLiteralContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class BooleanLiteralContext extends ConstantContext {
		public BooleanValueContext booleanValue() {
			return getRuleContext(BooleanValueContext.class,0);
		}
		public BooleanLiteralContext(ConstantContext ctx) { copyFrom(ctx); }
	}
	public static class NumberLiteralContext extends ConstantContext {
		public NumberContext number() {
			return getRuleContext(NumberContext.class,0);
		}
		public NumberLiteralContext(ConstantContext ctx) { copyFrom(ctx); }
	}

	public final ConstantContext constant() throws RecognitionException {
		ConstantContext _localctx = new ConstantContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_constant);
		try {
			int _alt;
			setState(198);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING:
				_localctx = new StringLiteralContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(192); 
				_errHandler.sync(this);
				_alt = 1;
				do {
					switch (_alt) {
					case 1:
						{
						{
						setState(191);
						match(STRING);
						}
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					setState(194); 
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
				} while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER );
				}
				break;
			case MINUS:
			case DOUBLE_LITERAL:
			case BIGINT_LITERAL:
			case INTEGER_LITERAL:
			case SMALLINT_LITERAL:
				_localctx = new NumberLiteralContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(196);
				number();
				}
				break;
			case TRUE_:
			case FALSE_:
				_localctx = new BooleanLiteralContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(197);
				booleanValue();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DataTypeContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(SimpleSqlParser.IDENTIFIER, 0); }
		public DataTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dataType; }
	}

	public final DataTypeContext dataType() throws RecognitionException {
		DataTypeContext _localctx = new DataTypeContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_dataType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(200);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ColumnIdentifierContext extends ParserRuleContext {
		public ColumnIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_columnIdentifier; }
	 
		public ColumnIdentifierContext() { }
		public void copyFrom(ColumnIdentifierContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ColumnWithoutTableContext extends ColumnIdentifierContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ColumnWithoutTableContext(ColumnIdentifierContext ctx) { copyFrom(ctx); }
	}
	public static class ColumnWithTableContext extends ColumnIdentifierContext {
		public TableIdentifierContext tableIdentifier() {
			return getRuleContext(TableIdentifierContext.class,0);
		}
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public ColumnWithTableContext(ColumnIdentifierContext ctx) { copyFrom(ctx); }
	}

	public final ColumnIdentifierContext columnIdentifier() throws RecognitionException {
		ColumnIdentifierContext _localctx = new ColumnIdentifierContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_columnIdentifier);
		try {
			setState(207);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				_localctx = new ColumnWithTableContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(202);
				tableIdentifier();
				setState(203);
				match(T__4);
				setState(204);
				identifier();
				}
				break;
			case 2:
				_localctx = new ColumnWithoutTableContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(206);
				identifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TableIdentifierContext extends ParserRuleContext {
		public TableIdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_tableIdentifier; }
	 
		public TableIdentifierContext() { }
		public void copyFrom(TableIdentifierContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class TableAliasContext extends TableIdentifierContext {
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public TerminalNode AS() { return getToken(SimpleSqlParser.AS, 0); }
		public TableAliasContext(TableIdentifierContext ctx) { copyFrom(ctx); }
	}
	public static class TableIdentifierDefaultContext extends TableIdentifierContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TableIdentifierDefaultContext(TableIdentifierContext ctx) { copyFrom(ctx); }
	}

	public final TableIdentifierContext tableIdentifier() throws RecognitionException {
		TableIdentifierContext _localctx = new TableIdentifierContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_tableIdentifier);
		try {
			setState(214);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				_localctx = new TableIdentifierDefaultContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(209);
				identifier();
				}
				break;
			case 2:
				_localctx = new TableAliasContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(210);
				identifier();
				setState(211);
				match(AS);
				setState(212);
				identifier();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode IDENTIFIER() { return getToken(SimpleSqlParser.IDENTIFIER, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(216);
			match(IDENTIFIER);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComparisonOperatorContext extends ParserRuleContext {
		public TerminalNode EQ() { return getToken(SimpleSqlParser.EQ, 0); }
		public TerminalNode NEQ() { return getToken(SimpleSqlParser.NEQ, 0); }
		public TerminalNode NEQJ() { return getToken(SimpleSqlParser.NEQJ, 0); }
		public TerminalNode LT() { return getToken(SimpleSqlParser.LT, 0); }
		public TerminalNode LTE() { return getToken(SimpleSqlParser.LTE, 0); }
		public TerminalNode GT() { return getToken(SimpleSqlParser.GT, 0); }
		public TerminalNode GTE() { return getToken(SimpleSqlParser.GTE, 0); }
		public TerminalNode NSEQ() { return getToken(SimpleSqlParser.NSEQ, 0); }
		public ComparisonOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparisonOperator; }
	}

	public final ComparisonOperatorContext comparisonOperator() throws RecognitionException {
		ComparisonOperatorContext _localctx = new ComparisonOperatorContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_comparisonOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(218);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQ) | (1L << NSEQ) | (1L << NEQ) | (1L << NEQJ) | (1L << LT) | (1L << LTE) | (1L << GT) | (1L << GTE))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PredicateOperatorContext extends ParserRuleContext {
		public TerminalNode OR() { return getToken(SimpleSqlParser.OR, 0); }
		public TerminalNode AND() { return getToken(SimpleSqlParser.AND, 0); }
		public TerminalNode NOT() { return getToken(SimpleSqlParser.NOT, 0); }
		public PredicateOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_predicateOperator; }
	}

	public final PredicateOperatorContext predicateOperator() throws RecognitionException {
		PredicateOperatorContext _localctx = new PredicateOperatorContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_predicateOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(220);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << OR) | (1L << AND) | (1L << NOT))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BooleanValueContext extends ParserRuleContext {
		public TerminalNode TRUE_() { return getToken(SimpleSqlParser.TRUE_, 0); }
		public TerminalNode FALSE_() { return getToken(SimpleSqlParser.FALSE_, 0); }
		public BooleanValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_booleanValue; }
	}

	public final BooleanValueContext booleanValue() throws RecognitionException {
		BooleanValueContext _localctx = new BooleanValueContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_booleanValue);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			_la = _input.LA(1);
			if ( !(_la==TRUE_ || _la==FALSE_) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class NumberContext extends ParserRuleContext {
		public NumberContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_number; }
	 
		public NumberContext() { }
		public void copyFrom(NumberContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class BigIntLiteralContext extends NumberContext {
		public TerminalNode BIGINT_LITERAL() { return getToken(SimpleSqlParser.BIGINT_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public BigIntLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class DoubleLiteralContext extends NumberContext {
		public TerminalNode DOUBLE_LITERAL() { return getToken(SimpleSqlParser.DOUBLE_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public DoubleLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class IntegerLiteralContext extends NumberContext {
		public TerminalNode INTEGER_LITERAL() { return getToken(SimpleSqlParser.INTEGER_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public IntegerLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class SmallIntLiteralContext extends NumberContext {
		public TerminalNode SMALLINT_LITERAL() { return getToken(SimpleSqlParser.SMALLINT_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public SmallIntLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_number);
		int _la;
		try {
			setState(240);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				_localctx = new IntegerLiteralContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(225);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(224);
					match(MINUS);
					}
				}

				setState(227);
				match(INTEGER_LITERAL);
				}
				break;
			case 2:
				_localctx = new BigIntLiteralContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(229);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(228);
					match(MINUS);
					}
				}

				setState(231);
				match(BIGINT_LITERAL);
				}
				break;
			case 3:
				_localctx = new SmallIntLiteralContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(233);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(232);
					match(MINUS);
					}
				}

				setState(235);
				match(SMALLINT_LITERAL);
				}
				break;
			case 4:
				_localctx = new DoubleLiteralContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(237);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(236);
					match(MINUS);
					}
				}

				setState(239);
				match(DOUBLE_LITERAL);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 11:
			return booleanExpression_sempred((BooleanExpressionContext)_localctx, predIndex);
		case 12:
			return valueExpression_sempred((ValueExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean booleanExpression_sempred(BooleanExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 1);
		}
		return true;
	}
	private boolean valueExpression_sempred(ValueExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 5);
		case 2:
			return precpred(_ctx, 4);
		case 3:
			return precpred(_ctx, 3);
		case 4:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\61\u00f5\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\3\2\3\2\3"+
		"\2\3\3\3\3\3\3\3\3\5\38\n\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\3\4\7"+
		"\4D\n\4\f\4\16\4G\13\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\7\5Q\n\5\f\5\16"+
		"\5T\13\5\3\5\3\5\3\6\3\6\3\6\3\6\5\6\\\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7"+
		"\3\7\7\7f\n\7\f\7\16\7i\13\7\3\7\3\7\3\7\3\7\3\7\7\7p\n\7\f\7\16\7s\13"+
		"\7\3\7\3\7\7\7w\n\7\f\7\16\7z\13\7\3\b\3\b\3\b\5\b\177\n\b\3\t\3\t\3\t"+
		"\3\t\7\t\u0085\n\t\f\t\16\t\u0088\13\t\3\n\3\n\3\n\3\n\7\n\u008e\n\n\f"+
		"\n\16\n\u0091\13\n\3\13\3\13\3\13\3\f\3\f\3\r\3\r\3\r\3\r\5\r\u009c\n"+
		"\r\3\r\3\r\3\r\7\r\u00a1\n\r\f\r\16\r\u00a4\13\r\3\16\3\16\3\16\3\16\5"+
		"\16\u00aa\n\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\7\16\u00b9\n\16\f\16\16\16\u00bc\13\16\3\17\3\17\5\17\u00c0"+
		"\n\17\3\20\6\20\u00c3\n\20\r\20\16\20\u00c4\3\20\3\20\5\20\u00c9\n\20"+
		"\3\21\3\21\3\22\3\22\3\22\3\22\3\22\5\22\u00d2\n\22\3\23\3\23\3\23\3\23"+
		"\3\23\5\23\u00d9\n\23\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\30\5\30"+
		"\u00e4\n\30\3\30\3\30\5\30\u00e8\n\30\3\30\3\30\5\30\u00ec\n\30\3\30\3"+
		"\30\5\30\u00f0\n\30\3\30\5\30\u00f3\n\30\3\30\2\4\30\32\31\2\4\6\b\n\f"+
		"\16\20\22\24\26\30\32\34\36 \"$&(*,.\2\n\3\2\24\25\5\2\"\"\'\'**\3\2!"+
		"$\3\2%&\3\2()\3\2\31 \3\2\24\26\3\2\27\30\2\u00fd\2\60\3\2\2\2\4\67\3"+
		"\2\2\2\69\3\2\2\2\bJ\3\2\2\2\nW\3\2\2\2\f]\3\2\2\2\16{\3\2\2\2\20\u0080"+
		"\3\2\2\2\22\u0089\3\2\2\2\24\u0092\3\2\2\2\26\u0095\3\2\2\2\30\u009b\3"+
		"\2\2\2\32\u00a9\3\2\2\2\34\u00bf\3\2\2\2\36\u00c8\3\2\2\2 \u00ca\3\2\2"+
		"\2\"\u00d1\3\2\2\2$\u00d8\3\2\2\2&\u00da\3\2\2\2(\u00dc\3\2\2\2*\u00de"+
		"\3\2\2\2,\u00e0\3\2\2\2.\u00f2\3\2\2\2\60\61\5\4\3\2\61\62\7\2\2\3\62"+
		"\3\3\2\2\2\638\5\6\4\2\648\5\n\6\2\658\5\f\7\2\668\5\16\b\2\67\63\3\2"+
		"\2\2\67\64\3\2\2\2\67\65\3\2\2\2\67\66\3\2\2\28\5\3\2\2\29:\7\17\2\2:"+
		";\7\20\2\2;<\5$\23\2<=\7\3\2\2=>\5&\24\2>E\5 \21\2?@\7\4\2\2@A\5&\24\2"+
		"AB\5 \21\2BD\3\2\2\2C?\3\2\2\2DG\3\2\2\2EC\3\2\2\2EF\3\2\2\2FH\3\2\2\2"+
		"GE\3\2\2\2HI\7\5\2\2I\7\3\2\2\2JK\7\21\2\2KL\7\22\2\2LM\7\3\2\2MR\5&\24"+
		"\2NO\7\4\2\2OQ\5&\24\2PN\3\2\2\2QT\3\2\2\2RP\3\2\2\2RS\3\2\2\2SU\3\2\2"+
		"\2TR\3\2\2\2UV\7\5\2\2V\t\3\2\2\2WX\7\16\2\2XY\7\t\2\2Y[\5$\23\2Z\\\5"+
		"\24\13\2[Z\3\2\2\2[\\\3\2\2\2\\\13\3\2\2\2]^\7\13\2\2^_\7\f\2\2_`\5$\23"+
		"\2`a\7\r\2\2ab\7\3\2\2bg\5\26\f\2cd\7\4\2\2df\5\26\f\2ec\3\2\2\2fi\3\2"+
		"\2\2ge\3\2\2\2gh\3\2\2\2hj\3\2\2\2ig\3\2\2\2jx\7\5\2\2kl\7\6\2\2lq\5\26"+
		"\f\2mn\7\4\2\2np\5\26\f\2om\3\2\2\2ps\3\2\2\2qo\3\2\2\2qr\3\2\2\2rt\3"+
		"\2\2\2sq\3\2\2\2tu\7\5\2\2uw\3\2\2\2vk\3\2\2\2wz\3\2\2\2xv\3\2\2\2xy\3"+
		"\2\2\2y\r\3\2\2\2zx\3\2\2\2{|\5\20\t\2|~\5\22\n\2}\177\5\24\13\2~}\3\2"+
		"\2\2~\177\3\2\2\2\177\17\3\2\2\2\u0080\u0081\7\b\2\2\u0081\u0086\5\26"+
		"\f\2\u0082\u0083\7\4\2\2\u0083\u0085\5\26\f\2\u0084\u0082\3\2\2\2\u0085"+
		"\u0088\3\2\2\2\u0086\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087\21\3\2\2"+
		"\2\u0088\u0086\3\2\2\2\u0089\u008a\7\t\2\2\u008a\u008f\5&\24\2\u008b\u008c"+
		"\7\4\2\2\u008c\u008e\5&\24\2\u008d\u008b\3\2\2\2\u008e\u0091\3\2\2\2\u008f"+
		"\u008d\3\2\2\2\u008f\u0090\3\2\2\2\u0090\23\3\2\2\2\u0091\u008f\3\2\2"+
		"\2\u0092\u0093\7\n\2\2\u0093\u0094\5\26\f\2\u0094\25\3\2\2\2\u0095\u0096"+
		"\5\30\r\2\u0096\27\3\2\2\2\u0097\u0098\b\r\1\2\u0098\u009c\5\32\16\2\u0099"+
		"\u009a\7\26\2\2\u009a\u009c\5\30\r\4\u009b\u0097\3\2\2\2\u009b\u0099\3"+
		"\2\2\2\u009c\u00a2\3\2\2\2\u009d\u009e\f\3\2\2\u009e\u009f\t\2\2\2\u009f"+
		"\u00a1\5\30\r\4\u00a0\u009d\3\2\2\2\u00a1\u00a4\3\2\2\2\u00a2\u00a0\3"+
		"\2\2\2\u00a2\u00a3\3\2\2\2\u00a3\31\3\2\2\2\u00a4\u00a2\3\2\2\2\u00a5"+
		"\u00a6\b\16\1\2\u00a6\u00aa\5\34\17\2\u00a7\u00a8\t\3\2\2\u00a8\u00aa"+
		"\5\32\16\4\u00a9\u00a5\3\2\2\2\u00a9\u00a7\3\2\2\2\u00aa\u00ba\3\2\2\2"+
		"\u00ab\u00ac\f\7\2\2\u00ac\u00ad\t\4\2\2\u00ad\u00b9\5\32\16\b\u00ae\u00af"+
		"\f\6\2\2\u00af\u00b0\t\5\2\2\u00b0\u00b9\5\32\16\7\u00b1\u00b2\f\5\2\2"+
		"\u00b2\u00b3\t\6\2\2\u00b3\u00b9\5\32\16\6\u00b4\u00b5\f\3\2\2\u00b5\u00b6"+
		"\5(\25\2\u00b6\u00b7\5\32\16\4\u00b7\u00b9\3\2\2\2\u00b8\u00ab\3\2\2\2"+
		"\u00b8\u00ae\3\2\2\2\u00b8\u00b1\3\2\2\2\u00b8\u00b4\3\2\2\2\u00b9\u00bc"+
		"\3\2\2\2\u00ba\u00b8\3\2\2\2\u00ba\u00bb\3\2\2\2\u00bb\33\3\2\2\2\u00bc"+
		"\u00ba\3\2\2\2\u00bd\u00c0\5\"\22\2\u00be\u00c0\5\36\20\2\u00bf\u00bd"+
		"\3\2\2\2\u00bf\u00be\3\2\2\2\u00c0\35\3\2\2\2\u00c1\u00c3\7+\2\2\u00c2"+
		"\u00c1\3\2\2\2\u00c3\u00c4\3\2\2\2\u00c4\u00c2\3\2\2\2\u00c4\u00c5\3\2"+
		"\2\2\u00c5\u00c9\3\2\2\2\u00c6\u00c9\5.\30\2\u00c7\u00c9\5,\27\2\u00c8"+
		"\u00c2\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c8\u00c7\3\2\2\2\u00c9\37\3\2\2"+
		"\2\u00ca\u00cb\7\60\2\2\u00cb!\3\2\2\2\u00cc\u00cd\5$\23\2\u00cd\u00ce"+
		"\7\7\2\2\u00ce\u00cf\5&\24\2\u00cf\u00d2\3\2\2\2\u00d0\u00d2\5&\24\2\u00d1"+
		"\u00cc\3\2\2\2\u00d1\u00d0\3\2\2\2\u00d2#\3\2\2\2\u00d3\u00d9\5&\24\2"+
		"\u00d4\u00d5\5&\24\2\u00d5\u00d6\7\23\2\2\u00d6\u00d7\5&\24\2\u00d7\u00d9"+
		"\3\2\2\2\u00d8\u00d3\3\2\2\2\u00d8\u00d4\3\2\2\2\u00d9%\3\2\2\2\u00da"+
		"\u00db\7\60\2\2\u00db\'\3\2\2\2\u00dc\u00dd\t\7\2\2\u00dd)\3\2\2\2\u00de"+
		"\u00df\t\b\2\2\u00df+\3\2\2\2\u00e0\u00e1\t\t\2\2\u00e1-\3\2\2\2\u00e2"+
		"\u00e4\7\"\2\2\u00e3\u00e2\3\2\2\2\u00e3\u00e4\3\2\2\2\u00e4\u00e5\3\2"+
		"\2\2\u00e5\u00f3\7.\2\2\u00e6\u00e8\7\"\2\2\u00e7\u00e6\3\2\2\2\u00e7"+
		"\u00e8\3\2\2\2\u00e8\u00e9\3\2\2\2\u00e9\u00f3\7-\2\2\u00ea\u00ec\7\""+
		"\2\2\u00eb\u00ea\3\2\2\2\u00eb\u00ec\3\2\2\2\u00ec\u00ed\3\2\2\2\u00ed"+
		"\u00f3\7/\2\2\u00ee\u00f0\7\"\2\2\u00ef\u00ee\3\2\2\2\u00ef\u00f0\3\2"+
		"\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f3\7,\2\2\u00f2\u00e3\3\2\2\2\u00f2"+
		"\u00e7\3\2\2\2\u00f2\u00eb\3\2\2\2\u00f2\u00ef\3\2\2\2\u00f3/\3\2\2\2"+
		"\33\67ER[gqx~\u0086\u008f\u009b\u00a2\u00a9\u00b8\u00ba\u00bf\u00c4\u00c8"+
		"\u00d1\u00d8\u00e3\u00e7\u00eb\u00ef\u00f2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}