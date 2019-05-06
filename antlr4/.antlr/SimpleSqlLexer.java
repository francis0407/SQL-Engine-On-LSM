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
		OR=18, AND=19, NOT=20, TRUE_=21, FALSE_=22, EQ=23, NEQ=24, NEQJ=25, LT=26, 
		LTE=27, GT=28, GTE=29, PLUS=30, MINUS=31, ASTERISK=32, SLASH=33, PERCENT=34, 
		STRING=35, FLOAT_LITERAL=36, INTEGER_LITERAL=37, IDENTIFIER=38, WS=39;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "SELECT", "FROM", "WHERE", "INSERT", 
		"INTO", "VALUES", "DELETE", "CREATE", "TABLE", "INDEX", "ON", "AS", "OR", 
		"AND", "NOT", "TRUE_", "FALSE_", "EQ", "NEQ", "NEQJ", "LT", "LTE", "GT", 
		"GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "STRING", "FLOAT_LITERAL", 
		"INTEGER_LITERAL", "IDENTIFIER", "DIGIT", "LETTER", "WS"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "','", "')'", "',('", "'.'", "'SELECT'", "'FROM'", "'WHERE'", 
		"'INSERT'", "'INTO'", "'VALUES'", "'DELETE'", "'CREATE'", "'TABLE'", "'INDEX'", 
		"'ON'", "'AS'", "'OR'", "'AND'", "'NOT'", "'TRUE'", "'FALSE'", null, "'<>'", 
		"'!='", "'<'", null, "'>'", null, "'+'", "'-'", "'*'", "'/'", "'%'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, "SELECT", "FROM", "WHERE", "INSERT", 
		"INTO", "VALUES", "DELETE", "CREATE", "TABLE", "INDEX", "ON", "AS", "OR", 
		"AND", "NOT", "TRUE_", "FALSE_", "EQ", "NEQ", "NEQJ", "LT", "LTE", "GT", 
		"GTE", "PLUS", "MINUS", "ASTERISK", "SLASH", "PERCENT", "STRING", "FLOAT_LITERAL", 
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2)\u0118\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\3\2"+
		"\3\3\3\3\3\4\3\4\3\5\3\5\3\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3"+
		"\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13"+
		"\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3"+
		"\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\3\20\3\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\23\3\23"+
		"\3\23\3\24\3\24\3\24\3\24\3\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\26"+
		"\3\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\5\30\u00bf\n\30\3\31\3\31"+
		"\3\31\3\32\3\32\3\32\3\33\3\33\3\34\3\34\3\34\3\34\5\34\u00cd\n\34\3\35"+
		"\3\35\3\36\3\36\3\36\3\36\5\36\u00d5\n\36\3\37\3\37\3 \3 \3!\3!\3\"\3"+
		"\"\3#\3#\3$\3$\3$\3$\7$\u00e5\n$\f$\16$\u00e8\13$\3$\3$\3$\3$\3$\7$\u00ef"+
		"\n$\f$\16$\u00f2\13$\3$\5$\u00f5\n$\3%\6%\u00f8\n%\r%\16%\u00f9\3%\3%"+
		"\6%\u00fe\n%\r%\16%\u00ff\3&\6&\u0103\n&\r&\16&\u0104\3\'\3\'\3\'\6\'"+
		"\u010a\n\'\r\'\16\'\u010b\3(\3(\3)\3)\3*\6*\u0113\n*\r*\16*\u0114\3*\3"+
		"*\2\2+\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17"+
		"\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\35"+
		"9\36;\37= ?!A\"C#E$G%I&K\'M(O\2Q\2S)\3\2\7\4\2))^^\4\2$$^^\3\2\62;\3\2"+
		"C\\\5\2\13\f\17\17\"\"\2\u0124\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t"+
		"\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2"+
		"\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2"+
		"\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2"+
		"+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2"+
		"\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2"+
		"C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2S\3"+
		"\2\2\2\3U\3\2\2\2\5W\3\2\2\2\7Y\3\2\2\2\t[\3\2\2\2\13^\3\2\2\2\r`\3\2"+
		"\2\2\17g\3\2\2\2\21l\3\2\2\2\23r\3\2\2\2\25y\3\2\2\2\27~\3\2\2\2\31\u0085"+
		"\3\2\2\2\33\u008c\3\2\2\2\35\u0093\3\2\2\2\37\u0099\3\2\2\2!\u009f\3\2"+
		"\2\2#\u00a2\3\2\2\2%\u00a5\3\2\2\2\'\u00a8\3\2\2\2)\u00ac\3\2\2\2+\u00b0"+
		"\3\2\2\2-\u00b5\3\2\2\2/\u00be\3\2\2\2\61\u00c0\3\2\2\2\63\u00c3\3\2\2"+
		"\2\65\u00c6\3\2\2\2\67\u00cc\3\2\2\29\u00ce\3\2\2\2;\u00d4\3\2\2\2=\u00d6"+
		"\3\2\2\2?\u00d8\3\2\2\2A\u00da\3\2\2\2C\u00dc\3\2\2\2E\u00de\3\2\2\2G"+
		"\u00f4\3\2\2\2I\u00f7\3\2\2\2K\u0102\3\2\2\2M\u0109\3\2\2\2O\u010d\3\2"+
		"\2\2Q\u010f\3\2\2\2S\u0112\3\2\2\2UV\7*\2\2V\4\3\2\2\2WX\7.\2\2X\6\3\2"+
		"\2\2YZ\7+\2\2Z\b\3\2\2\2[\\\7.\2\2\\]\7*\2\2]\n\3\2\2\2^_\7\60\2\2_\f"+
		"\3\2\2\2`a\7U\2\2ab\7G\2\2bc\7N\2\2cd\7G\2\2de\7E\2\2ef\7V\2\2f\16\3\2"+
		"\2\2gh\7H\2\2hi\7T\2\2ij\7Q\2\2jk\7O\2\2k\20\3\2\2\2lm\7Y\2\2mn\7J\2\2"+
		"no\7G\2\2op\7T\2\2pq\7G\2\2q\22\3\2\2\2rs\7K\2\2st\7P\2\2tu\7U\2\2uv\7"+
		"G\2\2vw\7T\2\2wx\7V\2\2x\24\3\2\2\2yz\7K\2\2z{\7P\2\2{|\7V\2\2|}\7Q\2"+
		"\2}\26\3\2\2\2~\177\7X\2\2\177\u0080\7C\2\2\u0080\u0081\7N\2\2\u0081\u0082"+
		"\7W\2\2\u0082\u0083\7G\2\2\u0083\u0084\7U\2\2\u0084\30\3\2\2\2\u0085\u0086"+
		"\7F\2\2\u0086\u0087\7G\2\2\u0087\u0088\7N\2\2\u0088\u0089\7G\2\2\u0089"+
		"\u008a\7V\2\2\u008a\u008b\7G\2\2\u008b\32\3\2\2\2\u008c\u008d\7E\2\2\u008d"+
		"\u008e\7T\2\2\u008e\u008f\7G\2\2\u008f\u0090\7C\2\2\u0090\u0091\7V\2\2"+
		"\u0091\u0092\7G\2\2\u0092\34\3\2\2\2\u0093\u0094\7V\2\2\u0094\u0095\7"+
		"C\2\2\u0095\u0096\7D\2\2\u0096\u0097\7N\2\2\u0097\u0098\7G\2\2\u0098\36"+
		"\3\2\2\2\u0099\u009a\7K\2\2\u009a\u009b\7P\2\2\u009b\u009c\7F\2\2\u009c"+
		"\u009d\7G\2\2\u009d\u009e\7Z\2\2\u009e \3\2\2\2\u009f\u00a0\7Q\2\2\u00a0"+
		"\u00a1\7P\2\2\u00a1\"\3\2\2\2\u00a2\u00a3\7C\2\2\u00a3\u00a4\7U\2\2\u00a4"+
		"$\3\2\2\2\u00a5\u00a6\7Q\2\2\u00a6\u00a7\7T\2\2\u00a7&\3\2\2\2\u00a8\u00a9"+
		"\7C\2\2\u00a9\u00aa\7P\2\2\u00aa\u00ab\7F\2\2\u00ab(\3\2\2\2\u00ac\u00ad"+
		"\7P\2\2\u00ad\u00ae\7Q\2\2\u00ae\u00af\7V\2\2\u00af*\3\2\2\2\u00b0\u00b1"+
		"\7V\2\2\u00b1\u00b2\7T\2\2\u00b2\u00b3\7W\2\2\u00b3\u00b4\7G\2\2\u00b4"+
		",\3\2\2\2\u00b5\u00b6\7H\2\2\u00b6\u00b7\7C\2\2\u00b7\u00b8\7N\2\2\u00b8"+
		"\u00b9\7U\2\2\u00b9\u00ba\7G\2\2\u00ba.\3\2\2\2\u00bb\u00bf\7?\2\2\u00bc"+
		"\u00bd\7?\2\2\u00bd\u00bf\7?\2\2\u00be\u00bb\3\2\2\2\u00be\u00bc\3\2\2"+
		"\2\u00bf\60\3\2\2\2\u00c0\u00c1\7>\2\2\u00c1\u00c2\7@\2\2\u00c2\62\3\2"+
		"\2\2\u00c3\u00c4\7#\2\2\u00c4\u00c5\7?\2\2\u00c5\64\3\2\2\2\u00c6\u00c7"+
		"\7>\2\2\u00c7\66\3\2\2\2\u00c8\u00c9\7>\2\2\u00c9\u00cd\7?\2\2\u00ca\u00cb"+
		"\7#\2\2\u00cb\u00cd\7@\2\2\u00cc\u00c8\3\2\2\2\u00cc\u00ca\3\2\2\2\u00cd"+
		"8\3\2\2\2\u00ce\u00cf\7@\2\2\u00cf:\3\2\2\2\u00d0\u00d1\7@\2\2\u00d1\u00d5"+
		"\7?\2\2\u00d2\u00d3\7#\2\2\u00d3\u00d5\7>\2\2\u00d4\u00d0\3\2\2\2\u00d4"+
		"\u00d2\3\2\2\2\u00d5<\3\2\2\2\u00d6\u00d7\7-\2\2\u00d7>\3\2\2\2\u00d8"+
		"\u00d9\7/\2\2\u00d9@\3\2\2\2\u00da\u00db\7,\2\2\u00dbB\3\2\2\2\u00dc\u00dd"+
		"\7\61\2\2\u00ddD\3\2\2\2\u00de\u00df\7\'\2\2\u00dfF\3\2\2\2\u00e0\u00e6"+
		"\7)\2\2\u00e1\u00e5\n\2\2\2\u00e2\u00e3\7^\2\2\u00e3\u00e5\13\2\2\2\u00e4"+
		"\u00e1\3\2\2\2\u00e4\u00e2\3\2\2\2\u00e5\u00e8\3\2\2\2\u00e6\u00e4\3\2"+
		"\2\2\u00e6\u00e7\3\2\2\2\u00e7\u00e9\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e9"+
		"\u00f5\7)\2\2\u00ea\u00f0\7$\2\2\u00eb\u00ef\n\3\2\2\u00ec\u00ed\7^\2"+
		"\2\u00ed\u00ef\13\2\2\2\u00ee\u00eb\3\2\2\2\u00ee\u00ec\3\2\2\2\u00ef"+
		"\u00f2\3\2\2\2\u00f0\u00ee\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1\u00f3\3\2"+
		"\2\2\u00f2\u00f0\3\2\2\2\u00f3\u00f5\7$\2\2\u00f4\u00e0\3\2\2\2\u00f4"+
		"\u00ea\3\2\2\2\u00f5H\3\2\2\2\u00f6\u00f8\5O(\2\u00f7\u00f6\3\2\2\2\u00f8"+
		"\u00f9\3\2\2\2\u00f9\u00f7\3\2\2\2\u00f9\u00fa\3\2\2\2\u00fa\u00fb\3\2"+
		"\2\2\u00fb\u00fd\7\60\2\2\u00fc\u00fe\5O(\2\u00fd\u00fc\3\2\2\2\u00fe"+
		"\u00ff\3\2\2\2\u00ff\u00fd\3\2\2\2\u00ff\u0100\3\2\2\2\u0100J\3\2\2\2"+
		"\u0101\u0103\5O(\2\u0102\u0101\3\2\2\2\u0103\u0104\3\2\2\2\u0104\u0102"+
		"\3\2\2\2\u0104\u0105\3\2\2\2\u0105L\3\2\2\2\u0106\u010a\5Q)\2\u0107\u010a"+
		"\5O(\2\u0108\u010a\7a\2\2\u0109\u0106\3\2\2\2\u0109\u0107\3\2\2\2\u0109"+
		"\u0108\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u0109\3\2\2\2\u010b\u010c\3\2"+
		"\2\2\u010cN\3\2\2\2\u010d\u010e\t\4\2\2\u010eP\3\2\2\2\u010f\u0110\t\5"+
		"\2\2\u0110R\3\2\2\2\u0111\u0113\t\6\2\2\u0112\u0111\3\2\2\2\u0113\u0114"+
		"\3\2\2\2\u0114\u0112\3\2\2\2\u0114\u0115\3\2\2\2\u0115\u0116\3\2\2\2\u0116"+
		"\u0117\b*\2\2\u0117T\3\2\2\2\21\2\u00be\u00cc\u00d4\u00e4\u00e6\u00ee"+
		"\u00f0\u00f4\u00f9\u00ff\u0104\u0109\u010b\u0114\3\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}