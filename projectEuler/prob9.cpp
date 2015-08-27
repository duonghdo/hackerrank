// find special pythagorean triplet

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int max = -1;
		for(int a = 1; a < n/3; a++){
			if( (n * (2*a - n)) % (2 * (a - n)) == 0 ){
				int b = (n * (2*a - n)) / (2 * (a - n));
				int c = n - a - b;
				if(a < b && b < c){
					int product = a * b * c;
					if(max < product) max = product;
				}
			}
		}
		cout << max << endl;
	}

	return 0;
}