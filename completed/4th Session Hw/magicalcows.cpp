#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	long long c, n, m, input;
	std::cin >> c >> n >> m;	
	std::deque<std::pair<long long, long long>> decc;
	std::deque<long long> sums, checks;

	for (long long i = 0; i < n; i++) {
		std::cin >> input;
		decc.push_back({input, 1});
	}

	for (long long i = 0; i < m; i++) {
		long long day;
		std::cin >> day;
		checks.push_back(day);
	}

	// Get maximum days to simulate
	sums.push_back(decc.size());
	for (long long i = 1; i <= 50; i++) {
		for (long long j = 0; j < decc.size(); j++) {
			if (decc[j].first * 2 > c) {
				decc[j].second *= 2;
			} else {
				decc[j].first *= 2;
			}
		}
		long long sum = 0;
		for (auto it : decc) {
			sum += it.second;
		}
		sums.push_back(sum);
	}

	for (long long i = 0; i < m; i++) {
		std::cout << sums[checks[i]] << '\n';
	}
}
