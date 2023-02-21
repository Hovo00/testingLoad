#include <iostream>
#include "Operand.hpp"
#include "DLLoader.hpp"

static const char* floatPath = "./libFloat.dylib";
int main() {
    dlloader::DLLoader loader(floatPath);
    loader.DLOpenLib();
    auto funci = loader.DLGetCreator();
    auto resik = funci("12");
    std::cout << resik->toString();
    loader.DLCloseLib();
}