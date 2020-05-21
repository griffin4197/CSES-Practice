#include <iostream>
#include <vector>
#include <climits>
using namespace std;
/* Solution #1
int main(){
	int n, temp, current;
	cin >> n;
	//int places = n/10;
	vector<int> dp(n + 1, INT_MAX);
	dp[n] = 0;
	current = n;
	for (int i = n; i >= 0; i--){
		if (dp[i] !=  INT_MAX){
			temp = i;
			while (temp != 0){
				int digit = temp % 10;
				temp /= 10;
				if (i - digit >= 0 && digit > 0)
					dp[i - digit] = min(dp[i - digit], dp[i] + 1);
			}
		} 
	}
	cout << dp[0] << endl;
	return 0;
}
*/

int main(){
	int n;
	cin >> n;
	vector<int> dp(n + 1, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i < 10; i++){
		dp[i] = 1;
	}
	for (int i = 10; i <= n; i++){
		int temp = i;
		while (temp != 0){
			int digit = temp % 10;
			if (digit != 0)
				dp[i] = min(dp[i], dp[i - digit] + 1);
			temp = temp/10;
		}
	}
	cout << dp[n] << endl;
}





