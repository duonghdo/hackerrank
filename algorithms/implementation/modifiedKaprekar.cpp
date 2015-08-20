#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	long p, q;
	cin >> p >> q;
	int count = 0;
	for(long i = p; i <= q; i++){
		long long int square = i*i;
		int digit = floor(log10(square)) + 1;
		int leftD = digit/2;
		int rightD = digit - leftD;
		long long int left = square * pow(10, leftD - digit);
		long long int right = square - left * pow(10, rightD);
		if(left + right == i){
			cout << i << " ";
			count++;
		}
	}
	if(count == 0) cout << "INVALID RANGE" << endl;
	
	return 0;
}
