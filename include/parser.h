#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include "lexer.h"
#include "ast.h"

class Parser {
public:
    Parser(const std::vector<Token> &tokens);
    Expression* parseExpression();

private:
    std::vector<Token> tokens;
    size_t pos;

    bool match(std::vector<TokenType> types);
    bool check(TokenType type);
    Token advance();
    Token previous();
    bool isAtEnd();
    Expression* parsePrimary();
};

#endif
