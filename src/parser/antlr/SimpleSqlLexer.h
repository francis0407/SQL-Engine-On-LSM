
// Generated from /home/francis/Git/francis/SQL-Engine-On-LSM/antlr4/SimpleSql.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace simplesql { namespace parser { namespace antlr {


class  SimpleSqlLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, SELECT = 6, FROM = 7, 
    WHERE = 8, INSERT = 9, INTO = 10, VALUES = 11, DELETE = 12, CREATE = 13, 
    COPY = 14, DELIMITER = 15, CSV = 16, HEADER = 17, TABLE = 18, TABLES = 19, 
    SHOW = 20, SCHEMA = 21, INDEX = 22, ON = 23, AS = 24, OR = 25, AND = 26, 
    NOT = 27, TRUE_ = 28, FALSE_ = 29, EQ = 30, NEQ = 31, NEQJ = 32, LT = 33, 
    LTE = 34, GT = 35, GTE = 36, PLUS = 37, MINUS = 38, ASTERISK = 39, SLASH = 40, 
    PERCENT = 41, STRING = 42, FLOAT_LITERAL = 43, INTEGER_LITERAL = 44, 
    IDENTIFIER = 45, WS = 46
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
