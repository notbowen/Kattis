#include <iostream>

int main() {
	int l, r;
	std::cin >> l >> r;

	if (l == 0 && r == 0) {
		std::cout << "Not a moose";
		return 0;
	}

	if (l == r) {
		std::cout << "Even " << l + r;
	} else {
		std::cout << "Odd " << std::max(l, r) * 2;
	}

	return 0;
}
