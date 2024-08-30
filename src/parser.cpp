#include "lexer.cpp"
#include "ast.h"

class Parser {
public:
    Parser(const std::vector<Token> &tokens) : tokens(tokens), pos(0) {}

    Expression* parseExpression() {
        Expression* left = parsePrimary();
        while (match({OPERATOR})) {
            std::string op = previous().value;
            Expression* right = parsePrimary();
            left = new BinaryExpr(left, op, right);
        }
        return left;
    }

private:
    std::vector<Token> tokens;
    size_t pos;

    bool match(std::vector<TokenType> types) {
        for (TokenType type : types) {
            if (check(type)) {
                advance();
                return true;
            }
        }
        return false;
    }

    bool check(TokenType type) {
        if (isAtEnd()) return false;
        return tokens[pos].type == type;
    }

    Token advance() {
        if (!isAtEnd()) pos++;
        return previous();
    }

    Token previous() {
        return tokens[pos - 1];
    }

    bool isAtEnd() {
        return pos >= tokens.size() || tokens[pos].type == EOF_TOKEN;
    }

    Expression* parsePrimary() {
        if (match({NUMBER})) {
            return new NumberExpr(previous().value);
        }
        // Add more parsing logic here as needed.
        return nullptr;
    }
};
