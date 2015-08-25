#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int m, n, r;
	cin >> m >> n >> r;
	int ar[m][n];
	
	// get input
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> ar[i][j];
		}
	}
	
	int layer = min(m, n)/2;
	for(int i = 0; i < layer; i++){
		// number of rotations
		int rotation = r % ((m-i*2-1)*2 + (n-i*2-1)*2);
		
		// rotate current layer
		while(rotation--){
			int tmp = ar[i][i];
			
			// top row
			for(int j = i; j < n-i; j++){
				ar[i][j] = ar[i][j+1];
			}
			
			// right col
			for(int j = i; j < m-i; j++){
				ar[j][n-i-1] = ar[j+1][n-i-1];
			}
			
			// bottom row
			for(int j = n-i-1; j > i; j--){
				ar[m-i-1][j] = ar[m-i-1][j-1];
			}
			
			// left col
			for(int j = m-i-1; j > i; j--){
				ar[j][i] = ar[j-1][i];
			}
			
			ar[i+1][i] = tmp;
		}
	}
	
	// print output
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
