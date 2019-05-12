#pragma once

#include "expressions/Expression.h"
#include "operators/Operator.h"
#include "parser/AstBuilder.h"

namespace simplesql {
namespace parser {

using namespace simplesql::expressions;
using namespace simplesql::operators;
using std::string;

class SQLParser {
public:
    SQLParser();

    ExpressionBase* parseExpression(const string& expression);
    OperatorBase* parseSelectQuery(const string& sql);
    OperatorBase* parseStatement(const string& sql);
private:
    AstBuilder visitor;

};

}} // namespace simplesql::parser