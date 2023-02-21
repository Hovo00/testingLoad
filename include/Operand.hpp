#ifndef OPERAND_H
#define OPERAND_H

#include <string>
#include "Expression.hpp"

class Operand : public Expression {
public:
    virtual std::string toString() const = 0;
};

#endif