#include <iostream>

int main() {
    long long pointOfZero, degreeChange;
    std::cin >> pointOfZero >> degreeChange;

    // A's formula: y = -x
    // B's formula: y = -{degreeChange}x + pointOfZero
    
    // a1 = -1
    // b1 = 1
    // a2 = -degreeChange
    // b2 = 1
    // c1 = 0
    // c2 = pointOfZero

    double determinant = -1 - (-degreeChange);
    if (degreeChange == 1) {
        if (pointOfZero == 0) {
            // Same line, inf soln
            std::cout << "ALL GOOD";
        } else {
            // Same gradient, 0 soln
            std::cout << "IMPOSSIBLE";
        }
    } else {
        // 1 intersection
        double y = (-1 * pointOfZero)/determinant;
        std::cout << y;
    }

    return 0;
}
