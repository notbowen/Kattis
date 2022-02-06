#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

using namespace std;

struct platform {
	int y, startX, endX;
};

bool cmp(platform lhs, platform rhs) {
	return lhs.y > rhs.y;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	deque<platform> decc;
	int n, totalLen = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		platform p;
		cin >> p.y >> p.startX >> p.endX;
		p.endX--;
		decc.push_back(p);
	}

	sort(decc.begin(), decc.end(), cmp);

	for (int i = 0; i < (decc.size() - 1); i++) {
		bool isCollide = false;
		for (int j = i + 1; j < decc.size(); j++) {
			if (decc[j].startX <= decc[i].startX && decc[i].startX <= decc[j].endX) {
				isCollide = true;
				totalLen += decc[i].y - decc[j].y;
				break;
			}
		}
		if (!isCollide) { totalLen += decc[i].y; }
		isCollide = false;


		for (int j = i + 1; j < decc.size(); j++) {
			if (decc[j].startX <= decc[i].endX && decc[i].endX <= decc[j].endX) {
				isCollide = true;
				totalLen += decc[i].y - decc[j].y;
				break;
			}
		}
		if (!isCollide) { totalLen += decc[i].y; }
		isCollide = false;
	}

	totalLen += decc.back().y * 2;

	cout << totalLen;
}
