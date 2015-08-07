#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n;
		bool exist = false;
		for(int j = n; j >= 0; j--){
			int k = n - j;
			if (j % 3 == 0 && k % 5 == 0){
				for(int a = j; a > 0; a--) cout << 5;
				for(int a = k; a > 0; a--) cout << 3;
				exist = true;
				break;
			}
		}
		if(!exist) cout << -1;
		cout << endl;
	}

	return 0;
}