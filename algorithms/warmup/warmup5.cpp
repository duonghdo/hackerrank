#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	float pos = 0, neg = 0, zero = 0;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		if(a > 0) pos++;
		else if(a < 0) neg++;
		else zero++;
	}
	cout << fixed;
	cout << setprecision(3) << (pos/n) << endl 
		<< (neg/n) << endl 
		<< (zero/n) << endl;

	return 0;
}