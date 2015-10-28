#include <iostream>
using namespace std;

int main(){
	int l, r;
	cin >> l >> r;
	
	// naive solution
	// int max = 0;
	// for(int i = l; i <= r; i++){
		// for(int j = i; j <= r; j++){
			// int alt = i ^ j;
			// if(max < alt) max = alt;
		// }
	// }

	// solve in constant time 
	// find the first position that the 2 values differ
	// fill all bit after that with 1 using bitwise OR done on bit shifted values
	int res = l ^ r;
	if(res < 0) res = ~res;
	res |= res >> 1;
	res |= res >> 2;
	res |= res >> 4;
	res |= res >> 8;
	res |= res >> 16;

	cout << res << endl;
	// cout << max << endl;

	return 0;
}