#include "lexer.cpp"
#include "parser.cpp"
#include "codegen.cpp"

int main() {
    std::string source = "5 + 3";
    
    Lexer lexer(source);
    std::vector<Token> tokens = lexer.tokenize();

    Parser parser(tokens);
    Expression* expression = parser.parseExpression();

    CodeGenerator codegen;
    codegen.generate(expression);

    return 0;
}
