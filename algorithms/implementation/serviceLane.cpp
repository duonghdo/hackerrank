#include <iostream>
using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	int width[n];
	for(int i = 0; i < n; i++){
		cin >> width[i];
	}
	while(t--){
		int i, j;
		cin >> i >> j;
		int res = 3;
		while(i <= j){
			if(res > width[i]) res = width[i];
			i++;
		}
		cout << res << endl;
	}

	return 0;
}