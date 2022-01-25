#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

bool cmp(std::pair<int, int>left, std::pair<int, int> right) {
	if (left.second != right.second) {
		return left.second < right.second;
	} else {
		return left.first < right.first;
	}
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

	int n = 0;
	std::cin >> n;
	int arr[n];
	std::vector<std::pair<int, int>> maxTemps;
	
	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < (n - 2); i++) {
		std::pair<int, int> temp;
		temp.first = i+1;
		temp.second = std::max(arr[i], arr[i+2]);
		maxTemps.push_back(temp);
	}

	std::sort(maxTemps.begin(), maxTemps.end(), cmp);

	std::cout << maxTemps[0].first << ' ' << maxTemps[0].second;
}
