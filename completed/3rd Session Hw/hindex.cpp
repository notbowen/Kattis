#include <bits/stdc++.h>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	long long n, input;
	std::cin >> n;
	std::vector<long long> vec;

	for (long long i = 0ll; i < n; i++) {
		std::cin >> input;
		vec.push_back(input);
	}

	std::sort(vec.begin(), vec.end(), std::greater<long long>());

	for (long long i = 0ll; i < n; i++) {
		if ((i + 1) > vec.at(i)) {
			std::cout << i;
			return 0;
		}
	}
	std::cout << n;

	return 0;
}
