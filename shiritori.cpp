#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
	std::cin >> n;
	std::string input;
	std::vector<std::string> vec;
	
	for (int i = 0; i < n; i++) {
		std::cin >> input; 
		if (i != 0) {
			// check if last char == first char
			// check for repitition
			// if either is yes, break and print wong
			// print i % 2 == 0 : player 1
			//              else: player 2

			auto it = std::find(vec.begin(), vec.end(), input);

			if (input.front() != vec.back().back() || it != vec.end()) {
				if (i % 2 == 0) {
					std::cout << "Player 1 lost";
				} else {
					std::cout << "Player 2 lost";
				}
				return 0;
			}
		}
		vec.push_back(input);
	}

	std::cout << "Fair Game";
	return 0;
}
