#include <iostream>
#include <vector>
#include <climits>
using namespace std;
/* Recursive Solution, TLE
int count(vector<int>& ar, int index, int prev, int size, int bound);

int count(vector<int>& ar, int index, int prev, int size, int bound){
	if(ar[index] != 0 && abs(prev - ar[index]) > 1)
		return 0;
	if(ar[index] == 0){
		if (index == size - 1){
			int score = 1;
			if (prev + 1 <= bound)
				score++;
			if (prev - 1 > 0)
				score++;
			return score;
		}
		int temp = 0;
		if (prev + 1 <= bound)
			temp = count(ar, index + 1, prev + 1, size, bound);
		if (prev  - 1 > 0)
			temp += count(ar, index + 1, prev - 1, size, bound);
		return count(ar, index + 1, prev, size, bound)
			+ temp;
	}
	if (index == size - 1)
		return 1;
	return count(ar, index + 1, ar[index], size, bound);
}

int main(){
	int size, bound, temp; //n: num books
	cin >> size >> bound;
	vector<int> ar;
	while(cin >> temp){
		ar.push_back(temp);
	}
	temp = 0;
	if (ar[0] == 0){
		for (int i = 1; i <= bound; i++){
			temp += count(ar, 1, i, size, bound);
		}
	}
	else{
		temp = count(ar, 0, ar[0], size, bound);
	}
	cout << temp << endl;
	return 0;

}

*/

int main(){
	int size, bound, temp;
	cin >> size >> bound;
	vector<int> ar;
	vector<int> dp(size, 0);
	dp[0] = ar[0] == 0 ? bound : 1;
	while(cin >> temp){
		ar.push_back(temp);
	}







}


