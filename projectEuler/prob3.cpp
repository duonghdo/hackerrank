// find largest prime factor of N

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		while(n % 2 == 0) n = n/2;
		if(n == 1) {
			cout << n << endl;
			continue;
		}
		else{
			int i = 3;
			int max = i;
			while(i <= sqrt(n)){
				if(n % i == 0) {
					n = n/i;
					if(max < i) max = i;
					i = 3;
				}
				else i += 2;
			}
			if(n > 2) cout << n << endl;
			else cout << max << endl;
		}
	}	

	return 0;
}