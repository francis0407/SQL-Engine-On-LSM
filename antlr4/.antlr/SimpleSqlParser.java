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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, SELECT=6, FROM=7, WHERE=8, INSERT=9, 
		INTO=10, VALUES=11, DELETE=12, CREATE=13, COPY=14, DELIMITER=15, CSV=16, 
		HEADER=17, TABLE=18, TABLES=19, SHOW=20, SCHEMA=21, INDEX=22, ON=23, AS=24, 
		OR=25, AND=26, NOT=27, TRUE_=28, FALSE_=29, EQ=30, NEQ=31, NEQJ=32, LT=33, 
		LTE=34, GT=35, GTE=36, PLUS=37, MINUS=38, ASTERISK=39, SLASH=40, PERCENT=41, 
		STRING=42, FLOAT_LITERAL=43, INTEGER_LITERAL=44, IDENTIFIER=45, WS=46;
	public static final int
		RULE_singleStatement = 0, RULE_statement = 1, RULE_showSchema = 2, RULE_showTable = 3, 
		RULE_createStatement = 4, RULE_indexClause = 5, RULE_deleteStatement = 6, 
		RULE_insertStatement = 7, RULE_copyStatement = 8, RULE_selectStatement = 9, 
		RULE_selectClause = 10, RULE_fromCluse = 11, RULE_whereCluse = 12, RULE_expressionStruct = 13, 
		RULE_expression = 14, RULE_booleanExpression = 15, RULE_valueExpression = 16, 
		RULE_primaryExpression = 17, RULE_constant = 18, RULE_dataType = 19, RULE_columnIdentifier = 20, 
		RULE_tableIdentifier = 21, RULE_identifier = 22, RULE_comparisonOperator = 23, 
		RULE_predicateOperator = 24, RULE_booleanValue = 25, RULE_number = 26;
	public static final String[] ruleNames = {
		"singleStatement", "statement", "showSchema", "showTable", "createStatement", 
		"indexClause", "deleteStatement", "insertStatement", "copyStatement", 
		"selectStatement", "selectClause", "fromCluse", "whereCluse", "expressionStruct", 
		"expression", "booleanExpression", "valueExpression", "primaryExpression", 
		"constant", "dataType", "columnIdentifier", "tableIdentifier", "identifier", 
		"comparisonOperator", "predicateOperator", "booleanValue", "number"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "';'", "'('", "','", "')'", "'.'", "'SELECT'", "'FROM'", "'WHERE'", 
		"'INSERT'", "'INTO'", "'VALUES'", "'DELETE'", "'CREATE'", "'COPY'", "'DELIMITER'", 
		"'CSV'", "'HEADER'", "'TABLE'", "'TABLES'", "'SHOW'", "'SCHEMA'", "'INDEX'", 
		"'ON'", "'AS'", "'OR'", "'AND'", "'NOT'", "'TRUE'", "'FALSE'", null, "'<>'", 
		"'!='", "'<'", null, "'>'", null, "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, "SELECT", "FROM", "WHERE", "INSERT", 
		"INTO", "VALUES", "DELETE", "CREATE", "COPY", "DELIMITER", "CSV", "HEADER", 
		"TABLE", "TABLES", "SHOW", "SCHEMA", "INDEX", "ON", "AS", "OR", "AND", 
		"NOT", "TRUE_", "FALSE_", "EQ", "NEQ", "NEQJ", "LT", "LTE", "GT", "GTE", 
		"PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "STRING", "FLOAT_LITERAL", 
		"INTEGER_LITERAL", "IDENTIFIER", "WS"
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
			setState(54);
			statement();
			setState(55);
			match(T__0);
			setState(56);
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
	public static class ShowSchemaStatementContext extends StatementContext {
		public ShowSchemaContext showSchema() {
			return getRuleContext(ShowSchemaContext.class,0);
		}
		public ShowSchemaStatementContext(StatementContext ctx) { copyFrom(ctx); }
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
	public static class ShowTableStatementContext extends StatementContext {
		public ShowTableContext showTable() {
			return getRuleContext(ShowTableContext.class,0);
		}
		public ShowTableStatementContext(StatementContext ctx) { copyFrom(ctx); }
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
			setState(65);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,0,_ctx) ) {
			case 1:
				_localctx = new ShowSchemaStatementContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(58);
				showSchema();
				}
				break;
			case 2:
				_localctx = new ShowTableStatementContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(59);
				showTable();
				}
				break;
			case 3:
				_localctx = new CreateTableStatementContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(60);
				createStatement();
				}
				break;
			case 4:
				_localctx = new DeleteValueStatementContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(61);
				deleteStatement();
				}
				break;
			case 5:
				_localctx = new InsertValueStatementContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(62);
				insertStatement();
				}
				break;
			case 6:
				_localctx = new QueryStatementContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(63);
				selectStatement();
				}
				break;
			case 7:
				_localctx = new CopyFileStatementContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(64);
				copyStatement();
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

	public static class ShowSchemaContext extends ParserRuleContext {
		public TableIdentifierContext tableName;
		public TerminalNode SHOW() { return getToken(SimpleSqlParser.SHOW, 0); }
		public TerminalNode SCHEMA() { return getToken(SimpleSqlParser.SCHEMA, 0); }
		public TerminalNode FROM() { return getToken(SimpleSqlParser.FROM, 0); }
		public TableIdentifierContext tableIdentifier() {
			return getRuleContext(TableIdentifierContext.class,0);
		}
		public ShowSchemaContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_showSchema; }
	}

	public final ShowSchemaContext showSchema() throws RecognitionException {
		ShowSchemaContext _localctx = new ShowSchemaContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_showSchema);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			match(SHOW);
			setState(68);
			match(SCHEMA);
			setState(69);
			match(FROM);
			setState(70);
			((ShowSchemaContext)_localctx).tableName = tableIdentifier();
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

	public static class ShowTableContext extends ParserRuleContext {
		public TerminalNode SHOW() { return getToken(SimpleSqlParser.SHOW, 0); }
		public TerminalNode TABLES() { return getToken(SimpleSqlParser.TABLES, 0); }
		public ShowTableContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_showTable; }
	}

	public final ShowTableContext showTable() throws RecognitionException {
		ShowTableContext _localctx = new ShowTableContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_showTable);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(72);
			match(SHOW);
			setState(73);
			match(TABLES);
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
		enterRule(_localctx, 8, RULE_createStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(75);
			match(CREATE);
			setState(76);
			match(TABLE);
			setState(77);
			((CreateStatementContext)_localctx).tablenName = tableIdentifier();
			setState(78);
			match(T__1);
			setState(79);
			identifier();
			setState(80);
			dataType();
			setState(87);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(81);
				match(T__2);
				setState(82);
				identifier();
				setState(83);
				dataType();
				}
				}
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(90);
			match(T__3);
			setState(92);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==INDEX) {
				{
				setState(91);
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
		enterRule(_localctx, 10, RULE_indexClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(94);
			match(INDEX);
			setState(95);
			match(ON);
			setState(96);
			match(T__1);
			setState(97);
			identifier();
			setState(102);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(98);
				match(T__2);
				setState(99);
				identifier();
				}
				}
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(105);
			match(T__3);
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
		enterRule(_localctx, 12, RULE_deleteStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(107);
			match(DELETE);
			setState(108);
			match(FROM);
			setState(109);
			((DeleteStatementContext)_localctx).tablenName = tableIdentifier();
			setState(111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(110);
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
		enterRule(_localctx, 14, RULE_insertStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			match(INSERT);
			setState(114);
			match(INTO);
			setState(115);
			((InsertStatementContext)_localctx).tableName = tableIdentifier();
			setState(116);
			match(VALUES);
			setState(117);
			expressionStruct();
			setState(122);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(118);
				match(T__2);
				setState(119);
				expressionStruct();
				}
				}
				setState(124);
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
		enterRule(_localctx, 16, RULE_copyStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(125);
			match(COPY);
			setState(126);
			((CopyStatementContext)_localctx).tableName = tableIdentifier();
			setState(127);
			match(FROM);
			setState(128);
			((CopyStatementContext)_localctx).fileName = match(STRING);
			setState(129);
			match(DELIMITER);
			setState(130);
			((CopyStatementContext)_localctx).delimiter = match(STRING);
			setState(131);
			match(CSV);
			setState(133);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==HEADER) {
				{
				setState(132);
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
		enterRule(_localctx, 18, RULE_selectStatement);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(135);
			selectClause();
			setState(136);
			fromCluse();
			setState(138);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(137);
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
		enterRule(_localctx, 20, RULE_selectClause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(140);
			match(SELECT);
			setState(141);
			expression();
			setState(146);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(142);
				match(T__2);
				setState(143);
				expression();
				}
				}
				setState(148);
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
		enterRule(_localctx, 22, RULE_fromCluse);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(149);
			match(FROM);
			setState(150);
			tableIdentifier();
			setState(155);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(151);
				match(T__2);
				setState(152);
				tableIdentifier();
				}
				}
				setState(157);
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
		enterRule(_localctx, 24, RULE_whereCluse);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(158);
			match(WHERE);
			setState(159);
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
		enterRule(_localctx, 26, RULE_expressionStruct);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(161);
			match(T__1);
			setState(162);
			expression();
			setState(167);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__2) {
				{
				{
				setState(163);
				match(T__2);
				setState(164);
				expression();
				}
				}
				setState(169);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(170);
			match(T__3);
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
		enterRule(_localctx, 28, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
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
		int _startState = 30;
		enterRecursionRule(_localctx, 30, RULE_booleanExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
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

				setState(175);
				valueExpression(0);
				}
				break;
			case NOT:
				{
				_localctx = new LogicalNotContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(176);
				match(NOT);
				setState(177);
				booleanExpression(2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(185);
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
					setState(180);
					if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
					setState(181);
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
					setState(182);
					((LogicalBinaryContext)_localctx).right = booleanExpression(2);
					}
					} 
				}
				setState(187);
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
		int _startState = 32;
		enterRecursionRule(_localctx, 32, RULE_valueExpression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(192);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				_localctx = new ValueExpressionDefaultContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(189);
				primaryExpression();
				}
				break;
			case 2:
				{
				_localctx = new ArithmeticUnaryContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(190);
				match(MINUS);
				setState(191);
				valueExpression(4);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(206);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,15,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(204);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(194);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(195);
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
						setState(196);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(4);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticBinaryContext(new ValueExpressionContext(_parentctx, _parentState));
						((ArithmeticBinaryContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(197);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(198);
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
						setState(199);
						((ArithmeticBinaryContext)_localctx).right = valueExpression(3);
						}
						break;
					case 3:
						{
						_localctx = new ComparisonContext(new ValueExpressionContext(_parentctx, _parentState));
						((ComparisonContext)_localctx).left = _prevctx;
						pushNewRecursionContext(_localctx, _startState, RULE_valueExpression);
						setState(200);
						if (!(precpred(_ctx, 1))) throw new FailedPredicateException(this, "precpred(_ctx, 1)");
						setState(201);
						comparisonOperator();
						setState(202);
						((ComparisonContext)_localctx).right = valueExpression(2);
						}
						break;
					}
					} 
				}
				setState(208);
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
		enterRule(_localctx, 34, RULE_primaryExpression);
		try {
			setState(215);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IDENTIFIER:
				_localctx = new ColumnReferenceContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(209);
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
				setState(210);
				constant();
				}
				break;
			case T__1:
				_localctx = new ParenthesizedExpressionContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(211);
				match(T__1);
				setState(212);
				expression();
				setState(213);
				match(T__3);
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
		enterRule(_localctx, 36, RULE_constant);
		try {
			setState(220);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case STRING:
				_localctx = new StringLiteralContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(217);
				match(STRING);
				}
				break;
			case MINUS:
			case FLOAT_LITERAL:
			case INTEGER_LITERAL:
				_localctx = new NumberLiteralContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(218);
				number();
				}
				break;
			case TRUE_:
			case FALSE_:
				_localctx = new BooleanLiteralContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(219);
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
		enterRule(_localctx, 38, RULE_dataType);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
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
		enterRule(_localctx, 40, RULE_columnIdentifier);
		try {
			setState(229);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				_localctx = new ColumnWithTableContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(224);
				tableIdentifier();
				setState(225);
				match(T__4);
				setState(226);
				identifier();
				}
				break;
			case 2:
				_localctx = new ColumnWithoutTableContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(228);
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
		enterRule(_localctx, 42, RULE_tableIdentifier);
		try {
			setState(236);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				_localctx = new TableIdentifierDefaultContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(231);
				((TableIdentifierDefaultContext)_localctx).tableName = identifier();
				}
				break;
			case 2:
				_localctx = new TableAliasContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(232);
				((TableAliasContext)_localctx).tableName = identifier();
				setState(233);
				match(AS);
				setState(234);
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
		enterRule(_localctx, 44, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(238);
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
		enterRule(_localctx, 46, RULE_comparisonOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(240);
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
		enterRule(_localctx, 48, RULE_predicateOperator);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(242);
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
		enterRule(_localctx, 50, RULE_booleanValue);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(244);
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
		enterRule(_localctx, 52, RULE_number);
		int _la;
		try {
			setState(254);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				_localctx = new IntegerLiteralContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(247);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(246);
					match(MINUS);
					}
				}

				setState(249);
				match(INTEGER_LITERAL);
				}
				break;
			case 2:
				_localctx = new FloatLiteralContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(251);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==MINUS) {
					{
					setState(250);
					match(MINUS);
					}
				}

				setState(253);
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
		case 15:
			return booleanExpression_sempred((BooleanExpressionContext)_localctx, predIndex);
		case 16:
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\60\u0103\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3"+
		"\3\3\5\3D\n\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6"+
		"\3\6\3\6\3\6\3\6\7\6X\n\6\f\6\16\6[\13\6\3\6\3\6\5\6_\n\6\3\7\3\7\3\7"+
		"\3\7\3\7\3\7\7\7g\n\7\f\7\16\7j\13\7\3\7\3\7\3\b\3\b\3\b\3\b\5\br\n\b"+
		"\3\t\3\t\3\t\3\t\3\t\3\t\3\t\7\t{\n\t\f\t\16\t~\13\t\3\n\3\n\3\n\3\n\3"+
		"\n\3\n\3\n\3\n\5\n\u0088\n\n\3\13\3\13\3\13\5\13\u008d\n\13\3\f\3\f\3"+
		"\f\3\f\7\f\u0093\n\f\f\f\16\f\u0096\13\f\3\r\3\r\3\r\3\r\7\r\u009c\n\r"+
		"\f\r\16\r\u009f\13\r\3\16\3\16\3\16\3\17\3\17\3\17\3\17\7\17\u00a8\n\17"+
		"\f\17\16\17\u00ab\13\17\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\21\5\21\u00b5"+
		"\n\21\3\21\3\21\3\21\7\21\u00ba\n\21\f\21\16\21\u00bd\13\21\3\22\3\22"+
		"\3\22\3\22\5\22\u00c3\n\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22\3\22"+
		"\3\22\7\22\u00cf\n\22\f\22\16\22\u00d2\13\22\3\23\3\23\3\23\3\23\3\23"+
		"\3\23\5\23\u00da\n\23\3\24\3\24\3\24\5\24\u00df\n\24\3\25\3\25\3\26\3"+
		"\26\3\26\3\26\3\26\5\26\u00e8\n\26\3\27\3\27\3\27\3\27\3\27\5\27\u00ef"+
		"\n\27\3\30\3\30\3\31\3\31\3\32\3\32\3\33\3\33\3\34\5\34\u00fa\n\34\3\34"+
		"\3\34\5\34\u00fe\n\34\3\34\5\34\u0101\n\34\3\34\2\4 \"\35\2\4\6\b\n\f"+
		"\16\20\22\24\26\30\32\34\36 \"$&(*,.\60\62\64\66\2\b\3\2\33\34\3\2)+\3"+
		"\2\'(\3\2 &\3\2\33\35\3\2\36\37\2\u0106\28\3\2\2\2\4C\3\2\2\2\6E\3\2\2"+
		"\2\bJ\3\2\2\2\nM\3\2\2\2\f`\3\2\2\2\16m\3\2\2\2\20s\3\2\2\2\22\177\3\2"+
		"\2\2\24\u0089\3\2\2\2\26\u008e\3\2\2\2\30\u0097\3\2\2\2\32\u00a0\3\2\2"+
		"\2\34\u00a3\3\2\2\2\36\u00ae\3\2\2\2 \u00b4\3\2\2\2\"\u00c2\3\2\2\2$\u00d9"+
		"\3\2\2\2&\u00de\3\2\2\2(\u00e0\3\2\2\2*\u00e7\3\2\2\2,\u00ee\3\2\2\2."+
		"\u00f0\3\2\2\2\60\u00f2\3\2\2\2\62\u00f4\3\2\2\2\64\u00f6\3\2\2\2\66\u0100"+
		"\3\2\2\289\5\4\3\29:\7\3\2\2:;\7\2\2\3;\3\3\2\2\2<D\5\6\4\2=D\5\b\5\2"+
		">D\5\n\6\2?D\5\16\b\2@D\5\20\t\2AD\5\24\13\2BD\5\22\n\2C<\3\2\2\2C=\3"+
		"\2\2\2C>\3\2\2\2C?\3\2\2\2C@\3\2\2\2CA\3\2\2\2CB\3\2\2\2D\5\3\2\2\2EF"+
		"\7\26\2\2FG\7\27\2\2GH\7\t\2\2HI\5,\27\2I\7\3\2\2\2JK\7\26\2\2KL\7\25"+
		"\2\2L\t\3\2\2\2MN\7\17\2\2NO\7\24\2\2OP\5,\27\2PQ\7\4\2\2QR\5.\30\2RY"+
		"\5(\25\2ST\7\5\2\2TU\5.\30\2UV\5(\25\2VX\3\2\2\2WS\3\2\2\2X[\3\2\2\2Y"+
		"W\3\2\2\2YZ\3\2\2\2Z\\\3\2\2\2[Y\3\2\2\2\\^\7\6\2\2]_\5\f\7\2^]\3\2\2"+
		"\2^_\3\2\2\2_\13\3\2\2\2`a\7\30\2\2ab\7\31\2\2bc\7\4\2\2ch\5.\30\2de\7"+
		"\5\2\2eg\5.\30\2fd\3\2\2\2gj\3\2\2\2hf\3\2\2\2hi\3\2\2\2ik\3\2\2\2jh\3"+
		"\2\2\2kl\7\6\2\2l\r\3\2\2\2mn\7\16\2\2no\7\t\2\2oq\5,\27\2pr\5\32\16\2"+
		"qp\3\2\2\2qr\3\2\2\2r\17\3\2\2\2st\7\13\2\2tu\7\f\2\2uv\5,\27\2vw\7\r"+
		"\2\2w|\5\34\17\2xy\7\5\2\2y{\5\34\17\2zx\3\2\2\2{~\3\2\2\2|z\3\2\2\2|"+
		"}\3\2\2\2}\21\3\2\2\2~|\3\2\2\2\177\u0080\7\20\2\2\u0080\u0081\5,\27\2"+
		"\u0081\u0082\7\t\2\2\u0082\u0083\7,\2\2\u0083\u0084\7\21\2\2\u0084\u0085"+
		"\7,\2\2\u0085\u0087\7\22\2\2\u0086\u0088\7\23\2\2\u0087\u0086\3\2\2\2"+
		"\u0087\u0088\3\2\2\2\u0088\23\3\2\2\2\u0089\u008a\5\26\f\2\u008a\u008c"+
		"\5\30\r\2\u008b\u008d\5\32\16\2\u008c\u008b\3\2\2\2\u008c\u008d\3\2\2"+
		"\2\u008d\25\3\2\2\2\u008e\u008f\7\b\2\2\u008f\u0094\5\36\20\2\u0090\u0091"+
		"\7\5\2\2\u0091\u0093\5\36\20\2\u0092\u0090\3\2\2\2\u0093\u0096\3\2\2\2"+
		"\u0094\u0092\3\2\2\2\u0094\u0095\3\2\2\2\u0095\27\3\2\2\2\u0096\u0094"+
		"\3\2\2\2\u0097\u0098\7\t\2\2\u0098\u009d\5,\27\2\u0099\u009a\7\5\2\2\u009a"+
		"\u009c\5,\27\2\u009b\u0099\3\2\2\2\u009c\u009f\3\2\2\2\u009d\u009b\3\2"+
		"\2\2\u009d\u009e\3\2\2\2\u009e\31\3\2\2\2\u009f\u009d\3\2\2\2\u00a0\u00a1"+
		"\7\n\2\2\u00a1\u00a2\5\36\20\2\u00a2\33\3\2\2\2\u00a3\u00a4\7\4\2\2\u00a4"+
		"\u00a9\5\36\20\2\u00a5\u00a6\7\5\2\2\u00a6\u00a8\5\36\20\2\u00a7\u00a5"+
		"\3\2\2\2\u00a8\u00ab\3\2\2\2\u00a9\u00a7\3\2\2\2\u00a9\u00aa\3\2\2\2\u00aa"+
		"\u00ac\3\2\2\2\u00ab\u00a9\3\2\2\2\u00ac\u00ad\7\6\2\2\u00ad\35\3\2\2"+
		"\2\u00ae\u00af\5 \21\2\u00af\37\3\2\2\2\u00b0\u00b1\b\21\1\2\u00b1\u00b5"+
		"\5\"\22\2\u00b2\u00b3\7\35\2\2\u00b3\u00b5\5 \21\4\u00b4\u00b0\3\2\2\2"+
		"\u00b4\u00b2\3\2\2\2\u00b5\u00bb\3\2\2\2\u00b6\u00b7\f\3\2\2\u00b7\u00b8"+
		"\t\2\2\2\u00b8\u00ba\5 \21\4\u00b9\u00b6\3\2\2\2\u00ba\u00bd\3\2\2\2\u00bb"+
		"\u00b9\3\2\2\2\u00bb\u00bc\3\2\2\2\u00bc!\3\2\2\2\u00bd\u00bb\3\2\2\2"+
		"\u00be\u00bf\b\22\1\2\u00bf\u00c3\5$\23\2\u00c0\u00c1\7(\2\2\u00c1\u00c3"+
		"\5\"\22\6\u00c2\u00be\3\2\2\2\u00c2\u00c0\3\2\2\2\u00c3\u00d0\3\2\2\2"+
		"\u00c4\u00c5\f\5\2\2\u00c5\u00c6\t\3\2\2\u00c6\u00cf\5\"\22\6\u00c7\u00c8"+
		"\f\4\2\2\u00c8\u00c9\t\4\2\2\u00c9\u00cf\5\"\22\5\u00ca\u00cb\f\3\2\2"+
		"\u00cb\u00cc\5\60\31\2\u00cc\u00cd\5\"\22\4\u00cd\u00cf\3\2\2\2\u00ce"+
		"\u00c4\3\2\2\2\u00ce\u00c7\3\2\2\2\u00ce\u00ca\3\2\2\2\u00cf\u00d2\3\2"+
		"\2\2\u00d0\u00ce\3\2\2\2\u00d0\u00d1\3\2\2\2\u00d1#\3\2\2\2\u00d2\u00d0"+
		"\3\2\2\2\u00d3\u00da\5*\26\2\u00d4\u00da\5&\24\2\u00d5\u00d6\7\4\2\2\u00d6"+
		"\u00d7\5\36\20\2\u00d7\u00d8\7\6\2\2\u00d8\u00da\3\2\2\2\u00d9\u00d3\3"+
		"\2\2\2\u00d9\u00d4\3\2\2\2\u00d9\u00d5\3\2\2\2\u00da%\3\2\2\2\u00db\u00df"+
		"\7,\2\2\u00dc\u00df\5\66\34\2\u00dd\u00df\5\64\33\2\u00de\u00db\3\2\2"+
		"\2\u00de\u00dc\3\2\2\2\u00de\u00dd\3\2\2\2\u00df\'\3\2\2\2\u00e0\u00e1"+
		"\7/\2\2\u00e1)\3\2\2\2\u00e2\u00e3\5,\27\2\u00e3\u00e4\7\7\2\2\u00e4\u00e5"+
		"\5.\30\2\u00e5\u00e8\3\2\2\2\u00e6\u00e8\5.\30\2\u00e7\u00e2\3\2\2\2\u00e7"+
		"\u00e6\3\2\2\2\u00e8+\3\2\2\2\u00e9\u00ef\5.\30\2\u00ea\u00eb\5.\30\2"+
		"\u00eb\u00ec\7\32\2\2\u00ec\u00ed\5.\30\2\u00ed\u00ef\3\2\2\2\u00ee\u00e9"+
		"\3\2\2\2\u00ee\u00ea\3\2\2\2\u00ef-\3\2\2\2\u00f0\u00f1\7/\2\2\u00f1/"+
		"\3\2\2\2\u00f2\u00f3\t\5\2\2\u00f3\61\3\2\2\2\u00f4\u00f5\t\6\2\2\u00f5"+
		"\63\3\2\2\2\u00f6\u00f7\t\7\2\2\u00f7\65\3\2\2\2\u00f8\u00fa\7(\2\2\u00f9"+
		"\u00f8\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa\u00fb\3\2\2\2\u00fb\u0101\7."+
		"\2\2\u00fc\u00fe\7(\2\2\u00fd\u00fc\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe"+
		"\u00ff\3\2\2\2\u00ff\u0101\7-\2\2\u0100\u00f9\3\2\2\2\u0100\u00fd\3\2"+
		"\2\2\u0101\67\3\2\2\2\31CY^hq|\u0087\u008c\u0094\u009d\u00a9\u00b4\u00bb"+
		"\u00c2\u00ce\u00d0\u00d9\u00de\u00e7\u00ee\u00f9\u00fd\u0100";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}