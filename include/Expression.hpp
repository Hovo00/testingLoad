#ifndef EXPRESSION_H
#define EXPRESSION_H

class Operand;

class Expression {
public:
    virtual const Operand* evaluate() const = 0;
};

#endif