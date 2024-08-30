#include <iostream>
#include <string>
#include <vector>
#include <cctype>

enum TokenType {
    IDENTIFIER, NUMBER, KEYWORD, OPERATOR, NEWLINE, INDENT, DEDENT, EOF_TOKEN
};

struct Token {
    TokenType type;
    std::string value;
};

class Lexer {
public:
    Lexer(const std::string &source) : source(source), pos(0), indentLevel(0) {}

    std::vector<Token> tokenize() {
        std::vector<Token> tokens;
        while (pos < source.length()) {
            if (isspace(source[pos])) {
                pos++;
            } else if (isalpha(source[pos])) {
                tokens.push_back(lexIdentifier());
            } else if (isdigit(source[pos])) {
                tokens.push_back(lexNumber());
            } else if (source[pos] == '+') {
                tokens.push_back({OPERATOR, "+"});
                pos++;
            } else if (source[pos] == '-') {
                tokens.push_back({OPERATOR, "-"});
                pos++;
            } else if (source[pos] == '\n') {
                tokens.push_back({NEWLINE, "\\n"});
                pos++;
            } else {
                std::cerr << "Unexpected character: " << source[pos] << std::endl;
                pos++;
            }
        }
        tokens.push_back({EOF_TOKEN, ""});
        return tokens;
    }

private:
    std::string source;
    size_t pos;
    int indentLevel;

    Token lexIdentifier() {
        size_t start = pos;
        while (pos < source.length() && (isalnum(source[pos]) || source[pos] == '_')) {
            pos++;
        }
        std::string value = source.substr(start, pos - start);
        return {IDENTIFIER, value};
    }

    Token lexNumber() {
        size_t start = pos;
        while (pos < source.length() && isdigit(source[pos])) {
            pos++;
        }
        std::string value = source.substr(start, pos - start);
        return {NUMBER, value};
    }
};
