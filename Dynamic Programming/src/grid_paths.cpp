#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
	int n;
	char c;
	cin >> n;
	vector< vector<int>> dp(n + 1, vector<int>(n + 1, 0));
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> c;
			if (i == 1 && j == 1){
				dp[i][j] = (c == '.' ? 1 : 0);
			}
			else if (c != '*'){
				dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000007;
			}
		}
	}
	cout << dp[n][n] << endl;
	return 0;

}





