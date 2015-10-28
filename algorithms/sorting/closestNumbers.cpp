#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int* ar = new int[n];
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}
	vector<int> V(ar, ar+n);
	delete[] ar;
	sort(V.begin(), V.end());
	int min = abs(V[1] - V[0]);
	vector<int> res;
	for(int i = 2; i < n; i++){
		if(abs(V[i] - V[i-1]) < min){
			res.clear();
			min = V[i] - V[i-1];
			res.push_back(V[i-1]);
			res.push_back(V[i]);
		}
		else if(abs(V[i] - V[i-1]) == min){
			res.push_back(V[i-1]);
			res.push_back(V[i]);
		}
	}
	for(int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
	}

	return 0;
}