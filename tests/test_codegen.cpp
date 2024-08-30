#include <iostream>
#include <cassert>
#include "lexer.h"
#include "parser.h"
#include "codegen.h"

void testCodegen() {
    Lexer lexer("5 + 10");
    auto tokens = lexer.tokenize();
    Parser parser(tokens);
    Expression *expr = parser.parseExpression();

    CodeGenerator codegen;
    codegen.generate(expr);

    std::cout << "Codegen test executed!" << std::endl;
}

int main() {
    testCodegen();
    return 0;
}
