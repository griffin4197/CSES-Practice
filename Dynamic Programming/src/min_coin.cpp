#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
	int n, x, buf;
	cin >> n;
	cin >> x;
	vector<int> dp(x + 1, INT_MAX);
	vector<int> coins;
	bool pass = false;
	while (cin >> buf){
		coins.push_back(buf);
	}
	for (auto c: coins){
		if (c <= x)
			dp[c] = 1;
		if (c <= x)
			pass = true;
	}
	if (!pass){
		cout << "-1" << endl;
		return 0;
	}
	for (int i = 1; i <= x; i++){
		for (auto c: coins){
			if (i - c > 0 && dp[i - c] != INT_MAX)
				dp[i] = min(dp[i], dp[i - c] + 1);
		}
	}
	if (dp[x] == INT_MAX)
		cout << "-1" << endl;
	else
		cout << dp[x] << endl;
	return 0;
}