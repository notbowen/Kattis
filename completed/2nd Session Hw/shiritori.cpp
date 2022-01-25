#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
	std::cin >> n;
	std::string input, prevInput;
	std::set<std::string> inputs;
	
	for (int i = 0; i < n; i++) {
		std::cin >> input; 
		if (i != 0) {
			// check if last char == first char
			// check for repitition
			// if either is yes, break and print wong
			// print i % 2 == 0 : player 1
			//              else: player 2

			if (input.front() != prevInput.back() || inputs.count(input) == 1) {
				if (i % 2 == 0) {
					std::cout << "Player 1 lost";
				} else {
					std::cout << "Player 2 lost";
				}
				return 0;
			}
		}
		prevInput = input;
		inputs.insert(input);
	}

	std::cout << "Fair Game";
	return 0;
}
