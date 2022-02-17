#include <bits/stdc++.h>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

#define int long long int

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int five, ten, twenty, fifty, total;
    int fiveCount = 0, tenCount = 0, twentyCount = 0, fiftyCount = 0;
    cin >> five >> ten >> twenty >> fifty >> total;

    if ((five * 5) + (ten * 10) + (twenty * 20) + (fifty * 50) < total) {
        cout << -1;
        return 0;
    }

    bool stuckBetZero = false;
    while (total > 0) {
        if (total >= 50 && fiftyCount < fifty) {
            fiftyCount++;
            total -= 50;
        } else if (total >= 20 && twentyCount < twenty)  {
            twentyCount++;
            total -= 20;
        } else if (total >= 10 && tenCount < ten) {
            tenCount++;
            total -= 10;
        } else if (total >= 5 && fiveCount < five) {
            fiveCount++;
            total -= 5;
        } else {
            stuckBetZero = true;
            break;
        }
    }

    if (stuckBetZero) {
        if (total >= 0 && fiveCount < five) {
            fiveCount++;
        } else if (total >= 5 && tenCount < ten) {
            tenCount++;
        } else if (total >= 10 && twentyCount < twenty) {
            twentyCount++;
        } else if (total >= 20 && fiftyCount < fifty) {
            fiftyCount++;
        } else {
            cout << -1;
            return 0;
        }
    }

    int totalCount = fiveCount + tenCount + twentyCount + fiftyCount;
    cout << fiveCount << ' ' << tenCount << ' ' << twentyCount << ' ' << fiftyCount << ' ' << totalCount;

    return 0;
}
