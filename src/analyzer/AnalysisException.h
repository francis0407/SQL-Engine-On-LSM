
#pragma once

#include <exception>
#include <string>

namespace simplesql {
namespace analyzer {

class AnalysisException : public std::exception {
public:
    AnalysisException(const std::string& _msg) : msg(_msg){}
    const char * what () const throw() {
        return "AnalysisException";
    }

    std::string msg;
};

}} // namespace simplesql::analyzer 