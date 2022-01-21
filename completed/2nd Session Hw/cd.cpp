#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

// Speed pragmas
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

// Main program
int main() {
    // Fast IO
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    while (true) {
        // Variables
        long long jack, jill;
        std::cin >> jack >> jill;
        std::set<std::string> jackCd;
        std::set<std::string> jillCd;
        std::vector<std::string> output;

        // Terminate if input == "0 0"
        if (jack == 0ll && jill == 0ll) {
            break;
        }

        // get input and fill up sets
        std::string input;
        for (long long i = 0ll; i < jack; i++) {
            std::cin >> input;
            jackCd.insert(input);
        }

        for (long long i = 0ll; i < jill; i++) {
            std::cin >> input;
            jillCd.insert(input);
        }
        // if it doesn;t work, try sorting set 

        // Find set intersection and append to output
        std::set_intersection(jackCd.begin(), jackCd.end(), jillCd.begin(), jillCd.end(), std::back_inserter(output));

        // Print output size
        std::cout << output.size() << '\n';
    }

    return 0;
}
