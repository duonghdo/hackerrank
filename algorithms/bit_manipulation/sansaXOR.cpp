#include <iostream>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
		cout << "read n " << n << endl;
		if(n % 2 == 0){
			cout << 0 << endl;
			continue;
		}
		unsigned long long int res = 0;
		unsigned long long int ai;
		while(n--){
			cin >> ai;
			if(n % 2 != 0){
				res ^= ai;
			}
		}
		cout << res << endl;
		cout << " end case " << endl;
	}

	return 0;
}