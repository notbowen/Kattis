#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	long long offered, needed, total = 0;
	std::cin >> offered >> needed;
	long long offeredArr[100000];

	for (long long i = 0; i < offered; i++) {
		std::cin >> offeredArr[i];
	}

	std::sort(offeredArr, offeredArr + offered);
	long long input;

	for (long long i = 0; i < needed; i++) {
		std::cin >> input;
		auto it = std::lower_bound(offeredArr, offeredArr + offered, input);
		while (*it < input) {
			it++;
		}
		total += *it - input;
	}

	std::cout << total;
}
