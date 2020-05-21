#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n; //number of projects
	vector<pair<int, int> > proj; //pair of projects (start, end)
	vector<int> reward; //reward for each project
	int start, end, r;
	int high = 0; //need to find highest end date to make dp array
	cin >> n;
	while(cin >> start >> end >> r){
		proj.push_back(pair<int, int>(start, end));
		reward.push_back(r);
		if (end > high)
			high = end;
	}

	vector< vector<int> > dp(n, vector<int>(high + 1, 0));
	for (int i = 0; i <= high; i++){
		if (i >= proj[0].second){
			dp[0][i] = reward[0];
		}
	}
	//indexing dp array day 1 is represented in array position 0
	// re index with 1 as first day
	for (int p = 1; p < n; p++){
		start = proj[p].first;
		end = proj[p].second;
		for (int d = 1; d <= high; d++){
			if (d >= end){
				dp[p][d] = max(dp[p - 1][d], dp[p - 1][start - 1] + reward[p]);
			}
			else{
				dp[p][d] = max(dp[p][d - 1], dp[p - 1][d]);
			}
		}
	}
	cout << dp[n - 1][high] << endl;
	return 0;
}