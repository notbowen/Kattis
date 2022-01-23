#include <ios>
#include <iostream>
#include <limits>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(0);
    std::cin.tie(0);

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int iterations, prevNum, input;
        std::cin >> iterations;
        std::cin >> prevNum;
        for (int j = 0; j < (iterations - 1); j++) {
            std::cin >> input;
            if ((input - 1) != prevNum) {
                std::cout << j + 2 << "\n";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
            }
            prevNum = input;
        }
    }
    return 0;
}
