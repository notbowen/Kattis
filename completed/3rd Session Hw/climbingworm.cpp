#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    long long a, b, h, i = 1;
    std::cin >> a >> b >> h;
	long long total = a;

    while (total < h) {
        total += a;
        total -= b;
        i++;
    }
    std::cout << i;
}
