// Generated from /home/francis/Git/francis/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.1
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
		T__0=1, T__1=2, T__2=3, T__3=4, SELECT=5, FROM=6, WHERE=7, INSERT=8, INTO=9, 
		VALUES=10, DELETE=11, CREATE=12, COPY=13, DELIMITER=14, CSV=15, HEADER=16, 
		TABLE=17, INDEX=18, ON=19, AS=20, OR=21, AND=22, NOT=23, TRUE_=24, FALSE_=25, 
		EQ=26, NEQ=27, NEQJ=28, LT=29, LTE=30, GT=31, GTE=32, PLUS=33, MINUS=34, 
		ASTERISK=35, SLASH=36, PERCENT=37, STRING=38, FLOAT_LITERAL=39, INTEGER_LITERAL=40, 
		IDENTIFIER=41, WS=42;
	public static final int
		RULE_singleStatement = 0, RULE_statement = 1, RULE_createStatement = 2, 
		RULE_indexClause = 3, RULE_deleteStatement = 4, RULE_insertStatement = 5, 
		RULE_copyStatement = 6, RULE_selectStatement = 7, RULE_selectClause = 8, 
		RULE_fromCluse = 9, RULE_whereCluse = 10, RULE_expressionStruct = 11, 
		RULE_expression = 12, RULE_booleanExpression = 13, RULE_valueExpression = 14, 
		RULE_primaryExpression = 15, RULE_constant = 16, RULE_dataType = 17, RULE_columnIdentifier = 18, 
		RULE_tableIdentifier = 19, RULE_identifier = 20, RULE_comparisonOperator = 21, 
		RULE_predicateOperator = 22, RULE_booleanValue = 23, RULE_number = 24;
	public static final String[] ruleNames = {
		"singleStatement", "statement", "createStatement", "indexClause", "deleteStatement", 
		"insertStatement", "copyStatement", "selectStatement", "selectClause", 
		"fromCluse", "whereCluse", "expressionStruct", "expression", "booleanExpression", 
		"valueExpression", "primaryExpression", "constant", "dataType", "columnIdentifier", 
		"tableIdentifier", "identifier", "comparisonOperator", "predicateOperator", 
		"booleanValue", "number"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "','", "')'", "'.'", "'SELECT'", "'FROM'", "'WHERE'", "'INSERT'", 
		"'INTO'", "'VALUES'", "'DELETE'", "'CREATE'", "'COPY'", "'DELIMITER'", 
		"'CSV'", "'HEADER'", "'TABLE'", "'INDEX'", "'ON'", "'AS'", "'OR'", "'AND'", 
		"'NOT'", "'TRUE'", "'FALSE'", null, "'<>'", "'!='", "'<'", null, "'>'", 
		null, "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, "SELECT", "FROM", "WHERE", "INSERT", "INTO", 
		"VALUES", "DELETE", "CREATE", "COPY", "DELIMITER", "CSV", "HEADER", "TABLE", 
		"INDEX", "ON", "AS", "OR", "AND", "NOT", "TRUE_", "FALSE_", "EQ", "NEQ", 
		"NEQJ", "LT", "LTE", "GT", "GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", 
		"PERCENT", "STRING", "FLOAT_LITERAL", "INTEGER_LITERAL", "IDENTIFIER", 
		"WS"
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
			setState(50);
			statement();
			setState(51);
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
	public static class CopyFileStatementContext extends StatementContext {
		public CopyStatementContext copyStatement() {
			return getRuleContext(CopyStatementContext.class,0);
		}
		public CopyFileStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		try {
			setState(58);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CREATE:
				_localctx = new CreateTableStatementContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(53);
				createStatement();
				}
				break;
			case DELETE:
				_localctx = new DeleteValueStatementContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(54);
				deleteStatement();
				}
				break;
			case INSERT:
				_localctx = new InsertValueStatementContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(55);
				insertStatement();
				}
				break;
			case SELECT:
				_localctx = new QueryStatementContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(56);
				selectStatement();
				}
				break;
			case COPY:
				_localctx = new CopyFileStatementContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(57);
				copyStatement();
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
		public IndexClauseContext indexClause() {
			return getRuleContext(IndexClauseContext.class,0);
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
			setState(60);
			match(CREATE);
			setState(61);
			match(TABLE);
			setState(62);
			((CreateStatementContext)_localctx).tablenName = tableIdentifier();
			setState(63);
			match(T__0);
			setState(64);
			identifier();
			setState(65);
			dataType();
			setState(72);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(66);
				match(T__1);
				setState(67);
				identifier();
				setState(68);
				dataType();
				}
				}
				setState(74);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(75);
			match(T__2);
			setState(77);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==INDEX) {
				{
				setState(76);
				indexClause();
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
			setState(79);
			match(INDEX);
			setState(80);
			match(ON);
			setState(81);
			match(T__0);
			setState(82);
			identifier();
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(83);
				match(T__1);
				setState(84);
				identifier();
				}
				}
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(90);
			match(T__2);
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
			setState(92);
			match(DELETE);
			setState(93);
			match(FROM);
			setState(94);
			((DeleteStatementContext)_localctx).tablenName = tableIdentifier();
			setState(96);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(95);
				whereCluse();
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
		public List<ExpressionStructContext> expressionStruct() {
			return getRuleContexts(ExpressionStructContext.class);
		}
		public ExpressionStructContext expressionStruct(int i) {
			return getRuleContext(ExpressionStructContext.class,i);
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
			setState(98);
			match(INSERT);
			setState(99);
			match(INTO);
			setState(100);
			((InsertStatementContext)_localctx).tableName = tableIdentifier();
			setState(101);
			match(VALUES);
			setState(102);
			expressionStruct();
			setState(107);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(103);
				match(T__1);
				setState(104);
				expressionStruct();
				}
				}
				setState(109);
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

	public static class CopyStatementContext extends ParserRuleContext {
		public TableIdentifierContext tableName;
		public Token fileName;
		public Token delimiter;
		public TerminalNode COPY() { return getToken(SimpleSqlParser.COPY, 0); }
		public TerminalNode FROM() { return getToken(SimpleSqlParser.FROM, 0); }
		public TerminalNode DELIMITER() { return getToken(SimpleSqlParser.DELIMITER, 0); }
		public TerminalNode CSV() { return getToken(SimpleSqlParser.CSV, 0); }
		public TableIdentifierContext tableIdentifier() {
			return getRuleContext(TableIdentifierContext.class,0);
		}
		public List<TerminalNode> STRING() { return getTokens(SimpleSqlParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(SimpleSqlParser.STRING, i);
		}
		public TerminalNode HEADER() { return getToken(SimpleSqlParser.HEADER, 0); }
		public CopyStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_copyStatement; }
	}

	public final CopyStatementContext copyStatement() throws RecognitionException {
		CopyStatementContext _localctx = new CopyStatementContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_copyStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(110);
			match(COPY);
			setState(111);
			((CopyStatementContext)_localctx).tableName = tableIdentifier();
			setState(112);
			match(FROM);
			setState(113);
			((CopyStatementContext)_localctx).fileName = match(STRING);
			setState(114);
			match(DELIMITER);
			setState(115);
			((CopyStatementContext)_localctx).delimiter = match(STRING);
			setState(116);
			match(CSV);
			setState(118);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HEADER) {
				{
				setState(117);
				match(HEADER);
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
		enterRule(_localctx, 14, RULE_selectStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			selectClause();
			setState(121);
			fromCluse();
			setState(123);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(122);
				whereCluse();
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
		enterRule(_localctx, 16, RULE_selectClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			match(SELECT);
			setState(126);
			expression();
			setState(131);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(127);
				match(T__1);
				setState(128);
				expression();
				}
				}
				setState(133);
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
		public List<TableIdentifierContext> tableIdentifier() {
			return getRuleContexts(TableIdentifierContext.class);
		}
		public TableIdentifierContext tableIdentifier(int i) {
			return getRuleContext(TableIdentifierContext.class,i);
		}
		public FromCluseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fromCluse; }
	}

	public final FromCluseContext fromCluse() throws RecognitionException {
		FromCluseContext _localctx = new FromCluseContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_fromCluse);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(134);
			match(FROM);
			setState(135);
			tableIdentifier();
			setState(140);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(136);
				match(T__1);
				setState(137);
				tableIdentifier();
				}
				}
				setState(142);
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
		enterRule(_localctx, 20, RULE_whereCluse);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(143);
			match(WHERE);
			setState(144);
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

	public static class ExpressionStructContext extends ParserRuleContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public ExpressionStructContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expressionStruct; }
	}

	public final ExpressionStructContext expressionStruct() throws RecognitionException {
		ExpressionStructContext _localctx = new ExpressionStructContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_expressionStruct);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			match(T__0);
			setState(147);
			expression();
			setState(152);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(148);
				match(T__1);
				setState(149);
				expression();
				}
				}
				setState(154);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(155);
			match(T__2);
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
		enterRule(_localctx, 24, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(157);
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
		int _startState = 26;
		enterRecursionRule(_localctx, 26, RULE_booleanExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(163);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
			case TRUE_:
			case FALSE_:
			case MINUS:
			case STRING:
			case FLOAT_LITERAL:
			case INTEGER_LITERAL:
			case IDENTIFIER:
				{
				_localctx = new BooleanExpressionDefauleContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(160);
				valueExpression(0);
				}
				break;
			case NOT:
				{
				_localctx = new LogicalNotContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(161);
				match(NOT);
				setState(162);
				booleanExpression(2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(170);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new LogicalBinaryContext(new BooleanExpressionContext(_parentctx, _parentState));
					((LogicalBinaryContext)_localctx).left = _prevctx;
					pushNewRecursionContext(_localctx, _startState, RULE_booleanExpression);
					setState(165);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(166);
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
					setState(167);
					((LogicalBinaryContext)_localctx).right = booleanExpression(2);
					}
					} 
				}
				setState(172);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
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
		public TerminalNode ASTERISK() { return getToken(SimpleSqlParser.ASTERISK, 0); }
		public TerminalNode SLASH() { return getToken(SimpleSqlParser.SLASH, 0); }
		public TerminalNode PERCENT() { return getToken(SimpleSqlParser.PERCENT, 0); }
		public TerminalNode PLUS() { return getToken(SimpleSqlParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public ArithmeticBinaryContext(ValueExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ArithmeticUnaryContext extends ValueExpressionContext {
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public ValueExpressionContext valueExpression() {
			return getRuleContext(ValueExpressionContext.class,0);
		}
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
		int _startState = 28;
		enterRecursionRule(_localctx, 28, RULE_valueExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(177);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				_localctx = new ValueExpressionDefaultContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(174);
				primaryExpression();
				}
				break;
			case 2:
				{
				_localctx = new ArithmeticUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(175);
				match(MINUS);
				setState(176);
				valueExpression(4);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(191);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(189);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(179);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(180);
						((ArithmeticBinaryContext)_localctx).opt = _input.LT(1);
						_la = _input.LA(1);
						if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << ASTERISK) | (1L << SLASH) | (1L << PERCENT))) != 0)) ) {
							((ArithmeticBinaryContext)_localctx).opt = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(181);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(4);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(182);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(183);
						((ArithmeticBinaryContext)_localctx).opt = _input.LT(1);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
							((ArithmeticBinaryContext)_localctx).opt = (Token)_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(184);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(3);
						}
						break;
					case 3:
						{
						_localctx = new ComparisonContext(new ValueExpressionContext(_parentctx, _parentState));
						((ComparisonContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(185);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(186);
						comparisonOperator();
						setState(187);
						((ComparisonContext)_localctx).right = valueExpression(2);
						}
						break;
					}
					} 
				}
				setState(193);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
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
	public static class ParenthesizedExpressionContext extends PrimaryExpressionContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ParenthesizedExpressionContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ConstantValueContext extends PrimaryExpressionContext {
		public ConstantContext constant() {
			return getRuleContext(ConstantContext.class,0);
		}
		public ConstantValueContext(PrimaryExpressionContext ctx) { copyFrom(ctx); }
	}

	public final PrimaryExpressionContext primaryExpression() throws RecognitionException {
		PrimaryExpressionContext _localctx = new PrimaryExpressionContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_primaryExpression);
		try {
			setState(200);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENTIFIER:
				_localctx = new ColumnReferenceContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(194);
				columnIdentifier();
				}
				break;
			case TRUE_:
			case FALSE_:
			case MINUS:
			case STRING:
			case FLOAT_LITERAL:
			case INTEGER_LITERAL:
				_localctx = new ConstantValueContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(195);
				constant();
				}
				break;
			case T__0:
				_localctx = new ParenthesizedExpressionContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(196);
				match(T__0);
				setState(197);
				expression();
				setState(198);
				match(T__2);
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
		public TerminalNode STRING() { return getToken(SimpleSqlParser.STRING, 0); }
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
		enterRule(_localctx, 32, RULE_constant);
		try {
			setState(205);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING:
				_localctx = new StringLiteralContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(202);
				match(STRING);
				}
				break;
			case MINUS:
			case FLOAT_LITERAL:
			case INTEGER_LITERAL:
				_localctx = new NumberLiteralContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(203);
				number();
				}
				break;
			case TRUE_:
			case FALSE_:
				_localctx = new BooleanLiteralContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(204);
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
		enterRule(_localctx, 34, RULE_dataType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
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
		enterRule(_localctx, 36, RULE_columnIdentifier);
		try {
			setState(214);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				_localctx = new ColumnWithTableContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(209);
				tableIdentifier();
				setState(210);
				match(T__3);
				setState(211);
				identifier();
				}
				break;
			case 2:
				_localctx = new ColumnWithoutTableContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(213);
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
		public IdentifierContext tableName;
		public IdentifierContext alias;
		public TerminalNode AS() { return getToken(SimpleSqlParser.AS, 0); }
		public List<IdentifierContext> identifier() {
			return getRuleContexts(IdentifierContext.class);
		}
		public IdentifierContext identifier(int i) {
			return getRuleContext(IdentifierContext.class,i);
		}
		public TableAliasContext(TableIdentifierContext ctx) { copyFrom(ctx); }
	}
	public static class TableIdentifierDefaultContext extends TableIdentifierContext {
		public IdentifierContext tableName;
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TableIdentifierDefaultContext(TableIdentifierContext ctx) { copyFrom(ctx); }
	}

	public final TableIdentifierContext tableIdentifier() throws RecognitionException {
		TableIdentifierContext _localctx = new TableIdentifierContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_tableIdentifier);
		try {
			setState(221);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				_localctx = new TableIdentifierDefaultContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(216);
				((TableIdentifierDefaultContext)_localctx).tableName = identifier();
				}
				break;
			case 2:
				_localctx = new TableAliasContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(217);
				((TableAliasContext)_localctx).tableName = identifier();
				setState(218);
				match(AS);
				setState(219);
				((TableAliasContext)_localctx).alias = identifier();
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
		enterRule(_localctx, 40, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(223);
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
		public ComparisonOperatorContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparisonOperator; }
	}

	public final ComparisonOperatorContext comparisonOperator() throws RecognitionException {
		ComparisonOperatorContext _localctx = new ComparisonOperatorContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_comparisonOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(225);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQ) | (1L << NEQ) | (1L << NEQJ) | (1L << LT) | (1L << LTE) | (1L << GT) | (1L << GTE))) != 0)) ) {
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
		enterRule(_localctx, 44, RULE_predicateOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(227);
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
		enterRule(_localctx, 46, RULE_booleanValue);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(229);
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
	public static class IntegerLiteralContext extends NumberContext {
		public TerminalNode INTEGER_LITERAL() { return getToken(SimpleSqlParser.INTEGER_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public IntegerLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}
	public static class FloatLiteralContext extends NumberContext {
		public TerminalNode FLOAT_LITERAL() { return getToken(SimpleSqlParser.FLOAT_LITERAL, 0); }
		public TerminalNode MINUS() { return getToken(SimpleSqlParser.MINUS, 0); }
		public FloatLiteralContext(NumberContext ctx) { copyFrom(ctx); }
	}

	public final NumberContext number() throws RecognitionException {
		NumberContext _localctx = new NumberContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_number);
		int _la;
		try {
			setState(239);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				_localctx = new IntegerLiteralContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(232);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(231);
					match(MINUS);
					}
				}

				setState(234);
				match(INTEGER_LITERAL);
				}
				break;
			case 2:
				_localctx = new FloatLiteralContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(236);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(235);
					match(MINUS);
					}
				}

				setState(238);
				match(FLOAT_LITERAL);
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
		case 13:
			return booleanExpression_sempred((BooleanExpressionContext)_localctx, predIndex);
		case 14:
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
			return precpred(_ctx, 3);
		case 2:
			return precpred(_ctx, 2);
		case 3:
			return precpred(_ctx, 1);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3,\u00f4\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\5\3=\n\3\3\4\3\4\3\4\3\4\3"+
		"\4\3\4\3\4\3\4\3\4\3\4\7\4I\n\4\f\4\16\4L\13\4\3\4\3\4\5\4P\n\4\3\5\3"+
		"\5\3\5\3\5\3\5\3\5\7\5X\n\5\f\5\16\5[\13\5\3\5\3\5\3\6\3\6\3\6\3\6\5\6"+
		"c\n\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\7\7l\n\7\f\7\16\7o\13\7\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\5\by\n\b\3\t\3\t\3\t\5\t~\n\t\3\n\3\n\3\n\3\n\7\n"+
		"\u0084\n\n\f\n\16\n\u0087\13\n\3\13\3\13\3\13\3\13\7\13\u008d\n\13\f\13"+
		"\16\13\u0090\13\13\3\f\3\f\3\f\3\r\3\r\3\r\3\r\7\r\u0099\n\r\f\r\16\r"+
		"\u009c\13\r\3\r\3\r\3\16\3\16\3\17\3\17\3\17\3\17\5\17\u00a6\n\17\3\17"+
		"\3\17\3\17\7\17\u00ab\n\17\f\17\16\17\u00ae\13\17\3\20\3\20\3\20\3\20"+
		"\5\20\u00b4\n\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20\7\20"+
		"\u00c0\n\20\f\20\16\20\u00c3\13\20\3\21\3\21\3\21\3\21\3\21\3\21\5\21"+
		"\u00cb\n\21\3\22\3\22\3\22\5\22\u00d0\n\22\3\23\3\23\3\24\3\24\3\24\3"+
		"\24\3\24\5\24\u00d9\n\24\3\25\3\25\3\25\3\25\3\25\5\25\u00e0\n\25\3\26"+
		"\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\32\5\32\u00eb\n\32\3\32\3\32\5\32"+
		"\u00ef\n\32\3\32\5\32\u00f2\n\32\3\32\2\4\34\36\33\2\4\6\b\n\f\16\20\22"+
		"\24\26\30\32\34\36 \"$&(*,.\60\62\2\b\3\2\27\30\3\2%\'\3\2#$\3\2\34\""+
		"\3\2\27\31\3\2\32\33\2\u00f7\2\64\3\2\2\2\4<\3\2\2\2\6>\3\2\2\2\bQ\3\2"+
		"\2\2\n^\3\2\2\2\fd\3\2\2\2\16p\3\2\2\2\20z\3\2\2\2\22\177\3\2\2\2\24\u0088"+
		"\3\2\2\2\26\u0091\3\2\2\2\30\u0094\3\2\2\2\32\u009f\3\2\2\2\34\u00a5\3"+
		"\2\2\2\36\u00b3\3\2\2\2 \u00ca\3\2\2\2\"\u00cf\3\2\2\2$\u00d1\3\2\2\2"+
		"&\u00d8\3\2\2\2(\u00df\3\2\2\2*\u00e1\3\2\2\2,\u00e3\3\2\2\2.\u00e5\3"+
		"\2\2\2\60\u00e7\3\2\2\2\62\u00f1\3\2\2\2\64\65\5\4\3\2\65\66\7\2\2\3\66"+
		"\3\3\2\2\2\67=\5\6\4\28=\5\n\6\29=\5\f\7\2:=\5\20\t\2;=\5\16\b\2<\67\3"+
		"\2\2\2<8\3\2\2\2<9\3\2\2\2<:\3\2\2\2<;\3\2\2\2=\5\3\2\2\2>?\7\16\2\2?"+
		"@\7\23\2\2@A\5(\25\2AB\7\3\2\2BC\5*\26\2CJ\5$\23\2DE\7\4\2\2EF\5*\26\2"+
		"FG\5$\23\2GI\3\2\2\2HD\3\2\2\2IL\3\2\2\2JH\3\2\2\2JK\3\2\2\2KM\3\2\2\2"+
		"LJ\3\2\2\2MO\7\5\2\2NP\5\b\5\2ON\3\2\2\2OP\3\2\2\2P\7\3\2\2\2QR\7\24\2"+
		"\2RS\7\25\2\2ST\7\3\2\2TY\5*\26\2UV\7\4\2\2VX\5*\26\2WU\3\2\2\2X[\3\2"+
		"\2\2YW\3\2\2\2YZ\3\2\2\2Z\\\3\2\2\2[Y\3\2\2\2\\]\7\5\2\2]\t\3\2\2\2^_"+
		"\7\r\2\2_`\7\b\2\2`b\5(\25\2ac\5\26\f\2ba\3\2\2\2bc\3\2\2\2c\13\3\2\2"+
		"\2de\7\n\2\2ef\7\13\2\2fg\5(\25\2gh\7\f\2\2hm\5\30\r\2ij\7\4\2\2jl\5\30"+
		"\r\2ki\3\2\2\2lo\3\2\2\2mk\3\2\2\2mn\3\2\2\2n\r\3\2\2\2om\3\2\2\2pq\7"+
		"\17\2\2qr\5(\25\2rs\7\b\2\2st\7(\2\2tu\7\20\2\2uv\7(\2\2vx\7\21\2\2wy"+
		"\7\22\2\2xw\3\2\2\2xy\3\2\2\2y\17\3\2\2\2z{\5\22\n\2{}\5\24\13\2|~\5\26"+
		"\f\2}|\3\2\2\2}~\3\2\2\2~\21\3\2\2\2\177\u0080\7\7\2\2\u0080\u0085\5\32"+
		"\16\2\u0081\u0082\7\4\2\2\u0082\u0084\5\32\16\2\u0083\u0081\3\2\2\2\u0084"+
		"\u0087\3\2\2\2\u0085\u0083\3\2\2\2\u0085\u0086\3\2\2\2\u0086\23\3\2\2"+
		"\2\u0087\u0085\3\2\2\2\u0088\u0089\7\b\2\2\u0089\u008e\5(\25\2\u008a\u008b"+
		"\7\4\2\2\u008b\u008d\5(\25\2\u008c\u008a\3\2\2\2\u008d\u0090\3\2\2\2\u008e"+
		"\u008c\3\2\2\2\u008e\u008f\3\2\2\2\u008f\25\3\2\2\2\u0090\u008e\3\2\2"+
		"\2\u0091\u0092\7\t\2\2\u0092\u0093\5\32\16\2\u0093\27\3\2\2\2\u0094\u0095"+
		"\7\3\2\2\u0095\u009a\5\32\16\2\u0096\u0097\7\4\2\2\u0097\u0099\5\32\16"+
		"\2\u0098\u0096\3\2\2\2\u0099\u009c\3\2\2\2\u009a\u0098\3\2\2\2\u009a\u009b"+
		"\3\2\2\2\u009b\u009d\3\2\2\2\u009c\u009a\3\2\2\2\u009d\u009e\7\5\2\2\u009e"+
		"\31\3\2\2\2\u009f\u00a0\5\34\17\2\u00a0\33\3\2\2\2\u00a1\u00a2\b\17\1"+
		"\2\u00a2\u00a6\5\36\20\2\u00a3\u00a4\7\31\2\2\u00a4\u00a6\5\34\17\4\u00a5"+
		"\u00a1\3\2\2\2\u00a5\u00a3\3\2\2\2\u00a6\u00ac\3\2\2\2\u00a7\u00a8\f\3"+
		"\2\2\u00a8\u00a9\t\2\2\2\u00a9\u00ab\5\34\17\4\u00aa\u00a7\3\2\2\2\u00ab"+
		"\u00ae\3\2\2\2\u00ac\u00aa\3\2\2\2\u00ac\u00ad\3\2\2\2\u00ad\35\3\2\2"+
		"\2\u00ae\u00ac\3\2\2\2\u00af\u00b0\b\20\1\2\u00b0\u00b4\5 \21\2\u00b1"+
		"\u00b2\7$\2\2\u00b2\u00b4\5\36\20\6\u00b3\u00af\3\2\2\2\u00b3\u00b1\3"+
		"\2\2\2\u00b4\u00c1\3\2\2\2\u00b5\u00b6\f\5\2\2\u00b6\u00b7\t\3\2\2\u00b7"+
		"\u00c0\5\36\20\6\u00b8\u00b9\f\4\2\2\u00b9\u00ba\t\4\2\2\u00ba\u00c0\5"+
		"\36\20\5\u00bb\u00bc\f\3\2\2\u00bc\u00bd\5,\27\2\u00bd\u00be\5\36\20\4"+
		"\u00be\u00c0\3\2\2\2\u00bf\u00b5\3\2\2\2\u00bf\u00b8\3\2\2\2\u00bf\u00bb"+
		"\3\2\2\2\u00c0\u00c3\3\2\2\2\u00c1\u00bf\3\2\2\2\u00c1\u00c2\3\2\2\2\u00c2"+
		"\37\3\2\2\2\u00c3\u00c1\3\2\2\2\u00c4\u00cb\5&\24\2\u00c5\u00cb\5\"\22"+
		"\2\u00c6\u00c7\7\3\2\2\u00c7\u00c8\5\32\16\2\u00c8\u00c9\7\5\2\2\u00c9"+
		"\u00cb\3\2\2\2\u00ca\u00c4\3\2\2\2\u00ca\u00c5\3\2\2\2\u00ca\u00c6\3\2"+
		"\2\2\u00cb!\3\2\2\2\u00cc\u00d0\7(\2\2\u00cd\u00d0\5\62\32\2\u00ce\u00d0"+
		"\5\60\31\2\u00cf\u00cc\3\2\2\2\u00cf\u00cd\3\2\2\2\u00cf\u00ce\3\2\2\2"+
		"\u00d0#\3\2\2\2\u00d1\u00d2\7+\2\2\u00d2%\3\2\2\2\u00d3\u00d4\5(\25\2"+
		"\u00d4\u00d5\7\6\2\2\u00d5\u00d6\5*\26\2\u00d6\u00d9\3\2\2\2\u00d7\u00d9"+
		"\5*\26\2\u00d8\u00d3\3\2\2\2\u00d8\u00d7\3\2\2\2\u00d9\'\3\2\2\2\u00da"+
		"\u00e0\5*\26\2\u00db\u00dc\5*\26\2\u00dc\u00dd\7\26\2\2\u00dd\u00de\5"+
		"*\26\2\u00de\u00e0\3\2\2\2\u00df\u00da\3\2\2\2\u00df\u00db\3\2\2\2\u00e0"+
		")\3\2\2\2\u00e1\u00e2\7+\2\2\u00e2+\3\2\2\2\u00e3\u00e4\t\5\2\2\u00e4"+
		"-\3\2\2\2\u00e5\u00e6\t\6\2\2\u00e6/\3\2\2\2\u00e7\u00e8\t\7\2\2\u00e8"+
		"\61\3\2\2\2\u00e9\u00eb\7$\2\2\u00ea\u00e9\3\2\2\2\u00ea\u00eb\3\2\2\2"+
		"\u00eb\u00ec\3\2\2\2\u00ec\u00f2\7*\2\2\u00ed\u00ef\7$\2\2\u00ee\u00ed"+
		"\3\2\2\2\u00ee\u00ef\3\2\2\2\u00ef\u00f0\3\2\2\2\u00f0\u00f2\7)\2\2\u00f1"+
		"\u00ea\3\2\2\2\u00f1\u00ee\3\2\2\2\u00f2\63\3\2\2\2\31<JOYbmx}\u0085\u008e"+
		"\u009a\u00a5\u00ac\u00b3\u00bf\u00c1\u00ca\u00cf\u00d8\u00df\u00ea\u00ee"+
		"\u00f1";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}