#include <iostream>

using namespace std;

int main() {
	long long in;
	cin >> in;
	while (in != 1){
		//in = in % 1000000007;
		cout << in << " ";
		if (in % 2 == 0){
			in = (in/2);
		}
		else
			in = (3*in + 1);
	}
	cout << in;
	return 0;
}