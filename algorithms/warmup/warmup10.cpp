#include <cstdio>
#include <iostream>
#include <array>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[200];
	for (int i = 0; i < 200; i++){
		a[i] = 0;
	}
	a[1] = 1;
	
	for(int i = 1; i <= n; i++){
		int d1 = i % 10;		// first digit
		int d2 = i/10;			// second digit
		int push = 0;			// push to next digit
		int og;
		for(int j = 1; j < 200; j++){
			int m = d1 * a[j] + d2 * og + push;
			og = a[j];
			a[j] = m % 10; 
			push = m/10;
		}
	}

	bool first = false;		// find first digit in result
	for(int i = 199; i > 0; i--){
		if(a[i] != 0) first = true;
		if(first) cout << a[i];
	}
	cout << endl;

	return 0;
}