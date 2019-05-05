
#pragma once

#include <exception>
#include <string>

namespace simplesql {
namespace parser {

class ParseException : public std::exception {
public:
    const char * what () const throw() {
        return "ParseException";
    }

    std::string msg;
};

}} // namespace simplesql::parser 