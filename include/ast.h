#ifndef AST_H
#define AST_H

#include <string>
#include <vector>

class ASTNode {
public:
    virtual ~ASTNode() {}
};

class Expression : public ASTNode {
public:
    virtual ~Expression() {}
};

class BinaryExpr : public Expression {
public:
    Expression *left;
    std::string op;
    Expression *right;

    BinaryExpr(Expression *left, const std::string &op, Expression *right)
        : left(left), op(op), right(right) {}
};

class NumberExpr : public Expression {
public:
    std::string value;

    NumberExpr(const std::string &value) : value(value) {}
};

#endif
