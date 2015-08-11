#include <iostream>
using namespace std;

int main(){
	int t, n, c, m;
	cin >> t;
	while(t--){
		cin >> n >> c >> m;
		int total = 0;
		int wrapper = 0;
		int get = n/c;
		total += get;
		wrapper += get;
		while(get != 0){
			get = wrapper / m;
			wrapper = wrapper % m;
			wrapper += get;
			total += get;
		}

		cout << total << endl;
	}

	return 0;
}