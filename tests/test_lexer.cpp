#include <iostream>
#include <cassert>
#include "lexer.h"

void testLexer() {
    Lexer lexer("var x = 10;");
    auto tokens = lexer.tokenize();

    assert(tokens[0].type == IDENTIFIER && tokens[0].value == "var");
    assert(tokens[1].type == IDENTIFIER && tokens[1].value == "x");
    assert(tokens[2].type == OPERATOR && tokens[2].value == "=");
    assert(tokens[3].type == NUMBER && tokens[3].value == "10");
    assert(tokens[4].type == EOF_TOKEN);

    std::cout << "Lexer tests passed!" << std::endl;
}

int main() {
    testLexer();
    return 0;
}
