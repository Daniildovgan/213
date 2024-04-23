#include <iostream>

int main() {
    double R1 = 2.0;
    double R2 = 4.0;
    double R3 = 8.0;

    double R0 = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);

    std::cout << "Значення опору R0: " << R0 << std::endl;

    return 0;
}
