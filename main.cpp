#include <iostream>
#include "ArthCalculator.h"

int main() {
    ArthCalculator calculator;
    double x;
    int terms;

    std::cout << "Enter x (-1 < x < 1): ";
    std::cin >> x;

    std::cout << "Enter number of terms: ";
    std::cin >> terms;

    try {
        double result = calculator.arth(x, terms);
        std::cout << "arth(" << x << ") = " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

