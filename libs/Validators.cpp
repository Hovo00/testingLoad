#include "Validators.hpp"
std::string Validators::validateFloat(const std::string& inputExpr, int& pos) {
    if (!std::isdigit(inputExpr[pos])) {
        return "";
    }
    std::string lexem;
    lexem = cutNumberFromExpression(inputExpr, pos);
    // if (pos == inputExpr.size()) {
    //     return lexem;
    // }
    return lexem;
}
std::string Validators::cutNumberFromExpression(const std::string& inputExpr, int& pos) {

    if (inputExpr[pos] == '-') {
        if (pos + 1 >= inputExpr.size() || !std::isdigit(inputExpr[pos + 1])) {
            //throw invalidSyntax(pos, inputExpr);
        }
    }
    std::string number;
    number.push_back(inputExpr[pos++]);
    int pointsCount = 0;
    while (pos < inputExpr.size() && (std::isdigit(inputExpr[pos]) || inputExpr[pos] == '.')) {
        if (inputExpr[pos] == '.') {
            if (++pointsCount > 1) {
                //throw invalidSyntax(pos, inputExpr);
            }
        }
        number.push_back(inputExpr[pos++]);
    }
    if (inputExpr[pos - 1] == '.') {
        //throw invalidSyntax(pos, inputExpr);
    }
    return number;
}
