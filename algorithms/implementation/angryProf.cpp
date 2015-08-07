#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int t, n, k;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> n >> k;
		int count = 0;
		for(int j = 0; j < n; j++){
			int a;
			cin >> a;
			if(a <= 0) count++; 
		}
		if(count >= k) cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}