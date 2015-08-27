// find largest product in a series of digit

#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	string a;
	getline(cin, a);
	while(t--){
		int n, k;
		cin >> n >> k;
		getline(cin, a);
		string s;
		getline(cin, s);
		int ar[s.length()];
		for(int i = 0; i < s.length(); i++){
			ar[i] = s[i] - '0';
		}
		int max = 0;
		for(int i = 0; i < n-k; i++){
			int j = i;
			int product = 1;
			while(j < i+k){
				if(ar[j] == 0){
					i = j;
					j = i + 1;
					if(j + k >= n) {
						product = 0;
						break;
					}
					else{
						product = 1;
					}
				}
				product *= ar[j];
				j++;
			}
			if(max < product) max = product;
		}
		cout << max << endl;
	}

	return 0;
}