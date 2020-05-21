#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
	int num, money, temp; //n: num books
	cin >> num >> money;
	vector<int> price;
	vector<int> pages;
	price.push_back(0);
	pages.push_back(0);
	vector< vector<int> > dp(num + 1, vector<int>(money + 1, 0));
	//vector< vector<bool> > taken(num + 1, vector<int>(money + 1, false));
	for (int i = 0; i < num; i++){
		cin >> temp;
		price.push_back(temp);
	}
	for (int i = 0; i < num; i++){
		cin >> temp;
		pages.push_back(temp);
	}

	for (int n = 1; n <= num; n++){
		for (int m = 1; m <= money; m++){
			if (m - price[n] >= 0){
				dp[n][m] = max(dp[n - 1][m - price[n]] + pages[n], dp[n - 1][m]);
			}
			else
				dp[n][m] = dp[n][m - 1];
		}
	}
	cout << dp[num][money] << endl;
	return 0;

}





