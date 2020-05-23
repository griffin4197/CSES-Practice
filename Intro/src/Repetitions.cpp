#include <iostream>

using namespace std;

int main(){
	char cur, prev;
	int best = 1;
	int score = 0;
	cin >> cur;
	prev = cur;
	do{
		if (prev == cur){
			score++;
		}
		else{
			score = 1;
		}
		prev = cur;
		best = max(best, score); 
	}
	while (cin >> cur);
	cout << best;
	return 0;
}