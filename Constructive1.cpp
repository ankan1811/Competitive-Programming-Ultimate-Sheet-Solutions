#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (auto &it : a) 
			cin >> it;
		vector<int> b(n);
		for (auto &it : b) cin >> it;
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());//reverse
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			if (i < k) ans += max(a[i], b[i]);
			else ans += a[i];
		}
		cout << ans << endl;
	}
	
	return 0;
}
