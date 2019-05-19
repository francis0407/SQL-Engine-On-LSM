
#pragma once

#include "antlr/SimpleSqlParser.h"

#include <exception>
#include <string>
#include <sstream>

namespace simplesql {
namespace parser {

class ParseException : public std::exception {
public:
    ParseException(std::string _msg): msg(_msg) {}
    const char * what () const throw() {
        return string("ParseException: " + msg).data();
    }

    std::string msg;
};


class ParseErrorListener : public antlr4::BaseErrorListener {
public:
    void syntaxError(antlr4::Recognizer * /*recognizer*/, antlr4::Token * /*offendingSymbol*/,size_t line, 
        size_t charPositionInLine, const std::string &msg, std::exception_ptr /*e*/) override {
        std::stringstream ss;
        ss << "line " << line << ":" << charPositionInLine << " " << msg;
        throw ParseException(ss.str());
    }
};

}} // namespace simplesql::parser 