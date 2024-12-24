#include <iostream>
#include <cassert>

void test_function() {
    assert(1 + 1 == 2);
    std::cout << "Test passed!" << std::endl;
}

int main() {
    test_function();
    return 0;
}

