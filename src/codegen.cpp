#include "ast.h"
#include <iostream>

class CodeGenerator {
public:
    void generate(Expression *expr) {
        if (auto binary = dynamic_cast<BinaryExpr*>(expr)) {
            generate(binary->left);
            std::cout << " " << binary->op << " ";
            generate(binary->right);
        } else if (auto number = dynamic_cast<NumberExpr*>(expr)) {
            std::cout << number->value;
        }
    }
};
