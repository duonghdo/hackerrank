// find lowest common multiple of numbers from 1 to n

#include <iostream>
using namespace std;

int findlcm(int a, int b){
	int m = a * b;
	int t;
	while(b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	return(m/a);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int lcm = 1;
		for(int i = 2; i <= n; i++){
			lcm = findlcm(lcm, i);
		}
		cout << lcm << endl;
	}

	return 0;
}