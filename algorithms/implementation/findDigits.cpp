#include <iostream>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		int num = n;
		int count = 0;
		for(int j = 0; j < 10; j++){
			int digit = n % 10;
			n = n/10;
			if(digit == 0) continue;
			else if(num % digit == 0) count ++;
		}
		cout << count << endl;
	}

	return 0;
}