// largest prime factor of given N

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		int find[n + 1];
		for(long long int k = 2; k < n+1; k++){
			find[k] = 1;
		}
		find[0] = 0;
		find[1] = 0;
		long long int i = 2;
		while(i*i < n+1){
			long long int j = i*i;
			while(j < n+1){
				find[j] = 0;
				j += i;
			}
			do {i++;}
			while(find[i] == 0);
		}
		i = n;
		while(find[i] != 1 || n % i != 0){
			i--;
		}
		cout << i << endl;
	}

	return 0;
}