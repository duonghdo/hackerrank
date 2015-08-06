#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum1 = 0;
	int sum2 = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			int a;
			cin >> a;
			if(i == j){
				sum1 += a;
			}
			if(j == n-i-1){
				sum2 += a;
			}
		}
	}
	cout << abs(sum1 - sum2) << endl;

	return 0;
}
