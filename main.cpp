#include <iostream>
#include "funcA.h"

int main() {
    FuncA func;
    int n = 5;  // Кількість елементів для обчислення
    std::cout << "FuncA result for n=" << n << ": " << func.calculate(n) << std::endl;
    return 0;
}

