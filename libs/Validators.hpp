#ifndef OPERANDVALIDATORS_HPP
#define OPERANDVALIDATORS_HPP
#include <string>

namespace Validators {

    std::string validateFloat(const std::string& inputExpression, int& pos);
    std::string cutNumberFromExpression(const std::string& inputExpression, int& pos);

};

#endif