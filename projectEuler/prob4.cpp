// find largest palindrome that is product of 2 3-digit numbers

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	int ar[900];
	int a = 0;
	for(int i = 1; i < 10; i++){
		for(int j = 0; j < 10; j++){
			for(int k = 0; k < 10; k++){
				ar[a] = (i * 100001) + (j * 10010) + (k * 1100);
				a++;
			}
		}
	}
	while(t--){
		int n;
		cin >> n;
		bool found = false;
		a = 899;
		while(ar[a] >= n) a--;
		while(!found && a >= 0){
			for(int i = 100; i <= sqrt(n); i++){
				if(ar[a] % i == 0 && ar[a] / i < 1000){
					cout << ar[a] << endl;
					found = true;
					break;
				}
			}
			a--;
		}
	}

	return 0;
}