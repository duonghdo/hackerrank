// sums of multiples of 3 and 5

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long int num3 = (n-1) / 3;
		long long int num5 = (n-1) / 5;
		long long int num15 = (n-1) / 15;
		long long int sum3, sum5, sum15, sum; 
		if(num3%2!=0) sum3 = (3 + num3*3)/2*num3;
		else sum3 = (3 + num3*3)*num3/2;
		if(num5%2!=0) sum5 = (5 + num5*5)/2*num5;
		else sum5 = (5 + num5*5)*num5/2;
		if(num15%2!=0) sum15 = (15 + num15*15)/2*num15;
		else sum15 = (15 + num15*15)*num15/2;
		sum = sum3 + sum5 - sum15;
		cout << sum << endl;
	}
	return 0;
}