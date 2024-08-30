#ifndef LEXER_H
#define LEXER_H

#include <string>
#include <vector>

enum TokenType {
    IDENTIFIER, NUMBER, KEYWORD, OPERATOR, NEWLINE, INDENT, DEDENT, EOF_TOKEN
};

struct Token {
    TokenType type;
    std::string value;
};

class Lexer {
public:
    Lexer(const std::string &source);
    std::vector<Token> tokenize();

private:
    std::string source;
    size_t pos;
    int indentLevel;

    Token lexIdentifier();
    Token lexNumber();
};

#endif
