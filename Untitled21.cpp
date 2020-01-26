#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>
  
using namespace std;
  
#define pb push_back
#define mp make_pair
#define F first
#define S second

int main() {
	int q;
	int l, r, g;
	q = 1;
	while (q--) {
		cin >> l >> r >> g;
		int l_index = (l - 1) / g + 1;
		//cout<<l_index<<endl;
		int r_index = r / g;
		//cout<<r_index<<endl;
		int ans = 0;
		for (int i = l_index; i <= r_index; i++) {
			for (int j = l_index; j <= r_index; j++) {
				if (__gcd(i, j) == 1) {
					++ans;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}
