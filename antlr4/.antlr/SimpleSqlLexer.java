// Generated from /home/francis/File/Code/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.1
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
		INTO=10, VALUES=11, DELETE=12, CREATE=13, TABLE=14, INDEX=15, ON=16, AS=17, 
		OR=18, AND=19, NOT=20, TRUE_=21, FALSE_=22, EQ=23, NSEQ=24, NEQ=25, NEQJ=26, 
		LT=27, LTE=28, GT=29, GTE=30, PLUS=31, MINUS=32, ASTERISK=33, SLASH=34, 
		PERCENT=35, DIV=36, TILDE=37, AMPERSAND=38, PIPE=39, HAT=40, STRING=41, 
		DOUBLE_LITERAL=42, BIGINT_LITERAL=43, INTEGER_LITERAL=44, SMALLINT_LITERAL=45, 
		IDENTIFIER=46, WS=47;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "SELECT", "FROM", "WHERE", "INSERT", 
		"INTO", "VALUES", "DELETE", "CREATE", "TABLE", "INDEX", "ON", "AS", "OR", 
		"AND", "NOT", "TRUE_", "FALSE_", "EQ", "NSEQ", "NEQ", "NEQJ", "LT", "LTE", 
		"GT", "GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "DIV", "TILDE", 
		"AMPERSAND", "PIPE", "HAT", "STRING", "DOUBLE_LITERAL", "BIGINT_LITERAL", 
		"INTEGER_LITERAL", "SMALLINT_LITERAL", "IDENTIFIER", "DIGIT", "LETTER", 
		"WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\61\u0146\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\3\2\3\2\3\3\3"+
		"\3\3\4\3\4\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b"+
		"\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13"+
		"\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3"+
		"\20\3\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\23\3\23\3"+
		"\23\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26\3"+
		"\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\5\30\u00cf\n\30\3\31\3\31"+
		"\3\31\3\31\3\32\3\32\3\32\3\33\3\33\3\33\3\34\3\34\3\35\3\35\3\35\3\35"+
		"\5\35\u00e1\n\35\3\36\3\36\3\37\3\37\3\37\3\37\5\37\u00e9\n\37\3 \3 \3"+
		"!\3!\3\"\3\"\3#\3#\3$\3$\3%\3%\3%\3%\3&\3&\3\'\3\'\3(\3(\3)\3)\3*\3*\3"+
		"*\3*\7*\u0105\n*\f*\16*\u0108\13*\3*\3*\3*\3*\3*\7*\u010f\n*\f*\16*\u0112"+
		"\13*\3*\5*\u0115\n*\3+\6+\u0118\n+\r+\16+\u0119\3+\3+\6+\u011e\n+\r+\16"+
		"+\u011f\3,\6,\u0123\n,\r,\16,\u0124\3,\3,\3-\6-\u012a\n-\r-\16-\u012b"+
		"\3.\6.\u012f\n.\r.\16.\u0130\3.\3.\3/\3/\3/\6/\u0138\n/\r/\16/\u0139\3"+
		"\60\3\60\3\61\3\61\3\62\6\62\u0141\n\62\r\62\16\62\u0142\3\62\3\62\2\2"+
		"\63\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35"+
		"\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36"+
		";\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\2a\2c\61\3\2\7\4\2))^^\4\2"+
		"$$^^\3\2\62;\3\2C\\\5\2\13\f\17\17\"\"\2\u0154\2\3\3\2\2\2\2\5\3\2\2\2"+
		"\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3"+
		"\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2"+
		"\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2"+
		"\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2"+
		"\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2"+
		"\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2"+
		"\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y"+
		"\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2c\3\2\2\2\3e\3\2\2\2\5g\3\2\2\2\7i\3\2"+
		"\2\2\tk\3\2\2\2\13n\3\2\2\2\rp\3\2\2\2\17w\3\2\2\2\21|\3\2\2\2\23\u0082"+
		"\3\2\2\2\25\u0089\3\2\2\2\27\u008e\3\2\2\2\31\u0095\3\2\2\2\33\u009c\3"+
		"\2\2\2\35\u00a3\3\2\2\2\37\u00a9\3\2\2\2!\u00af\3\2\2\2#\u00b2\3\2\2\2"+
		"%\u00b5\3\2\2\2\'\u00b8\3\2\2\2)\u00bc\3\2\2\2+\u00c0\3\2\2\2-\u00c5\3"+
		"\2\2\2/\u00ce\3\2\2\2\61\u00d0\3\2\2\2\63\u00d4\3\2\2\2\65\u00d7\3\2\2"+
		"\2\67\u00da\3\2\2\29\u00e0\3\2\2\2;\u00e2\3\2\2\2=\u00e8\3\2\2\2?\u00ea"+
		"\3\2\2\2A\u00ec\3\2\2\2C\u00ee\3\2\2\2E\u00f0\3\2\2\2G\u00f2\3\2\2\2I"+
		"\u00f4\3\2\2\2K\u00f8\3\2\2\2M\u00fa\3\2\2\2O\u00fc\3\2\2\2Q\u00fe\3\2"+
		"\2\2S\u0114\3\2\2\2U\u0117\3\2\2\2W\u0122\3\2\2\2Y\u0129\3\2\2\2[\u012e"+
		"\3\2\2\2]\u0137\3\2\2\2_\u013b\3\2\2\2a\u013d\3\2\2\2c\u0140\3\2\2\2e"+
		"f\7*\2\2f\4\3\2\2\2gh\7.\2\2h\6\3\2\2\2ij\7+\2\2j\b\3\2\2\2kl\7.\2\2l"+
		"m\7*\2\2m\n\3\2\2\2no\7\60\2\2o\f\3\2\2\2pq\7U\2\2qr\7G\2\2rs\7N\2\2s"+
		"t\7G\2\2tu\7E\2\2uv\7V\2\2v\16\3\2\2\2wx\7H\2\2xy\7T\2\2yz\7Q\2\2z{\7"+
		"O\2\2{\20\3\2\2\2|}\7Y\2\2}~\7J\2\2~\177\7G\2\2\177\u0080\7T\2\2\u0080"+
		"\u0081\7G\2\2\u0081\22\3\2\2\2\u0082\u0083\7K\2\2\u0083\u0084\7P\2\2\u0084"+
		"\u0085\7U\2\2\u0085\u0086\7G\2\2\u0086\u0087\7T\2\2\u0087\u0088\7V\2\2"+
		"\u0088\24\3\2\2\2\u0089\u008a\7K\2\2\u008a\u008b\7P\2\2\u008b\u008c\7"+
		"V\2\2\u008c\u008d\7Q\2\2\u008d\26\3\2\2\2\u008e\u008f\7X\2\2\u008f\u0090"+
		"\7C\2\2\u0090\u0091\7N\2\2\u0091\u0092\7W\2\2\u0092\u0093\7G\2\2\u0093"+
		"\u0094\7U\2\2\u0094\30\3\2\2\2\u0095\u0096\7F\2\2\u0096\u0097\7G\2\2\u0097"+
		"\u0098\7N\2\2\u0098\u0099\7G\2\2\u0099\u009a\7V\2\2\u009a\u009b\7G\2\2"+
		"\u009b\32\3\2\2\2\u009c\u009d\7E\2\2\u009d\u009e\7T\2\2\u009e\u009f\7"+
		"G\2\2\u009f\u00a0\7C\2\2\u00a0\u00a1\7V\2\2\u00a1\u00a2\7G\2\2\u00a2\34"+
		"\3\2\2\2\u00a3\u00a4\7V\2\2\u00a4\u00a5\7C\2\2\u00a5\u00a6\7D\2\2\u00a6"+
		"\u00a7\7N\2\2\u00a7\u00a8\7G\2\2\u00a8\36\3\2\2\2\u00a9\u00aa\7K\2\2\u00aa"+
		"\u00ab\7P\2\2\u00ab\u00ac\7F\2\2\u00ac\u00ad\7G\2\2\u00ad\u00ae\7Z\2\2"+
		"\u00ae \3\2\2\2\u00af\u00b0\7Q\2\2\u00b0\u00b1\7P\2\2\u00b1\"\3\2\2\2"+
		"\u00b2\u00b3\7C\2\2\u00b3\u00b4\7U\2\2\u00b4$\3\2\2\2\u00b5\u00b6\7Q\2"+
		"\2\u00b6\u00b7\7T\2\2\u00b7&\3\2\2\2\u00b8\u00b9\7C\2\2\u00b9\u00ba\7"+
		"P\2\2\u00ba\u00bb\7F\2\2\u00bb(\3\2\2\2\u00bc\u00bd\7P\2\2\u00bd\u00be"+
		"\7Q\2\2\u00be\u00bf\7V\2\2\u00bf*\3\2\2\2\u00c0\u00c1\7V\2\2\u00c1\u00c2"+
		"\7T\2\2\u00c2\u00c3\7W\2\2\u00c3\u00c4\7G\2\2\u00c4,\3\2\2\2\u00c5\u00c6"+
		"\7H\2\2\u00c6\u00c7\7C\2\2\u00c7\u00c8\7N\2\2\u00c8\u00c9\7U\2\2\u00c9"+
		"\u00ca\7G\2\2\u00ca.\3\2\2\2\u00cb\u00cf\7?\2\2\u00cc\u00cd\7?\2\2\u00cd"+
		"\u00cf\7?\2\2\u00ce\u00cb\3\2\2\2\u00ce\u00cc\3\2\2\2\u00cf\60\3\2\2\2"+
		"\u00d0\u00d1\7>\2\2\u00d1\u00d2\7?\2\2\u00d2\u00d3\7@\2\2\u00d3\62\3\2"+
		"\2\2\u00d4\u00d5\7>\2\2\u00d5\u00d6\7@\2\2\u00d6\64\3\2\2\2\u00d7\u00d8"+
		"\7#\2\2\u00d8\u00d9\7?\2\2\u00d9\66\3\2\2\2\u00da\u00db\7>\2\2\u00db8"+
		"\3\2\2\2\u00dc\u00dd\7>\2\2\u00dd\u00e1\7?\2\2\u00de\u00df\7#\2\2\u00df"+
		"\u00e1\7@\2\2\u00e0\u00dc\3\2\2\2\u00e0\u00de\3\2\2\2\u00e1:\3\2\2\2\u00e2"+
		"\u00e3\7@\2\2\u00e3<\3\2\2\2\u00e4\u00e5\7@\2\2\u00e5\u00e9\7?\2\2\u00e6"+
		"\u00e7\7#\2\2\u00e7\u00e9\7>\2\2\u00e8\u00e4\3\2\2\2\u00e8\u00e6\3\2\2"+
		"\2\u00e9>\3\2\2\2\u00ea\u00eb\7-\2\2\u00eb@\3\2\2\2\u00ec\u00ed\7/\2\2"+
		"\u00edB\3\2\2\2\u00ee\u00ef\7,\2\2\u00efD\3\2\2\2\u00f0\u00f1\7\61\2\2"+
		"\u00f1F\3\2\2\2\u00f2\u00f3\7\'\2\2\u00f3H\3\2\2\2\u00f4\u00f5\7F\2\2"+
		"\u00f5\u00f6\7K\2\2\u00f6\u00f7\7X\2\2\u00f7J\3\2\2\2\u00f8\u00f9\7\u0080"+
		"\2\2\u00f9L\3\2\2\2\u00fa\u00fb\7(\2\2\u00fbN\3\2\2\2\u00fc\u00fd\7~\2"+
		"\2\u00fdP\3\2\2\2\u00fe\u00ff\7`\2\2\u00ffR\3\2\2\2\u0100\u0106\7)\2\2"+
		"\u0101\u0105\n\2\2\2\u0102\u0103\7^\2\2\u0103\u0105\13\2\2\2\u0104\u0101"+
		"\3\2\2\2\u0104\u0102\3\2\2\2\u0105\u0108\3\2\2\2\u0106\u0104\3\2\2\2\u0106"+
		"\u0107\3\2\2\2\u0107\u0109\3\2\2\2\u0108\u0106\3\2\2\2\u0109\u0115\7)"+
		"\2\2\u010a\u0110\7$\2\2\u010b\u010f\n\3\2\2\u010c\u010d\7^\2\2\u010d\u010f"+
		"\13\2\2\2\u010e\u010b\3\2\2\2\u010e\u010c\3\2\2\2\u010f\u0112\3\2\2\2"+
		"\u0110\u010e\3\2\2\2\u0110\u0111\3\2\2\2\u0111\u0113\3\2\2\2\u0112\u0110"+
		"\3\2\2\2\u0113\u0115\7$\2\2\u0114\u0100\3\2\2\2\u0114\u010a\3\2\2\2\u0115"+
		"T\3\2\2\2\u0116\u0118\5_\60\2\u0117\u0116\3\2\2\2\u0118\u0119\3\2\2\2"+
		"\u0119\u0117\3\2\2\2\u0119\u011a\3\2\2\2\u011a\u011b\3\2\2\2\u011b\u011d"+
		"\7\60\2\2\u011c\u011e\5_\60\2\u011d\u011c\3\2\2\2\u011e\u011f\3\2\2\2"+
		"\u011f\u011d\3\2\2\2\u011f\u0120\3\2\2\2\u0120V\3\2\2\2\u0121\u0123\5"+
		"_\60\2\u0122\u0121\3\2\2\2\u0123\u0124\3\2\2\2\u0124\u0122\3\2\2\2\u0124"+
		"\u0125\3\2\2\2\u0125\u0126\3\2\2\2\u0126\u0127\7N\2\2\u0127X\3\2\2\2\u0128"+
		"\u012a\5_\60\2\u0129\u0128\3\2\2\2\u012a\u012b\3\2\2\2\u012b\u0129\3\2"+
		"\2\2\u012b\u012c\3\2\2\2\u012cZ\3\2\2\2\u012d\u012f\5_\60\2\u012e\u012d"+
		"\3\2\2\2\u012f\u0130\3\2\2\2\u0130\u012e\3\2\2\2\u0130\u0131\3\2\2\2\u0131"+
		"\u0132\3\2\2\2\u0132\u0133\7U\2\2\u0133\\\3\2\2\2\u0134\u0138\5a\61\2"+
		"\u0135\u0138\5_\60\2\u0136\u0138\7a\2\2\u0137\u0134\3\2\2\2\u0137\u0135"+
		"\3\2\2\2\u0137\u0136\3\2\2\2\u0138\u0139\3\2\2\2\u0139\u0137\3\2\2\2\u0139"+
		"\u013a\3\2\2\2\u013a^\3\2\2\2\u013b\u013c\t\4\2\2\u013c`\3\2\2\2\u013d"+
		"\u013e\t\5\2\2\u013eb\3\2\2\2\u013f\u0141\t\6\2\2\u0140\u013f\3\2\2\2"+
		"\u0141\u0142\3\2\2\2\u0142\u0140\3\2\2\2\u0142\u0143\3\2\2\2\u0143\u0144"+
		"\3\2\2\2\u0144\u0145\b\62\2\2\u0145d\3\2\2\2\23\2\u00ce\u00e0\u00e8\u0104"+
		"\u0106\u010e\u0110\u0114\u0119\u011f\u0124\u012b\u0130\u0137\u0139\u0142"+
		"\3\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}