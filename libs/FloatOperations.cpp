#include "FloatOperations.hpp"
#include <cmath>

const Operand* FloatOperations::floatAddition(const std::vector<const Operand* >& arguments) {
    auto f1 = static_cast<const Float*>(arguments[0]);
    auto f2 = static_cast<const Float*>(arguments[1]);
    return new Float(f1->getValue() + f2->getValue());
}
const Operand* FloatOperations::floatSubtraction(const std::vector<const Operand* >& arguments) {
    auto f1 = static_cast<const Float*>(arguments[0]);
    auto f2 = static_cast<const Float*>(arguments[1]);
    return new Float(f1->getValue() - f2->getValue());
}
const Operand* FloatOperations::floatMultiplication(const std::vector<const Operand* >& arguments) {
    auto f1 = static_cast<const Float*>(arguments[0]);
    auto f2 = static_cast<const Float*>(arguments[1]);
    return new Float(f1->getValue() * f2->getValue());
}
const Operand* FloatOperations::floatDivision(const std::vector<const Operand* >& arguments) {
    auto f1 = static_cast<const Float*>(arguments[0]);
    auto f2 = static_cast<const Float*>(arguments[1]);
    return new Float(f1->getValue() / f2->getValue());
}
const Operand* FloatOperations::sinus(const std::vector<const Operand* >& arguments) {
    auto varFloat = static_cast<const Float*>(arguments[0]);
    return new Float(std::sin(varFloat->getValue() * M_PI / 180));
}
const Operand* FloatOperations::cosinus(const std::vector<const Operand* >& arguments) {
    auto varFloat = static_cast<const Float*>(arguments[0]);
    auto res = new Float(std::cos(varFloat->getValue() * M_PI / 180));
    return res;
}
const Operand* FloatOperations::floatInverse(const std::vector<const Operand* >& arguments) {
    auto flt = static_cast<const Float*>(arguments[0]);
    return new Float(-flt->getValue());
}
// const Operand* FloatOperations::floatEqual(const std::vector<const Operand* >& arguments) {
//     auto flt1 = static_cast<const Float*>(arguments[0]);
//     auto flt2 = static_cast<const Float*>(arguments[1]);
//     return std::make_shared<Bool>(flt1->getValue() == flt2->getValue());
// }
// const Operand* FloatOperations::thernarfloat(const std::vector<const Operand* >& arguments) {
//     auto boolean = static_cast<const Bool>(arguments[0]);
//     auto flt1 = static_cast<const Float*>(arguments[1]);
//     auto flt2 = static_cast<const Float*>(arguments[2]);
//     if (boolean->getValue()) {
//         return new Float(flt1->getValue());
//     }
//     return new Float(flt2->getValue());
// }
// const Operand* FloatOperations::fornaryfloat(const std::vector<const Operand* >& arguments) {
//     auto boolean = static_cast<const Bool>(arguments[0]);
//     auto flt1 = static_cast<const Float*>(arguments[1]);
//     auto flt2 = static_cast<const Float*>(arguments[2]);
//     auto flt3 = static_cast<const Float*>(arguments[3]);
//     if (boolean->getValue()) {
//         return new Float(flt1->getValue() * flt2->getValue());
//     }
//     return new Float(flt2->getValue() * flt3->getValue());
// }
