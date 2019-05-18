
// Generated from /home/francis/Git/francis/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace simplesql { namespace parser { namespace antlr {


class  SimpleSqlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, SELECT = 5, FROM = 6, WHERE = 7, 
    INSERT = 8, INTO = 9, VALUES = 10, DELETE = 11, CREATE = 12, COPY = 13, 
    DELIMITER = 14, CSV = 15, HEADER = 16, TABLE = 17, INDEX = 18, ON = 19, 
    AS = 20, OR = 21, AND = 22, NOT = 23, TRUE_ = 24, FALSE_ = 25, EQ = 26, 
    NEQ = 27, NEQJ = 28, LT = 29, LTE = 30, GT = 31, GTE = 32, PLUS = 33, 
    MINUS = 34, ASTERISK = 35, SLASH = 36, PERCENT = 37, STRING = 38, FLOAT_LITERAL = 39, 
    INTEGER_LITERAL = 40, IDENTIFIER = 41, WS = 42
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
