#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// check if the total sum of the blocks is divisible by n
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			sum += x;
		}
		cout << (sum % n == 0 ? 0 : 1) << '\n';
	}
	return 0;
}