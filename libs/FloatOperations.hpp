#ifndef FLOATOPERATIONS_H
#define FLOATOPERATIONS_H

#include <vector>
#include "Float.hpp"

namespace FloatOperations {
    const Operand* floatAddition(const std::vector<const Operand* >& arguments);
    const Operand* floatSubtraction(const std::vector<const Operand* >& arguments);
    const Operand* floatMultiplication(const std::vector<const Operand* >& arguments);
    const Operand* floatDivision(const std::vector<const Operand* >& arguments);
    const Operand* floatInverse(const std::vector<const Operand* >& arguments);
    const Operand* floatEqual(const std::vector<const Operand* >& arguments);
    const Operand* cosinus(const std::vector<const Operand* >& arguments);
    const Operand* sinus(const std::vector<const Operand* >& arguments);
    const Operand* thernarfloat(const std::vector<const Operand* >& arguments);
    const Operand* fornaryfloat(const std::vector<const Operand* >& arguments);
};

#endif