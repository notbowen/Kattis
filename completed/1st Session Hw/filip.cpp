#include <bits/stdc++.h>

int reverse(int num) {
	int reversed = 0;
	while (num > 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}

	return reversed;
}

int main() {
	int a, b;
    std::cin >> a >> b; 

	a = reverse(a);
	b = reverse(b);

	std::cout << std::max(a, b);

    return 0;
}
