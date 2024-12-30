#include <iostream>
#include <cassert>
#include "ArthCalculator.h"

void test_arth() {
    ArthCalculator calculator;

    // Тест 1: arth(0) = 0
    assert(std::abs(calculator.arth(0, 10) - 0.0) < 1e-6);

    // Тест 2: arth(0.5)
    double result = calculator.arth(0.5, 10);
    std::cout << "arth(0.5) = " << result << " (expected ~0.5493)" << std::endl;

    // Тест 3: arth(-0.5)
    result = calculator.arth(-0.5, 10);
    std::cout << "arth(-0.5) = " << result << " (expected ~-0.5493)" << std::endl;

    // Тест 4: значення поза діапазоном
    try {
        calculator.arth(1.1, 10);
        assert(false); // Цей рядок не повинен виконатися
    } catch (const std::invalid_argument&) {
        std::cout << "Caught invalid_argument as expected" << std::endl;
    }
}

int main() {
    test_arth();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}

