#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, expected;
		cin >> n >> expected;
		int* ar = new int[n];
		for(int i = 0; i < n; i++){
			cin >> ar[i];
		}

		int* maxSum = new int[expected+1]();
		for(int i = 0; i <= expected; i++){
			for(int j = 0; j < n; j++){
				if(ar[j] <= i){
					maxSum[i] = max(maxSum[i], ar[j] + maxSum[i - ar[j]]);
				}
			}
		}
		cout << maxSum[expected] << endl;

		delete[] maxSum;
		delete[] ar;
	}

	return 0;
}