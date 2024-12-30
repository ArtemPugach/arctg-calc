#include <iostream>
#include <cmath>
#include <stdexcept>

class ArthCalculator {
public:
    double arth(double x, int terms) {
        if (std::abs(x) >= 1) {
            throw std::invalid_argument("x must be in the range -1 < x < 1");
        }
        double result = 0.0;
        for (int n = 0; n < terms; ++n) {
            result += std::pow(x, 2 * n + 1) / (2 * n + 1);
        }
        return result;
    }
};

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

