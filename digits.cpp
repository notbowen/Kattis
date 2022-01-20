#include <iostream>
#include <sstream>

int count(int n) {
    if (n == 1) {
        return 1;
    } else {
        std::string x;
        std::stringstream ss;
        ss << n;
        ss >> x;
        return count(x.length()) + 1;
    }
}

int main() {
    std::string n;
    while (true) {
        std::cin >> n;
        if (n == "END") {
            break;
        }
        std::cout << count(std::stoi(n));   
    }
    return 0;
}