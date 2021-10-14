#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

inline void debugMode() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
ll dp[101][101];
ll get(ll start, ll end, ll* a) {
	ll sum = 0;
	for (ll i = start; i <= end; i++) {
		sum += a[i];
		sum %= 100;
	}
	return sum;
}
ll solve(ll start, ll end, ll *a) {
	if (start == end) {return 0;}
	if (dp[start][end] != -1) {
		return dp[start][end];
	}
	ll best = LONG_MAX;
	for (ll i = start; i < end; i++) {
		best = min(best, solve(start, i, a) + solve(i + 1, end, a) + get(start, i, a) * get(i + 1, end, a));
	}
	return dp[start][end] = best;

}

int main() 
{
	debugMode();
	ios_base:: sync_with_stdio(false);
	cin.tie(0);


	ll n;

	while (cin >> n) {
		ll arr[n];
		for (ll i = 0; i < n; i++) {
			cin >> arr[i];
		}
		memset(dp, -1, sizeof(dp));
		ll ans =solve(0, n - 1, arr);
		cout << ans << endl;
	}

}
