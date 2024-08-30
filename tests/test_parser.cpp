#include <iostream>
#include <cassert>
#include "lexer.h"
#include "parser.h"

void testParser() {
    Lexer lexer("5 + 10");
    auto tokens = lexer.tokenize();
    Parser parser(tokens);
    Expression *expr = parser.parseExpression();

    if (expr) {
        std::cout << "Parser test passed!" << std::endl;
    } else {
        std::cout << "Parser test failed!" << std::endl;
    }
}

int main() {
    testParser();
    return 0;
}
