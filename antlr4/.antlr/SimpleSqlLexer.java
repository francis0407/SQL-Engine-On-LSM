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
		T__0=1, T__1=2, T__2=3, T__3=4, SELECT=5, FROM=6, WHERE=7, INSERT=8, INTO=9, 
		VALUES=10, DELETE=11, CREATE=12, COPY=13, DELIMITER=14, CSV=15, HEADER=16, 
		TABLE=17, INDEX=18, ON=19, AS=20, OR=21, AND=22, NOT=23, TRUE_=24, FALSE_=25, 
		EQ=26, NEQ=27, NEQJ=28, LT=29, LTE=30, GT=31, GTE=32, PLUS=33, MINUS=34, 
		ASTERISK=35, SLASH=36, PERCENT=37, STRING=38, FLOAT_LITERAL=39, INTEGER_LITERAL=40, 
		IDENTIFIER=41, WS=42;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "SELECT", "FROM", "WHERE", "INSERT", "INTO", 
		"VALUES", "DELETE", "CREATE", "COPY", "DELIMITER", "CSV", "HEADER", "TABLE", 
		"INDEX", "ON", "AS", "OR", "AND", "NOT", "TRUE_", "FALSE_", "EQ", "NEQ", 
		"NEQJ", "LT", "LTE", "GT", "GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", 
		"PERCENT", "STRING", "FLOAT_LITERAL", "INTEGER_LITERAL", "IDENTIFIER", 
		"DIGIT", "LETTER", "WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2,\u0135\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3\6"+
		"\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3"+
		"\t\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f"+
		"\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16"+
		"\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20"+
		"\3\21\3\21\3\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\23"+
		"\3\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\25\3\25\3\25\3\26\3\26\3\26"+
		"\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\33\3\33\3\33\5\33\u00dc\n\33\3\34\3\34\3\34"+
		"\3\35\3\35\3\35\3\36\3\36\3\37\3\37\3\37\3\37\5\37\u00ea\n\37\3 \3 \3"+
		"!\3!\3!\3!\5!\u00f2\n!\3\"\3\"\3#\3#\3$\3$\3%\3%\3&\3&\3\'\3\'\3\'\3\'"+
		"\7\'\u0102\n\'\f\'\16\'\u0105\13\'\3\'\3\'\3\'\3\'\3\'\7\'\u010c\n\'\f"+
		"\'\16\'\u010f\13\'\3\'\5\'\u0112\n\'\3(\6(\u0115\n(\r(\16(\u0116\3(\3"+
		"(\6(\u011b\n(\r(\16(\u011c\3)\6)\u0120\n)\r)\16)\u0121\3*\3*\3*\6*\u0127"+
		"\n*\r*\16*\u0128\3+\3+\3,\3,\3-\6-\u0130\n-\r-\16-\u0131\3-\3-\2\2.\3"+
		"\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37"+
		"\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37="+
		" ?!A\"C#E$G%I&K\'M(O)Q*S+U\2W\2Y,\3\2\7\4\2))^^\4\2$$^^\3\2\62;\3\2C\\"+
		"\5\2\13\f\17\17\"\"\2\u0141\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3"+
		"\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2"+
		"\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37"+
		"\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3"+
		"\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2"+
		"\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C"+
		"\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2"+
		"\2\2\2Q\3\2\2\2\2S\3\2\2\2\2Y\3\2\2\2\3[\3\2\2\2\5]\3\2\2\2\7_\3\2\2\2"+
		"\ta\3\2\2\2\13c\3\2\2\2\rj\3\2\2\2\17o\3\2\2\2\21u\3\2\2\2\23|\3\2\2\2"+
		"\25\u0081\3\2\2\2\27\u0088\3\2\2\2\31\u008f\3\2\2\2\33\u0096\3\2\2\2\35"+
		"\u009b\3\2\2\2\37\u00a5\3\2\2\2!\u00a9\3\2\2\2#\u00b0\3\2\2\2%\u00b6\3"+
		"\2\2\2\'\u00bc\3\2\2\2)\u00bf\3\2\2\2+\u00c2\3\2\2\2-\u00c5\3\2\2\2/\u00c9"+
		"\3\2\2\2\61\u00cd\3\2\2\2\63\u00d2\3\2\2\2\65\u00db\3\2\2\2\67\u00dd\3"+
		"\2\2\29\u00e0\3\2\2\2;\u00e3\3\2\2\2=\u00e9\3\2\2\2?\u00eb\3\2\2\2A\u00f1"+
		"\3\2\2\2C\u00f3\3\2\2\2E\u00f5\3\2\2\2G\u00f7\3\2\2\2I\u00f9\3\2\2\2K"+
		"\u00fb\3\2\2\2M\u0111\3\2\2\2O\u0114\3\2\2\2Q\u011f\3\2\2\2S\u0126\3\2"+
		"\2\2U\u012a\3\2\2\2W\u012c\3\2\2\2Y\u012f\3\2\2\2[\\\7*\2\2\\\4\3\2\2"+
		"\2]^\7.\2\2^\6\3\2\2\2_`\7+\2\2`\b\3\2\2\2ab\7\60\2\2b\n\3\2\2\2cd\7U"+
		"\2\2de\7G\2\2ef\7N\2\2fg\7G\2\2gh\7E\2\2hi\7V\2\2i\f\3\2\2\2jk\7H\2\2"+
		"kl\7T\2\2lm\7Q\2\2mn\7O\2\2n\16\3\2\2\2op\7Y\2\2pq\7J\2\2qr\7G\2\2rs\7"+
		"T\2\2st\7G\2\2t\20\3\2\2\2uv\7K\2\2vw\7P\2\2wx\7U\2\2xy\7G\2\2yz\7T\2"+
		"\2z{\7V\2\2{\22\3\2\2\2|}\7K\2\2}~\7P\2\2~\177\7V\2\2\177\u0080\7Q\2\2"+
		"\u0080\24\3\2\2\2\u0081\u0082\7X\2\2\u0082\u0083\7C\2\2\u0083\u0084\7"+
		"N\2\2\u0084\u0085\7W\2\2\u0085\u0086\7G\2\2\u0086\u0087\7U\2\2\u0087\26"+
		"\3\2\2\2\u0088\u0089\7F\2\2\u0089\u008a\7G\2\2\u008a\u008b\7N\2\2\u008b"+
		"\u008c\7G\2\2\u008c\u008d\7V\2\2\u008d\u008e\7G\2\2\u008e\30\3\2\2\2\u008f"+
		"\u0090\7E\2\2\u0090\u0091\7T\2\2\u0091\u0092\7G\2\2\u0092\u0093\7C\2\2"+
		"\u0093\u0094\7V\2\2\u0094\u0095\7G\2\2\u0095\32\3\2\2\2\u0096\u0097\7"+
		"E\2\2\u0097\u0098\7Q\2\2\u0098\u0099\7R\2\2\u0099\u009a\7[\2\2\u009a\34"+
		"\3\2\2\2\u009b\u009c\7F\2\2\u009c\u009d\7G\2\2\u009d\u009e\7N\2\2\u009e"+
		"\u009f\7K\2\2\u009f\u00a0\7O\2\2\u00a0\u00a1\7K\2\2\u00a1\u00a2\7V\2\2"+
		"\u00a2\u00a3\7G\2\2\u00a3\u00a4\7T\2\2\u00a4\36\3\2\2\2\u00a5\u00a6\7"+
		"E\2\2\u00a6\u00a7\7U\2\2\u00a7\u00a8\7X\2\2\u00a8 \3\2\2\2\u00a9\u00aa"+
		"\7J\2\2\u00aa\u00ab\7G\2\2\u00ab\u00ac\7C\2\2\u00ac\u00ad\7F\2\2\u00ad"+
		"\u00ae\7G\2\2\u00ae\u00af\7T\2\2\u00af\"\3\2\2\2\u00b0\u00b1\7V\2\2\u00b1"+
		"\u00b2\7C\2\2\u00b2\u00b3\7D\2\2\u00b3\u00b4\7N\2\2\u00b4\u00b5\7G\2\2"+
		"\u00b5$\3\2\2\2\u00b6\u00b7\7K\2\2\u00b7\u00b8\7P\2\2\u00b8\u00b9\7F\2"+
		"\2\u00b9\u00ba\7G\2\2\u00ba\u00bb\7Z\2\2\u00bb&\3\2\2\2\u00bc\u00bd\7"+
		"Q\2\2\u00bd\u00be\7P\2\2\u00be(\3\2\2\2\u00bf\u00c0\7C\2\2\u00c0\u00c1"+
		"\7U\2\2\u00c1*\3\2\2\2\u00c2\u00c3\7Q\2\2\u00c3\u00c4\7T\2\2\u00c4,\3"+
		"\2\2\2\u00c5\u00c6\7C\2\2\u00c6\u00c7\7P\2\2\u00c7\u00c8\7F\2\2\u00c8"+
		".\3\2\2\2\u00c9\u00ca\7P\2\2\u00ca\u00cb\7Q\2\2\u00cb\u00cc\7V\2\2\u00cc"+
		"\60\3\2\2\2\u00cd\u00ce\7V\2\2\u00ce\u00cf\7T\2\2\u00cf\u00d0\7W\2\2\u00d0"+
		"\u00d1\7G\2\2\u00d1\62\3\2\2\2\u00d2\u00d3\7H\2\2\u00d3\u00d4\7C\2\2\u00d4"+
		"\u00d5\7N\2\2\u00d5\u00d6\7U\2\2\u00d6\u00d7\7G\2\2\u00d7\64\3\2\2\2\u00d8"+
		"\u00dc\7?\2\2\u00d9\u00da\7?\2\2\u00da\u00dc\7?\2\2\u00db\u00d8\3\2\2"+
		"\2\u00db\u00d9\3\2\2\2\u00dc\66\3\2\2\2\u00dd\u00de\7>\2\2\u00de\u00df"+
		"\7@\2\2\u00df8\3\2\2\2\u00e0\u00e1\7#\2\2\u00e1\u00e2\7?\2\2\u00e2:\3"+
		"\2\2\2\u00e3\u00e4\7>\2\2\u00e4<\3\2\2\2\u00e5\u00e6\7>\2\2\u00e6\u00ea"+
		"\7?\2\2\u00e7\u00e8\7#\2\2\u00e8\u00ea\7@\2\2\u00e9\u00e5\3\2\2\2\u00e9"+
		"\u00e7\3\2\2\2\u00ea>\3\2\2\2\u00eb\u00ec\7@\2\2\u00ec@\3\2\2\2\u00ed"+
		"\u00ee\7@\2\2\u00ee\u00f2\7?\2\2\u00ef\u00f0\7#\2\2\u00f0\u00f2\7>\2\2"+
		"\u00f1\u00ed\3\2\2\2\u00f1\u00ef\3\2\2\2\u00f2B\3\2\2\2\u00f3\u00f4\7"+
		"-\2\2\u00f4D\3\2\2\2\u00f5\u00f6\7/\2\2\u00f6F\3\2\2\2\u00f7\u00f8\7,"+
		"\2\2\u00f8H\3\2\2\2\u00f9\u00fa\7\61\2\2\u00faJ\3\2\2\2\u00fb\u00fc\7"+
		"\'\2\2\u00fcL\3\2\2\2\u00fd\u0103\7)\2\2\u00fe\u0102\n\2\2\2\u00ff\u0100"+
		"\7^\2\2\u0100\u0102\13\2\2\2\u0101\u00fe\3\2\2\2\u0101\u00ff\3\2\2\2\u0102"+
		"\u0105\3\2\2\2\u0103\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u0106\3\2"+
		"\2\2\u0105\u0103\3\2\2\2\u0106\u0112\7)\2\2\u0107\u010d\7$\2\2\u0108\u010c"+
		"\n\3\2\2\u0109\u010a\7^\2\2\u010a\u010c\13\2\2\2\u010b\u0108\3\2\2\2\u010b"+
		"\u0109\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2\2\2\u010d\u010e\3\2"+
		"\2\2\u010e\u0110\3\2\2\2\u010f\u010d\3\2\2\2\u0110\u0112\7$\2\2\u0111"+
		"\u00fd\3\2\2\2\u0111\u0107\3\2\2\2\u0112N\3\2\2\2\u0113\u0115\5U+\2\u0114"+
		"\u0113\3\2\2\2\u0115\u0116\3\2\2\2\u0116\u0114\3\2\2\2\u0116\u0117\3\2"+
		"\2\2\u0117\u0118\3\2\2\2\u0118\u011a\7\60\2\2\u0119\u011b\5U+\2\u011a"+
		"\u0119\3\2\2\2\u011b\u011c\3\2\2\2\u011c\u011a\3\2\2\2\u011c\u011d\3\2"+
		"\2\2\u011dP\3\2\2\2\u011e\u0120\5U+\2\u011f\u011e\3\2\2\2\u0120\u0121"+
		"\3\2\2\2\u0121\u011f\3\2\2\2\u0121\u0122\3\2\2\2\u0122R\3\2\2\2\u0123"+
		"\u0127\5W,\2\u0124\u0127\5U+\2\u0125\u0127\7a\2\2\u0126\u0123\3\2\2\2"+
		"\u0126\u0124\3\2\2\2\u0126\u0125\3\2\2\2\u0127\u0128\3\2\2\2\u0128\u0126"+
		"\3\2\2\2\u0128\u0129\3\2\2\2\u0129T\3\2\2\2\u012a\u012b\t\4\2\2\u012b"+
		"V\3\2\2\2\u012c\u012d\t\5\2\2\u012dX\3\2\2\2\u012e\u0130\t\6\2\2\u012f"+
		"\u012e\3\2\2\2\u0130\u0131\3\2\2\2\u0131\u012f\3\2\2\2\u0131\u0132\3\2"+
		"\2\2\u0132\u0133\3\2\2\2\u0133\u0134\b-\2\2\u0134Z\3\2\2\2\21\2\u00db"+
		"\u00e9\u00f1\u0101\u0103\u010b\u010d\u0111\u0116\u011c\u0121\u0126\u0128"+
		"\u0131\3\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}