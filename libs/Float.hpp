#ifndef FLOAT_H
#define FLOAT_H
#include <string>
#include "Operand.hpp"

class Float : public Operand {
public:
    Float(double number);
public:
    const Operand* evaluate() const override;
    std::string toString() const override;
public:
    double getValue() const;
private:
    double _value;
};

#endif