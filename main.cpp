#include <iostream>
#include "funcA.h"

int main() {
    FuncA func;  // Створюємо об'єкт класу FuncA
    std::cout << "FuncA result: " << func.calculate() << std::endl;
    return 0;
}

