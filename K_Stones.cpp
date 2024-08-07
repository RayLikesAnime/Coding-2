#include <bits/stdc++.h>

using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int& x : a) cin >> x;
	vector<bool> dp(k + 1);
	for (int i = 1; i <= k; ++i)
		for (int j : a)
			if (i >= j && dp[i - j]==0)
				dp[i] = 1;
	cout << (dp[k]==1 ? "First" : "Second") << '\n';
}