// find difference between sum of squares and square of sum for numbers from 1 to n

#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		long long int sosq = n * (n + 1) * (n + 0.5) / 3;
		long long int sqos = n * (n + 1) * n * (n + 1) / 4;
		cout << abs(sosq - sqos) << endl;
	}

	return 0;
}