#include "Float.hpp"
#include "DontKnow.hpp"
#include "FloatOperations.hpp"
#include "StringToFloat.hpp"
#include <sstream>

std::string Float::toString() const {
    //string stream for removing trailing zeroes
    std::stringstream number;
    number << _value;
    return number.str();
}

Float::Float(double number){
    _value = number;
}

double Float::getValue() const{
    return _value;
}
const Operand* Float::evaluate() const {
    return this;
}

const Operand* allocator(const std::string& value) {
    return new Float(stringToFloat(value));
}

std::vector<OperationInformation> other() {
    std::vector<OperationInformation>  operations;
    operations.push_back(OperationInformation{OperationSigniture{"+", {"float", "float"}}, "float", FloatOperations::floatAddition, Properties{3, Associativity::LeftToRight, Notation::Infix}});
    operations.push_back(OperationInformation{OperationSigniture{"-", {"float", "float"}}, "float", FloatOperations::floatSubtraction, Properties{3, Associativity::LeftToRight, Notation::Infix}});
    return operations;
}

extern "C" {
    std::vector<OperationInformation> getOperations() {
        return other();
    }
const Operand* (*getCreator())(const std::string&){
    return &allocator;
}
}