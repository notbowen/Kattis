#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

using namespace std;

struct veg {
    long long weight = 0, cuts = 1ll;
    long double dividedWeight = 0;

    bool operator < (const veg &veg) const {
        return this->dividedWeight < veg.dividedWeight;
    }
};

bool cmp(veg lhs, veg rhs) {
    return lhs.weight > rhs.weight;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long double t;
	long long n;
    veg in;
    deque<veg> decc;

	cin >> t >> n;

    // Get Inputs
    for (int i = 0; i < n; i++) {
        cin >> in.weight;
        in.dividedWeight = in.weight;
        decc.push_back(in);
    }

    sort(decc.begin(), decc.end(), cmp);

    int i = 0;
    while (true) {
        decc[i].cuts++;
        decc[i].dividedWeight = (long double) decc[i].weight / decc[i].cuts;

        auto smallest = min_element(decc.begin(), decc.end());
        auto biggest = max_element(decc.begin(), decc.end());

        long double divided = (long double) smallest->dividedWeight / (long double) biggest->dividedWeight;

        if (divided >= t) {
            break;
        }

        if (i < decc.size()) {
            i++;
        } else {
            i = 0;
        }
    }

    long long totalCuts = 0;
    for (auto it : decc) {
        totalCuts += it.cuts - 1;
    }

    cout << totalCuts;

    return 0;
}
