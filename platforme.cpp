#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

struct platform {
	int y, startX, endX;
};

bool cmp(platform lhs, platform rhs) {
	return lhs.y > rhs.y;
}

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::deque<platform> decc;
	int n, totalLen = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		platform p;
		std::cin >> p.y >> p.startX >> p.endX;
		decc.push_back(p);
	}

	std::sort(decc.begin(), decc.end(), cmp);

	for (auto p : decc) {
		
	}
}
