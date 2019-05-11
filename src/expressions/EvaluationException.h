#pragma once

#include <exception>
#include <string>

namespace simplesql {
namespace expressions {

class EvaluationException : public std::exception {
public:
    EvaluationException(){}
    EvaluationException(const std::string& _msg) : msg(_msg){}
    const char * what () const throw() {
        return "EvaluationException";
    }
    std::string msg;
};


}} // namespace simplesql::expressions