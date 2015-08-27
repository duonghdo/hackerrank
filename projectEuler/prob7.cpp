// find nth prime

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	vector <long> ar;
	ar.push_back(2);
	ar.push_back(3);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		while(ar.size() < n){
			int i = 0;
			long tmp = ar.back() + 2;
			while(ar[i] <= sqrt(tmp)){
				if(tmp % ar[i] == 0) {
					tmp += 2;
					i = 0;
				}
				else i++;
			}
			ar.push_back(tmp);
		}	
		cout << ar[n-1] << endl;	
	}

	return 0;
}