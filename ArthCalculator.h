#ifndef ARTHCALCULATOR_H
#define ARTHCALCULATOR_H

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

#endif // ARTHCALCULATOR_H

