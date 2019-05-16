
#pragma once

#include <exception>
#include <string>

namespace simplesql {
namespace execution {

class ExecutionException : public std::exception {
public:
    ExecutionException(const std::string& _msg) : msg(_msg){}
    const char * what () const throw() {
        return "ExecutionException";
    }

    std::string msg;
};

}} // namespace simplesql::execution 