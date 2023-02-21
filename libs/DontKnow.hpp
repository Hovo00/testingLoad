#ifndef DONT_KNOW_HPP
#define DONT_KNOW_HPP

#include <vector>
#include "OperationInfo.hpp"

class Operand;
struct OperationInformation{
    OperationSigniture signiture;
    std::string returnType;
    const Operand* (*handler)(const std::vector<const Operand*>&);
    Properties properties;
};

#endif