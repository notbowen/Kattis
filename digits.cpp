#include <iostream>
#include <sstream>
#include <vector>

int x;

void count(std::string n) {
    if (n == "1") {
        x++;
        return;
    } else {
        x++;
        count(std::to_string(n.size()));
    }
}

int main() {
    std::string n;
    std::vector<int> output;
    while (true) {
        x = 0;
        std::cin >> n;
        if (n == "END") {
            break;
        }
        count(n);
        output.push_back(x);
    }

    for (int i : output) {
        std::cout << i << "\n";
    }
    return 0;
}
