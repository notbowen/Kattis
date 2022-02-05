#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

#define int long long int

int32_t main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int n, h, count = 0; 
	std::cin >> n;
	std::map<int, int> arrows;

	for (int i = 0ll; i < n; i++) {
		std::cin >> h;
		if (arrows.find(h - 1) == arrows.end()) {
			arrows[h-1] = 1;
		} else {
			arrows[h-1]++;
		}
		
		if (arrows.find(h) != arrows.end()) {
			if (arrows[h] != 0) {
				arrows[h]--;
			}
		}
	}

	for (auto it : arrows) {
		count += it.second;
	}
	
	std::cout << count;
}
