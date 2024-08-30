#ifndef CODEGEN_H
#define CODEGEN_H

#include "ast.h"

class CodeGenerator {
public:
    void generate(Expression *expr);
};

#endif
