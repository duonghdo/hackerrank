#include <iostream>
using namespace std;

int main(){
	int v, n, ar;
	cin >> v >> n;
	for(int i = 0; i < n; i++){
		cin >> ar;
		if(v == ar){
			cout << i << endl;
			break;
		}
	}

	return 0;
}