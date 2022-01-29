#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

bool cmp(std::pair<char, int> left, std::pair<char, int> right) {
    return left.second < right.second;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::map<char, int> data = {{'T', 0}, {'C', 0}, {'G', 0}};
    std::vector<std::pair<char, int>> vec;

    std::string input;
    std::cin >> input;

    for (char i : input) {
        data[i]++;
    }

    for (auto i : data) {
        vec.push_back(i);
    }

    int output = (int)(std::pow(data['T'], 2)) + (int)(std::pow(data['C'], 2)) + (int)(std::pow(data['G'], 2));
    std::sort(vec.begin(), vec.end(), cmp);
    output += (vec.at(0).second * 7);
    std::cout << output;
}