#include <iostream>
using namespace std;

int main(){
	int test;
	cin >> test;
	for(int t = 0; t < test; t++){
		int n;
		cin >> n;
		int ar[n];
		int sumL = 0, sumR = 0;
		for(int i = 0; i < n; i++){
			cin >> ar[i];
			sumR += ar[i];
		}
		sumR -= ar[0];
		int flag = 0;
		for(int i = 0; i < n; i++){
			if(sumL == sumR){
				flag = 1;
				cout << "YES" << endl;
				break;
			}
			sumL += ar[i];
			sumR -= ar[i+1];
		}
		if(flag == 0) cout << "NO" << endl;
	}

	return 0;
}