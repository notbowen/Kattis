#include <iostream>

#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, tb = 0, lr = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
       char c;
       for (int x = 0; x < 2; x++) {
	    std::cin >> c;
    	    if (c == '0') {
		tb++;
	    }	    
	}

       for (int x = 0; x < 2; x++) {
	    std::cin >> c;
    	    if (c == '0') {
		lr++;
	    }	    
	}
    }

    int s = std::min(tb / 2, lr / 2);
    int ds = s * 2;
    std::cout << s << ' ' << tb - ds << ' ' << lr - ds;

    return 0;
}
