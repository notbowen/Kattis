#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    long long a, b, h;
    std::cin >> a >> b >> h;

	if (a == h) {
		std::cout << 1;
		return 0;
	}

    long long x = a - b;
    double output = static_cast<double>(h) /static_cast<double>(x);

    if (output != (long long)output) {
        output = ceil(output);
    }
    std::cout << output;
}
