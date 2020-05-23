#include <iostream>

using namespace std;

int main(){
	int cur, prev;
	long long turns = 0;
	cin >> cur;
	cin >> cur;
	prev = cur;
	do {
		if (cur < prev){
			turns += prev - cur;
		}
		else{
			prev = cur;
		}
	} while (cin >> cur);
	cout << turns;
	return 0;
}