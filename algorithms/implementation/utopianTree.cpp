#include <iostream>
using namespace std;

int main(){
	int t, n, height;
	cin >> t;
	for(int i = 0; i < t; i++){
		height = 1;
		cin >> n;
		for(int j = 0; j < n; j++){
			if(j % 2 == 0) height = height*2;
			else height += 1;
		}
		cout << height << endl;
	}

	return 0;
}