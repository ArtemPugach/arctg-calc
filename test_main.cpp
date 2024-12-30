#include <iostream>
#include <cassert>
#include "ArthCalculator.h"

// Функція для тестування arth(x)
void test_arth() {
    ArthCalculator calculator;

    // Тест 1: arth(0) = 0
    assert(std::abs(calculator.arth(0, 10) - 0.0) < 1e-6);

    // Тест 2: arth(0.5) для 10 термів
    double result = calculator.arth(0.5, 10);
    std::cout << "arth(0.5) = " << result << " (expected ~0.5493)" << std::endl;

    // Тест 3: arth(x) поза межами (-1 < x < 1)
    try {
        calculator.arth(1.1, 10);
        assert(false); // Якщо ми тут, значить тест провалився
    } catch (const std::invalid_argument&) {
        std::cout << "Caught invalid_argument as expected" << std::endl;
    }

    // Тест 4: arth(-0.5) для 10 термів
    result = calculator.arth(-0.5, 10);
    std::cout << "arth(-0.5) = " << result << " (expected ~-0.5493)" << std::endl;
}

int main() {
    test_arth();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}

