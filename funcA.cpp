#include "funcA.h"
#include <cmath>

double FuncA::calculate(int n) {
    double result = 0.0;
    for (int i = 0; i < n; ++i) {
        double term = pow(-1, i) * pow(1.0, 2*i + 1) / (2*i + 1);
        result += term;
    }
    return result;
}

