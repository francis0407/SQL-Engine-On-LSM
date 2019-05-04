
#include <string>

#include "parser/AstBuilder.h"
#include "expressions/AttributeReference.h"
#include "expressions/Literal.h"
#include "datatypes/ValueBase.h"

namespace simplesql {
namespace parser {

using antlrcpp::Any;
using namespace expressions;
using namespace datatypes;
using std::string;

antlrcpp::Any AstBuilder::visitBooleanValue(SimpleSqlParser::BooleanValueContext *ctx) {
    bool value = false;
    if (ctx->FALSE_() == nullptr)
        value = true;
    Any result = Literal::create(value);
    return result;
}

antlrcpp::Any AstBuilder::visitIntegerLiteral(SimpleSqlParser::IntegerLiteralContext *ctx) {
    int value = std::stoi(ctx->INTEGER_LITERAL()->getText());
    if (ctx->MINUS() != nullptr)
        value = -value;
    Any result = Literal::create(value);
    return result;
}


}} // namespace simplesql::parser