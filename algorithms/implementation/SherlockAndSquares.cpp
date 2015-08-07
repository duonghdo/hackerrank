#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int test, a, b;
	cin >> test;
	for(int t = 0; t < test; t++){
		cin >> a >> b;
		int count = 0;
		int c = floor(sqrt(a));
		int d = floor(sqrt(b));
		for(int i = c; i <= d; i++){
			if(i*i >= a && i*i <= b) count++;
		}
		cout << count << endl;
	}

	return 0;
}