
// Generated from SimpleSql.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace simplesql { namespace parser { namespace antlr {


class  SimpleSqlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, SELECT = 6, FROM = 7, 
    WHERE = 8, INSERT = 9, INTO = 10, VALUES = 11, DELETE = 12, CREATE = 13, 
    TABLE = 14, INDEX = 15, ON = 16, AS = 17, OR = 18, AND = 19, NOT = 20, 
    TRUE_ = 21, FALSE_ = 22, EQ = 23, NEQ = 24, NEQJ = 25, LT = 26, LTE = 27, 
    GT = 28, GTE = 29, PLUS = 30, MINUS = 31, ASTERISK = 32, SLASH = 33, 
    PERCENT = 34, STRING = 35, FLOAT_LITERAL = 36, INTEGER_LITERAL = 37, 
    IDENTIFIER = 38, WS = 39
  };

  SimpleSqlLexer(antlr4::CharStream *input);
  ~SimpleSqlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}}}  // namespace simplesql::parser::antlr
