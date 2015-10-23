#include <iostream>
using namespace std;

int maxContiguous(int* ar, int n){
	int maxEndingHere = ar[0];
	int globalMax = ar[0];
	for(int i = 1; i < n; i++){
		if(ar[i] < maxEndingHere + ar[i]) maxEndingHere += ar[i];
		else maxEndingHere = ar[i];
		
		if(globalMax < maxEndingHere) globalMax = maxEndingHere;
	}

	return globalMax;
}

int maxNonContiguous(int* ar, int n){
	int maxIndex = ar[0];
	int max = 0;
	for(int i = 0; i < n; i++){
		if(ar[i] > 0) max += ar[i];
		if(ar[i] > maxIndex) maxIndex = ar[i];
	}
	if(maxIndex < 0) return maxIndex;
	return max;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int* ar = new int[n];
		for(int i = 0; i < n; i++){
			int ai;
			cin >> ai;
			ar[i] = ai;
		}

		cout << maxContiguous(ar, n);
		cout << " " << maxNonContiguous(ar, n) << endl;
	}

	return 0;
}