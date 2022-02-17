#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

using namespace std;

struct veg {
    int cuts = 0;
    int weight = 0;
    float slicedWeight = 0;

    void recalcWeight() {
        slicedWeight = static_cast<float>(weight) / static_cast<float>(cuts);
    }

    bool operator<(const veg& other) const {
        return slicedWeight < other.slicedWeight;
    }
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    float t;
    int n;
    deque<veg> decc;

    cin >> t >> n;

    for (int i = 0; i < n; i++) {
        veg input;
        cin >> input.weight;
        input.slicedWeight = (float) input.weight;
        input.cuts = 1;

        decc.push_back(input);
    }

    while (true) {
        auto maxVeg = max_element(decc.begin(),decc.end());
        auto minVeg = min_element(decc.begin(),decc.end());

        float slicedWeight = minVeg->slicedWeight / maxVeg->slicedWeight;
        if (slicedWeight >= t) break;

        maxVeg->cuts++;
        maxVeg->recalcWeight();
    }

    int totalCuts = 0;
    for (auto it : decc) {
        totalCuts += (it.cuts - 1);
    }

    cout << totalCuts;

    return 0;
}
