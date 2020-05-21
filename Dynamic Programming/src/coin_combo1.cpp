#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
	int n, x, temp;
	cin >> n >> x;
	int coins[n];
	vector<int> dp(x + 1, 0);
	for (int i = 0; i < n; i++){
		cin >> temp;
		if (temp <= x)
			dp[temp] = 1;
		coins[i] = temp;

	}
	for (int i = 1; i <= x; i++){
		for (int c = 0; c < n; c++){
			if (i -coins[c] > 0)
				dp[i] = (dp[i] + dp[i - coins[c]]) % 1000000007;
		}
	}
	cout << dp[x] << endl;
	return 0;
}