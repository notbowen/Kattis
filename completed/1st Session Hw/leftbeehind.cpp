#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(0);
    std::cin.tie(0);

    int sweet, sour;
    
    while (true) {
        std::cin >> sweet >> sour;
        int sum = sweet + sour;

        if (sweet == 0 && sour == 0) {
            break;
        }

        else if (sum == 13) {
            std::cout << "Never speak again." << "\n";
        }

        else if (sweet < sour) {
            std::cout << "Left beehind." << "\n";
        }
        else if (sweet > sour) {
            std::cout << "To the convention." << "\n";
        }
        else if (sweet == sour) {
            std::cout << "Undecided." << "\n";
        }
    }
}