#include <iostream>
using namespace std;

int main(){
	int a = 0;
	int b;
	int n;
	cin >> n;
	while(n--){
		cin >> b;
		a ^= b;		// ^ bitwise XOR
	}
	cout << a << endl;

	return 0;
}