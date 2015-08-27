// find sum of all primes not greater than n

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
	vector <long> ar;
	ar.push_back(2);
	ar.push_back(3);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		// reuse answer from prob7
		while(ar.back() < n){
			int i = 0;
			long tmp = ar.back() + 2;
			while(ar[i] <= sqrt(tmp)){
				if(tmp % ar[i] == 0) {
					tmp += 2;
					i = 0;
				}
				else i++;
			}
			ar.push_back(tmp);
		}

		int i = 0;
		long long int sum = 0;
		while(ar[i] <= n){
			sum += ar[i];
			i++;
		}
		cout << sum << endl;
	}

	return 0;
}