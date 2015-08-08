#include <iostream>
using namespace std;

int main(){
	int test;
	cin >> test;
	for(int t = 0; t < test; t++){
		int m, n;
		cin >> m >> n;
		int ar[n];
		for(int i = 0; i < n; i++){
			cin >> ar[i];
		}
		int flag = 0;
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				if(ar[i] == m - ar[j]){
					flag = 1;
					cout << i << " " << j << endl;
					break;
				}
			}
			if(flag == 1) break;	
		}
	}

	return 0;
}