#include <iostream>

int count(int n) {
    if (n == 1) {
        return 1;
    } else {
        std::string x = n;
        return count(n.length()) + 1;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << count(n);
    return 0;
}
