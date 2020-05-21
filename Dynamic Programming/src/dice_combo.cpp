#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> dp(n, 0);
	dp[0] = 1;
	for (int s = 1; s < n; s++){
		if (s < 6)
			dp[s]++;
		for (int r = 1; r <= 6; r++){
			if (s - r >= 0){
				dp[s] = (dp[s] + dp[s - r]) % 1000000007;
			}
		}
	}
	cout << dp[n - 1] << endl;
	return 0;
}