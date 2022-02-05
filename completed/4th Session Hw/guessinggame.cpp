#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int num, ans;
	std::string res;
	std::deque<std::pair<int, std::string>> decc;  // <num, response>

	for (int rounds = 0; rounds < 2500; rounds++) {
		while (true) {
			std::cin >> num;
			std::cin.ignore();

			if (num == 0) {
				return 0;
			}

			std::getline(std::cin, res);

			if (res == "right on") {
				ans = num;
				break;
			}
			
			decc.push_back({num, res});
		}

		bool isLying = false;
		for (int i = 0; i < decc.size(); i++) {
			std::pair<int, std::string> it = decc[i];
			if ((it.first < ans && it.second != "too low") || (it.first > ans && it.second != "too high") || (it.first == ans)) {
				std::cout << "Stan is dishonest" << '\n';
				isLying = true;
				break;
			}
		}
		if (isLying == false) {
			std::cout << "Stan may be honest" << '\n';
		}
		decc.clear();
	}
}
