#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
	int n, x, temp;
	cin >> n >> x;
	int coins[n + 1];
	vector< vector<int> > dp(n + 1, vector<int>(x + 1, 0));
	for (int i = 0; i < n; i++){
		cin >> temp;
		coins[i + 1] = temp;
		dp[i + 1][0] = 1;
	}
	for (int c = 1; c <= n; c++){
		for (int t = 1; t <= x; t++){
			if (t - coins[c] >= 0)
				dp[c][t] = (dp[c - 1][t] + dp[c][t - coins[c]]) % 1000000007;
			else
				dp[c][t] = dp[c - 1][t];
		}
	}
	cout << dp[n][x] << endl;
	return 0;
}