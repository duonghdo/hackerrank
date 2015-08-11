#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int cutL = v[0];
	cout << v.size() << endl;
	for(int i = 0; i < n; i++){
		if(cutL < v[i]){
			cout << v.size()-i << endl;
			cutL += v[i] - cutL;
		}
	}

	return 0;
}