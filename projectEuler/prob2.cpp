// sum of even Fibonacci numbers

#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		long long int f1 = 2, f2 = 8;
		long long int sum = 2;
		long long int tmp;
		while(f2 < n){
			sum += f2;
			tmp = f1;
			f1 = f2;
			f2 = f2*4 + tmp;
		}
		cout << sum << endl;
	}
	return 0;
}