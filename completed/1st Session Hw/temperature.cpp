#include <iostream>
#include <string>

int main() {
    double pointOfZero, degreeChange;
    std::cin >> pointOfZero >> degreeChange;

    pointOfZero = static_cast<float>(pointOfZero);
    degreeChange = static_cast<float>(degreeChange);

    // A's formula: y = x
    // B's formula: y = {degreeChange}x + pointOfZero
    
    // a1 = 1
    // b1 = 1
    // a2 = degreeChange
    // b2 = 1
    // c1 = 0
    // c2 = pointOfZero

    double determinant = 1.0 - degreeChange;
    if (degreeChange == 1.0) {
        if (pointOfZero == 0.0) {
            // Same line, inf soln
            std::cout << "ALL GOOD";
        } else {
            // Same gradient, 0 soln
            std::cout << "IMPOSSIBLE";
        }
    } else {
        // 1 intersection
        double y = pointOfZero/determinant;
        std::string output = std::to_string(y);
        std::cout << output;
    }

    return 0;
}
