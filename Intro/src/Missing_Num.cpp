#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> ar;
	int temp;
	while (cin >> temp){
		ar.push_back(temp);
	}
	sort(ar.begin(), ar.end());

	//cout << "?" << endl;
	temp = 1;
	for (auto x : ar){
		if (x != temp){
			cout << (x - 1);
			break;
		}
		temp++;
	}
	if (temp == n)
		cout << n;
	return 0;
}