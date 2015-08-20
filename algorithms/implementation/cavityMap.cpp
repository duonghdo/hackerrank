#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a;
	getline(cin, a);
	char ar[n][n];
	for(int i = 0; i < n; i++){
		string s;
		getline(cin, s);
		for(int j = 0; j < n; j++){
			ar[i][j] = s[j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if( (ar[i][j] > ar[i-1][j]) && (ar[i][j] > ar[i+1][j]) 
			   && (ar[i][j] > ar[i][j-1]) && (ar[i][j] > ar[i][j+1]) 
			   && (i > 0) && (i < n-1) && (j > 0) && (j < n-1) )
				ar[i][j] = 'X';
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << ar[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
