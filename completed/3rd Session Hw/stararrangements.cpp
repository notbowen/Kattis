#include <bits/stdc++.h>

bool check(int total, int a, int b) {
	if ((total - a) % (a + b) == 0) {
		return true;
	} else if (a + b == total) {
		return true;
	} else if (total % (a + b) == 0) {
		return true; 
	} else {
		return false;
	}
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int total;
	int a = 1, b = 1;

	std::cin >> total;
	std::cout << total << ":\n";

	for (int i = 0; i < (total/2); i++) {
		a++;
		if (check(total, a, b)) {
			std::cout << a << ',' << b << '\n';
		}
		b++;
		if (check(total, a, b)) {
            std::cout << a << ',' << b << '\n';
        }
	}
}
