#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int row = floor(sqrt(s.length()));
	int col = ceil(sqrt(s.length()));
	if(row*col < s.length()) row++;
	for(int i = 0; i < col; i++){
		for(int j = 0; j < row; j++){
			if(!s[i+j*col]) break;
			cout << s[i+j*col];
		}
		cout << " ";
	}
	cout << endl;
	
	return 0;
}
