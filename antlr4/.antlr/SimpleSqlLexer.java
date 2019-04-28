// Generated from /home/francis/File/Code/SQL-ON-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.1
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
		INTO=10, VALUES=11, DELETE=12, CREATE=13, TABLE=14, INDEX=15, ON=16, OR=17, 
		AND=18, NOT=19, TRUE_=20, FALSE_=21, EQ=22, NSEQ=23, NEQ=24, NEQJ=25, 
		LT=26, LTE=27, GT=28, GTE=29, PLUS=30, MINUS=31, ASTERISK=32, SLASH=33, 
		PERCENT=34, DIV=35, TILDE=36, AMPERSAND=37, PIPE=38, HAT=39, STRING=40, 
		DOUBLE_LITERAL=41, BIGINT_LITERAL=42, INTEGER_LITERAL=43, SMALLINT_LITERAL=44, 
		IDENTIFIER=45, WS=46;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "SELECT", "FROM", "WHERE", "INSERT", 
		"INTO", "VALUES", "DELETE", "CREATE", "TABLE", "INDEX", "ON", "OR", "AND", 
		"NOT", "TRUE_", "FALSE_", "EQ", "NSEQ", "NEQ", "NEQJ", "LT", "LTE", "GT", 
		"GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "DIV", "TILDE", 
		"AMPERSAND", "PIPE", "HAT", "STRING", "DOUBLE_LITERAL", "BIGINT_LITERAL", 
		"INTEGER_LITERAL", "SMALLINT_LITERAL", "IDENTIFIER", "DIGIT", "LETTER", 
		"WS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "','", "')'", "',('", "'.'", "'SELECT'", "'FROM'", "'WHERE'", 
		"'INSERT'", "'INTO'", "'VALUES'", "'DELETE'", "'CREATE'", "'TABLE'", "'INDEX'", 
		"'ON'", "'OR'", "'AND'", "'NOT'", "'TRUE'", "'FALSE'", null, "'<=>'", 
		"'<>'", "'!='", "'<'", null, "'>'", null, "'+'", "'-'", "'*'", "'/'", 
		"'%'", "'DIV'", "'~'", "'&'", "'|'", "'^'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, "SELECT", "FROM", "WHERE", "INSERT", 
		"INTO", "VALUES", "DELETE", "CREATE", "TABLE", "INDEX", "ON", "OR", "AND", 
		"NOT", "TRUE_", "FALSE_", "EQ", "NSEQ", "NEQ", "NEQJ", "LT", "LTE", "GT", 
		"GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "DIV", "TILDE", 
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\60\u0141\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\3\2\3\2\3\3\3\3\3\4\3\4"+
		"\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3"+
		"\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13"+
		"\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20"+
		"\3\20\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\23\3\23\3\23\3\23\3\24"+
		"\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3\26"+
		"\3\27\3\27\3\27\5\27\u00ca\n\27\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\32"+
		"\3\32\3\32\3\33\3\33\3\34\3\34\3\34\3\34\5\34\u00dc\n\34\3\35\3\35\3\36"+
		"\3\36\3\36\3\36\5\36\u00e4\n\36\3\37\3\37\3 \3 \3!\3!\3\"\3\"\3#\3#\3"+
		"$\3$\3$\3$\3%\3%\3&\3&\3\'\3\'\3(\3(\3)\3)\3)\3)\7)\u0100\n)\f)\16)\u0103"+
		"\13)\3)\3)\3)\3)\3)\7)\u010a\n)\f)\16)\u010d\13)\3)\5)\u0110\n)\3*\6*"+
		"\u0113\n*\r*\16*\u0114\3*\3*\6*\u0119\n*\r*\16*\u011a\3+\6+\u011e\n+\r"+
		"+\16+\u011f\3+\3+\3,\6,\u0125\n,\r,\16,\u0126\3-\6-\u012a\n-\r-\16-\u012b"+
		"\3-\3-\3.\3.\3.\6.\u0133\n.\r.\16.\u0134\3/\3/\3\60\3\60\3\61\6\61\u013c"+
		"\n\61\r\61\16\61\u013d\3\61\3\61\2\2\62\3\3\5\4\7\5\t\6\13\7\r\b\17\t"+
		"\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27"+
		"-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W"+
		"-Y.[/]\2_\2a\60\3\2\7\4\2))^^\4\2$$^^\3\2\62;\3\2C\\\5\2\13\f\17\17\""+
		"\"\2\u014f\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2"+
		"\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27"+
		"\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2"+
		"\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2"+
		"\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2"+
		"\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2"+
		"\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S"+
		"\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2a\3\2\2\2\3c\3\2"+
		"\2\2\5e\3\2\2\2\7g\3\2\2\2\ti\3\2\2\2\13l\3\2\2\2\rn\3\2\2\2\17u\3\2\2"+
		"\2\21z\3\2\2\2\23\u0080\3\2\2\2\25\u0087\3\2\2\2\27\u008c\3\2\2\2\31\u0093"+
		"\3\2\2\2\33\u009a\3\2\2\2\35\u00a1\3\2\2\2\37\u00a7\3\2\2\2!\u00ad\3\2"+
		"\2\2#\u00b0\3\2\2\2%\u00b3\3\2\2\2\'\u00b7\3\2\2\2)\u00bb\3\2\2\2+\u00c0"+
		"\3\2\2\2-\u00c9\3\2\2\2/\u00cb\3\2\2\2\61\u00cf\3\2\2\2\63\u00d2\3\2\2"+
		"\2\65\u00d5\3\2\2\2\67\u00db\3\2\2\29\u00dd\3\2\2\2;\u00e3\3\2\2\2=\u00e5"+
		"\3\2\2\2?\u00e7\3\2\2\2A\u00e9\3\2\2\2C\u00eb\3\2\2\2E\u00ed\3\2\2\2G"+
		"\u00ef\3\2\2\2I\u00f3\3\2\2\2K\u00f5\3\2\2\2M\u00f7\3\2\2\2O\u00f9\3\2"+
		"\2\2Q\u010f\3\2\2\2S\u0112\3\2\2\2U\u011d\3\2\2\2W\u0124\3\2\2\2Y\u0129"+
		"\3\2\2\2[\u0132\3\2\2\2]\u0136\3\2\2\2_\u0138\3\2\2\2a\u013b\3\2\2\2c"+
		"d\7*\2\2d\4\3\2\2\2ef\7.\2\2f\6\3\2\2\2gh\7+\2\2h\b\3\2\2\2ij\7.\2\2j"+
		"k\7*\2\2k\n\3\2\2\2lm\7\60\2\2m\f\3\2\2\2no\7U\2\2op\7G\2\2pq\7N\2\2q"+
		"r\7G\2\2rs\7E\2\2st\7V\2\2t\16\3\2\2\2uv\7H\2\2vw\7T\2\2wx\7Q\2\2xy\7"+
		"O\2\2y\20\3\2\2\2z{\7Y\2\2{|\7J\2\2|}\7G\2\2}~\7T\2\2~\177\7G\2\2\177"+
		"\22\3\2\2\2\u0080\u0081\7K\2\2\u0081\u0082\7P\2\2\u0082\u0083\7U\2\2\u0083"+
		"\u0084\7G\2\2\u0084\u0085\7T\2\2\u0085\u0086\7V\2\2\u0086\24\3\2\2\2\u0087"+
		"\u0088\7K\2\2\u0088\u0089\7P\2\2\u0089\u008a\7V\2\2\u008a\u008b\7Q\2\2"+
		"\u008b\26\3\2\2\2\u008c\u008d\7X\2\2\u008d\u008e\7C\2\2\u008e\u008f\7"+
		"N\2\2\u008f\u0090\7W\2\2\u0090\u0091\7G\2\2\u0091\u0092\7U\2\2\u0092\30"+
		"\3\2\2\2\u0093\u0094\7F\2\2\u0094\u0095\7G\2\2\u0095\u0096\7N\2\2\u0096"+
		"\u0097\7G\2\2\u0097\u0098\7V\2\2\u0098\u0099\7G\2\2\u0099\32\3\2\2\2\u009a"+
		"\u009b\7E\2\2\u009b\u009c\7T\2\2\u009c\u009d\7G\2\2\u009d\u009e\7C\2\2"+
		"\u009e\u009f\7V\2\2\u009f\u00a0\7G\2\2\u00a0\34\3\2\2\2\u00a1\u00a2\7"+
		"V\2\2\u00a2\u00a3\7C\2\2\u00a3\u00a4\7D\2\2\u00a4\u00a5\7N\2\2\u00a5\u00a6"+
		"\7G\2\2\u00a6\36\3\2\2\2\u00a7\u00a8\7K\2\2\u00a8\u00a9\7P\2\2\u00a9\u00aa"+
		"\7F\2\2\u00aa\u00ab\7G\2\2\u00ab\u00ac\7Z\2\2\u00ac \3\2\2\2\u00ad\u00ae"+
		"\7Q\2\2\u00ae\u00af\7P\2\2\u00af\"\3\2\2\2\u00b0\u00b1\7Q\2\2\u00b1\u00b2"+
		"\7T\2\2\u00b2$\3\2\2\2\u00b3\u00b4\7C\2\2\u00b4\u00b5\7P\2\2\u00b5\u00b6"+
		"\7F\2\2\u00b6&\3\2\2\2\u00b7\u00b8\7P\2\2\u00b8\u00b9\7Q\2\2\u00b9\u00ba"+
		"\7V\2\2\u00ba(\3\2\2\2\u00bb\u00bc\7V\2\2\u00bc\u00bd\7T\2\2\u00bd\u00be"+
		"\7W\2\2\u00be\u00bf\7G\2\2\u00bf*\3\2\2\2\u00c0\u00c1\7H\2\2\u00c1\u00c2"+
		"\7C\2\2\u00c2\u00c3\7N\2\2\u00c3\u00c4\7U\2\2\u00c4\u00c5\7G\2\2\u00c5"+
		",\3\2\2\2\u00c6\u00ca\7?\2\2\u00c7\u00c8\7?\2\2\u00c8\u00ca\7?\2\2\u00c9"+
		"\u00c6\3\2\2\2\u00c9\u00c7\3\2\2\2\u00ca.\3\2\2\2\u00cb\u00cc\7>\2\2\u00cc"+
		"\u00cd\7?\2\2\u00cd\u00ce\7@\2\2\u00ce\60\3\2\2\2\u00cf\u00d0\7>\2\2\u00d0"+
		"\u00d1\7@\2\2\u00d1\62\3\2\2\2\u00d2\u00d3\7#\2\2\u00d3\u00d4\7?\2\2\u00d4"+
		"\64\3\2\2\2\u00d5\u00d6\7>\2\2\u00d6\66\3\2\2\2\u00d7\u00d8\7>\2\2\u00d8"+
		"\u00dc\7?\2\2\u00d9\u00da\7#\2\2\u00da\u00dc\7@\2\2\u00db\u00d7\3\2\2"+
		"\2\u00db\u00d9\3\2\2\2\u00dc8\3\2\2\2\u00dd\u00de\7@\2\2\u00de:\3\2\2"+
		"\2\u00df\u00e0\7@\2\2\u00e0\u00e4\7?\2\2\u00e1\u00e2\7#\2\2\u00e2\u00e4"+
		"\7>\2\2\u00e3\u00df\3\2\2\2\u00e3\u00e1\3\2\2\2\u00e4<\3\2\2\2\u00e5\u00e6"+
		"\7-\2\2\u00e6>\3\2\2\2\u00e7\u00e8\7/\2\2\u00e8@\3\2\2\2\u00e9\u00ea\7"+
		",\2\2\u00eaB\3\2\2\2\u00eb\u00ec\7\61\2\2\u00ecD\3\2\2\2\u00ed\u00ee\7"+
		"\'\2\2\u00eeF\3\2\2\2\u00ef\u00f0\7F\2\2\u00f0\u00f1\7K\2\2\u00f1\u00f2"+
		"\7X\2\2\u00f2H\3\2\2\2\u00f3\u00f4\7\u0080\2\2\u00f4J\3\2\2\2\u00f5\u00f6"+
		"\7(\2\2\u00f6L\3\2\2\2\u00f7\u00f8\7~\2\2\u00f8N\3\2\2\2\u00f9\u00fa\7"+
		"`\2\2\u00faP\3\2\2\2\u00fb\u0101\7)\2\2\u00fc\u0100\n\2\2\2\u00fd\u00fe"+
		"\7^\2\2\u00fe\u0100\13\2\2\2\u00ff\u00fc\3\2\2\2\u00ff\u00fd\3\2\2\2\u0100"+
		"\u0103\3\2\2\2\u0101\u00ff\3\2\2\2\u0101\u0102\3\2\2\2\u0102\u0104\3\2"+
		"\2\2\u0103\u0101\3\2\2\2\u0104\u0110\7)\2\2\u0105\u010b\7$\2\2\u0106\u010a"+
		"\n\3\2\2\u0107\u0108\7^\2\2\u0108\u010a\13\2\2\2\u0109\u0106\3\2\2\2\u0109"+
		"\u0107\3\2\2\2\u010a\u010d\3\2\2\2\u010b\u0109\3\2\2\2\u010b\u010c\3\2"+
		"\2\2\u010c\u010e\3\2\2\2\u010d\u010b\3\2\2\2\u010e\u0110\7$\2\2\u010f"+
		"\u00fb\3\2\2\2\u010f\u0105\3\2\2\2\u0110R\3\2\2\2\u0111\u0113\5]/\2\u0112"+
		"\u0111\3\2\2\2\u0113\u0114\3\2\2\2\u0114\u0112\3\2\2\2\u0114\u0115\3\2"+
		"\2\2\u0115\u0116\3\2\2\2\u0116\u0118\7\60\2\2\u0117\u0119\5]/\2\u0118"+
		"\u0117\3\2\2\2\u0119\u011a\3\2\2\2\u011a\u0118\3\2\2\2\u011a\u011b\3\2"+
		"\2\2\u011bT\3\2\2\2\u011c\u011e\5]/\2\u011d\u011c\3\2\2\2\u011e\u011f"+
		"\3\2\2\2\u011f\u011d\3\2\2\2\u011f\u0120\3\2\2\2\u0120\u0121\3\2\2\2\u0121"+
		"\u0122\7N\2\2\u0122V\3\2\2\2\u0123\u0125\5]/\2\u0124\u0123\3\2\2\2\u0125"+
		"\u0126\3\2\2\2\u0126\u0124\3\2\2\2\u0126\u0127\3\2\2\2\u0127X\3\2\2\2"+
		"\u0128\u012a\5]/\2\u0129\u0128\3\2\2\2\u012a\u012b\3\2\2\2\u012b\u0129"+
		"\3\2\2\2\u012b\u012c\3\2\2\2\u012c\u012d\3\2\2\2\u012d\u012e\7U\2\2\u012e"+
		"Z\3\2\2\2\u012f\u0133\5_\60\2\u0130\u0133\5]/\2\u0131\u0133\7a\2\2\u0132"+
		"\u012f\3\2\2\2\u0132\u0130\3\2\2\2\u0132\u0131\3\2\2\2\u0133\u0134\3\2"+
		"\2\2\u0134\u0132\3\2\2\2\u0134\u0135\3\2\2\2\u0135\\\3\2\2\2\u0136\u0137"+
		"\t\4\2\2\u0137^\3\2\2\2\u0138\u0139\t\5\2\2\u0139`\3\2\2\2\u013a\u013c"+
		"\t\6\2\2\u013b\u013a\3\2\2\2\u013c\u013d\3\2\2\2\u013d\u013b\3\2\2\2\u013d"+
		"\u013e\3\2\2\2\u013e\u013f\3\2\2\2\u013f\u0140\b\61\2\2\u0140b\3\2\2\2"+
		"\23\2\u00c9\u00db\u00e3\u00ff\u0101\u0109\u010b\u010f\u0114\u011a\u011f"+
		"\u0126\u012b\u0132\u0134\u013d\3\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}