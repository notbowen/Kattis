#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int no;
		std::cin >> no;
		
		if (no % 2 == 0) {
			std::cout << no << " is even\n";
		} else {
			std::cout << no << " is odd\n";
		}
	}

	return 0;
}
