// Generated from /home/francis/Git/francis/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class SimpleSqlLexer extends Lexer {
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
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "SELECT", "FROM", "WHERE", "INSERT", 
		"INTO", "VALUES", "DELETE", "CREATE", "COPY", "DELIMITER", "CSV", "HEADER", 
		"TABLE", "TABLES", "SHOW", "SCHEMA", "INDEX", "ON", "AS", "OR", "AND", 
		"NOT", "TRUE_", "FALSE_", "EQ", "NEQ", "NEQJ", "LT", "LTE", "GT", "GTE", 
		"PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "STRING", "FLOAT_LITERAL", 
		"INTEGER_LITERAL", "IDENTIFIER", "DIGIT", "LETTER", "WS"
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


	public SimpleSqlLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "SimpleSql.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\60\u0152\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\3\2\3\2\3\3\3\3\3\4\3\4"+
		"\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\t\3"+
		"\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22"+
		"\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3\24"+
		"\3\24\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26\3\26\3\27"+
		"\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\32"+
		"\3\33\3\33\3\33\3\33\3\34\3\34\3\34\3\34\3\35\3\35\3\35\3\35\3\35\3\36"+
		"\3\36\3\36\3\36\3\36\3\36\3\37\3\37\3\37\5\37\u00f9\n\37\3 \3 \3 \3!\3"+
		"!\3!\3\"\3\"\3#\3#\3#\3#\5#\u0107\n#\3$\3$\3%\3%\3%\3%\5%\u010f\n%\3&"+
		"\3&\3\'\3\'\3(\3(\3)\3)\3*\3*\3+\3+\3+\3+\7+\u011f\n+\f+\16+\u0122\13"+
		"+\3+\3+\3+\3+\3+\7+\u0129\n+\f+\16+\u012c\13+\3+\5+\u012f\n+\3,\6,\u0132"+
		"\n,\r,\16,\u0133\3,\3,\6,\u0138\n,\r,\16,\u0139\3-\6-\u013d\n-\r-\16-"+
		"\u013e\3.\3.\3.\6.\u0144\n.\r.\16.\u0145\3/\3/\3\60\3\60\3\61\6\61\u014d"+
		"\n\61\r\61\16\61\u014e\3\61\3\61\2\2\62\3\3\5\4\7\5\t\6\13\7\r\b\17\t"+
		"\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27"+
		"-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W"+
		"-Y.[/]\2_\2a\60\3\2\7\4\2))^^\4\2$$^^\3\2\62;\3\2C\\\5\2\13\f\17\17\""+
		"\"\2\u015e\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2"+
		"\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27"+
		"\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2"+
		"\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2"+
		"\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2"+
		"\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2"+
		"\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S"+
		"\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2a\3\2\2\2\3c\3\2"+
		"\2\2\5e\3\2\2\2\7g\3\2\2\2\ti\3\2\2\2\13k\3\2\2\2\rm\3\2\2\2\17t\3\2\2"+
		"\2\21y\3\2\2\2\23\177\3\2\2\2\25\u0086\3\2\2\2\27\u008b\3\2\2\2\31\u0092"+
		"\3\2\2\2\33\u0099\3\2\2\2\35\u00a0\3\2\2\2\37\u00a5\3\2\2\2!\u00af\3\2"+
		"\2\2#\u00b3\3\2\2\2%\u00ba\3\2\2\2\'\u00c0\3\2\2\2)\u00c7\3\2\2\2+\u00cc"+
		"\3\2\2\2-\u00d3\3\2\2\2/\u00d9\3\2\2\2\61\u00dc\3\2\2\2\63\u00df\3\2\2"+
		"\2\65\u00e2\3\2\2\2\67\u00e6\3\2\2\29\u00ea\3\2\2\2;\u00ef\3\2\2\2=\u00f8"+
		"\3\2\2\2?\u00fa\3\2\2\2A\u00fd\3\2\2\2C\u0100\3\2\2\2E\u0106\3\2\2\2G"+
		"\u0108\3\2\2\2I\u010e\3\2\2\2K\u0110\3\2\2\2M\u0112\3\2\2\2O\u0114\3\2"+
		"\2\2Q\u0116\3\2\2\2S\u0118\3\2\2\2U\u012e\3\2\2\2W\u0131\3\2\2\2Y\u013c"+
		"\3\2\2\2[\u0143\3\2\2\2]\u0147\3\2\2\2_\u0149\3\2\2\2a\u014c\3\2\2\2c"+
		"d\7=\2\2d\4\3\2\2\2ef\7*\2\2f\6\3\2\2\2gh\7.\2\2h\b\3\2\2\2ij\7+\2\2j"+
		"\n\3\2\2\2kl\7\60\2\2l\f\3\2\2\2mn\7U\2\2no\7G\2\2op\7N\2\2pq\7G\2\2q"+
		"r\7E\2\2rs\7V\2\2s\16\3\2\2\2tu\7H\2\2uv\7T\2\2vw\7Q\2\2wx\7O\2\2x\20"+
		"\3\2\2\2yz\7Y\2\2z{\7J\2\2{|\7G\2\2|}\7T\2\2}~\7G\2\2~\22\3\2\2\2\177"+
		"\u0080\7K\2\2\u0080\u0081\7P\2\2\u0081\u0082\7U\2\2\u0082\u0083\7G\2\2"+
		"\u0083\u0084\7T\2\2\u0084\u0085\7V\2\2\u0085\24\3\2\2\2\u0086\u0087\7"+
		"K\2\2\u0087\u0088\7P\2\2\u0088\u0089\7V\2\2\u0089\u008a\7Q\2\2\u008a\26"+
		"\3\2\2\2\u008b\u008c\7X\2\2\u008c\u008d\7C\2\2\u008d\u008e\7N\2\2\u008e"+
		"\u008f\7W\2\2\u008f\u0090\7G\2\2\u0090\u0091\7U\2\2\u0091\30\3\2\2\2\u0092"+
		"\u0093\7F\2\2\u0093\u0094\7G\2\2\u0094\u0095\7N\2\2\u0095\u0096\7G\2\2"+
		"\u0096\u0097\7V\2\2\u0097\u0098\7G\2\2\u0098\32\3\2\2\2\u0099\u009a\7"+
		"E\2\2\u009a\u009b\7T\2\2\u009b\u009c\7G\2\2\u009c\u009d\7C\2\2\u009d\u009e"+
		"\7V\2\2\u009e\u009f\7G\2\2\u009f\34\3\2\2\2\u00a0\u00a1\7E\2\2\u00a1\u00a2"+
		"\7Q\2\2\u00a2\u00a3\7R\2\2\u00a3\u00a4\7[\2\2\u00a4\36\3\2\2\2\u00a5\u00a6"+
		"\7F\2\2\u00a6\u00a7\7G\2\2\u00a7\u00a8\7N\2\2\u00a8\u00a9\7K\2\2\u00a9"+
		"\u00aa\7O\2\2\u00aa\u00ab\7K\2\2\u00ab\u00ac\7V\2\2\u00ac\u00ad\7G\2\2"+
		"\u00ad\u00ae\7T\2\2\u00ae \3\2\2\2\u00af\u00b0\7E\2\2\u00b0\u00b1\7U\2"+
		"\2\u00b1\u00b2\7X\2\2\u00b2\"\3\2\2\2\u00b3\u00b4\7J\2\2\u00b4\u00b5\7"+
		"G\2\2\u00b5\u00b6\7C\2\2\u00b6\u00b7\7F\2\2\u00b7\u00b8\7G\2\2\u00b8\u00b9"+
		"\7T\2\2\u00b9$\3\2\2\2\u00ba\u00bb\7V\2\2\u00bb\u00bc\7C\2\2\u00bc\u00bd"+
		"\7D\2\2\u00bd\u00be\7N\2\2\u00be\u00bf\7G\2\2\u00bf&\3\2\2\2\u00c0\u00c1"+
		"\7V\2\2\u00c1\u00c2\7C\2\2\u00c2\u00c3\7D\2\2\u00c3\u00c4\7N\2\2\u00c4"+
		"\u00c5\7G\2\2\u00c5\u00c6\7U\2\2\u00c6(\3\2\2\2\u00c7\u00c8\7U\2\2\u00c8"+
		"\u00c9\7J\2\2\u00c9\u00ca\7Q\2\2\u00ca\u00cb\7Y\2\2\u00cb*\3\2\2\2\u00cc"+
		"\u00cd\7U\2\2\u00cd\u00ce\7E\2\2\u00ce\u00cf\7J\2\2\u00cf\u00d0\7G\2\2"+
		"\u00d0\u00d1\7O\2\2\u00d1\u00d2\7C\2\2\u00d2,\3\2\2\2\u00d3\u00d4\7K\2"+
		"\2\u00d4\u00d5\7P\2\2\u00d5\u00d6\7F\2\2\u00d6\u00d7\7G\2\2\u00d7\u00d8"+
		"\7Z\2\2\u00d8.\3\2\2\2\u00d9\u00da\7Q\2\2\u00da\u00db\7P\2\2\u00db\60"+
		"\3\2\2\2\u00dc\u00dd\7C\2\2\u00dd\u00de\7U\2\2\u00de\62\3\2\2\2\u00df"+
		"\u00e0\7Q\2\2\u00e0\u00e1\7T\2\2\u00e1\64\3\2\2\2\u00e2\u00e3\7C\2\2\u00e3"+
		"\u00e4\7P\2\2\u00e4\u00e5\7F\2\2\u00e5\66\3\2\2\2\u00e6\u00e7\7P\2\2\u00e7"+
		"\u00e8\7Q\2\2\u00e8\u00e9\7V\2\2\u00e98\3\2\2\2\u00ea\u00eb\7V\2\2\u00eb"+
		"\u00ec\7T\2\2\u00ec\u00ed\7W\2\2\u00ed\u00ee\7G\2\2\u00ee:\3\2\2\2\u00ef"+
		"\u00f0\7H\2\2\u00f0\u00f1\7C\2\2\u00f1\u00f2\7N\2\2\u00f2\u00f3\7U\2\2"+
		"\u00f3\u00f4\7G\2\2\u00f4<\3\2\2\2\u00f5\u00f9\7?\2\2\u00f6\u00f7\7?\2"+
		"\2\u00f7\u00f9\7?\2\2\u00f8\u00f5\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f9>\3"+
		"\2\2\2\u00fa\u00fb\7>\2\2\u00fb\u00fc\7@\2\2\u00fc@\3\2\2\2\u00fd\u00fe"+
		"\7#\2\2\u00fe\u00ff\7?\2\2\u00ffB\3\2\2\2\u0100\u0101\7>\2\2\u0101D\3"+
		"\2\2\2\u0102\u0103\7>\2\2\u0103\u0107\7?\2\2\u0104\u0105\7#\2\2\u0105"+
		"\u0107\7@\2\2\u0106\u0102\3\2\2\2\u0106\u0104\3\2\2\2\u0107F\3\2\2\2\u0108"+
		"\u0109\7@\2\2\u0109H\3\2\2\2\u010a\u010b\7@\2\2\u010b\u010f\7?\2\2\u010c"+
		"\u010d\7#\2\2\u010d\u010f\7>\2\2\u010e\u010a\3\2\2\2\u010e\u010c\3\2\2"+
		"\2\u010fJ\3\2\2\2\u0110\u0111\7-\2\2\u0111L\3\2\2\2\u0112\u0113\7/\2\2"+
		"\u0113N\3\2\2\2\u0114\u0115\7,\2\2\u0115P\3\2\2\2\u0116\u0117\7\61\2\2"+
		"\u0117R\3\2\2\2\u0118\u0119\7\'\2\2\u0119T\3\2\2\2\u011a\u0120\7)\2\2"+
		"\u011b\u011f\n\2\2\2\u011c\u011d\7^\2\2\u011d\u011f\13\2\2\2\u011e\u011b"+
		"\3\2\2\2\u011e\u011c\3\2\2\2\u011f\u0122\3\2\2\2\u0120\u011e\3\2\2\2\u0120"+
		"\u0121\3\2\2\2\u0121\u0123\3\2\2\2\u0122\u0120\3\2\2\2\u0123\u012f\7)"+
		"\2\2\u0124\u012a\7$\2\2\u0125\u0129\n\3\2\2\u0126\u0127\7^\2\2\u0127\u0129"+
		"\13\2\2\2\u0128\u0125\3\2\2\2\u0128\u0126\3\2\2\2\u0129\u012c\3\2\2\2"+
		"\u012a\u0128\3\2\2\2\u012a\u012b\3\2\2\2\u012b\u012d\3\2\2\2\u012c\u012a"+
		"\3\2\2\2\u012d\u012f\7$\2\2\u012e\u011a\3\2\2\2\u012e\u0124\3\2\2\2\u012f"+
		"V\3\2\2\2\u0130\u0132\5]/\2\u0131\u0130\3\2\2\2\u0132\u0133\3\2\2\2\u0133"+
		"\u0131\3\2\2\2\u0133\u0134\3\2\2\2\u0134\u0135\3\2\2\2\u0135\u0137\7\60"+
		"\2\2\u0136\u0138\5]/\2\u0137\u0136\3\2\2\2\u0138\u0139\3\2\2\2\u0139\u0137"+
		"\3\2\2\2\u0139\u013a\3\2\2\2\u013aX\3\2\2\2\u013b\u013d\5]/\2\u013c\u013b"+
		"\3\2\2\2\u013d\u013e\3\2\2\2\u013e\u013c\3\2\2\2\u013e\u013f\3\2\2\2\u013f"+
		"Z\3\2\2\2\u0140\u0144\5_\60\2\u0141\u0144\5]/\2\u0142\u0144\7a\2\2\u0143"+
		"\u0140\3\2\2\2\u0143\u0141\3\2\2\2\u0143\u0142\3\2\2\2\u0144\u0145\3\2"+
		"\2\2\u0145\u0143\3\2\2\2\u0145\u0146\3\2\2\2\u0146\\\3\2\2\2\u0147\u0148"+
		"\t\4\2\2\u0148^\3\2\2\2\u0149\u014a\t\5\2\2\u014a`\3\2\2\2\u014b\u014d"+
		"\t\6\2\2\u014c\u014b\3\2\2\2\u014d\u014e\3\2\2\2\u014e\u014c\3\2\2\2\u014e"+
		"\u014f\3\2\2\2\u014f\u0150\3\2\2\2\u0150\u0151\b\61\2\2\u0151b\3\2\2\2"+
		"\21\2\u00f8\u0106\u010e\u011e\u0120\u0128\u012a\u012e\u0133\u0139\u013e"+
		"\u0143\u0145\u014e\3\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}