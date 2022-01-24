#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
	std::cin >> n;
	std::string inputs[n];
	
	for (int i = 0; i < n; i++) {
		std::cin >> inputs[i];
		if (i != 0) {
			// check if last char == first char
			// check for repitition
			// if either is yes, break and print wong
			// print i % 2 == 0 : player 1
			//              else: player 2
			if (inputs[i].front() != inputs[i-1].back() || \
			std::find(inputs, inputs+n, inputs[i]) == inputs+n ) {
				if (i % 2 == 0) {
					std::cout << "Player 1 lost";
				} else {
					std::cout << "Player 2 lost";
				}
				return 0;
			}
		}
	}

	std::cout << "Fair Game";
	return 0;
}
