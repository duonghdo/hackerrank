#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int test;
	string a;
	cin >> test;
	getline(cin, a);
	for(int t = 0; t < test; t++){
		string s;
		getline(cin, s);
		bool funny = true;
		for(int i = 1; i < s.length()-1; i++){
			int j = s.length() - 1 - i;
			if( abs(int(s[i]) - int(s[i-1])) != abs(int(s[j]) - int(s[j+1])) ){
				funny = false;
				cout << "Not Funny" << endl;
				break;
			}
		}
		if(funny) cout << "Funny" << endl;
	}

	return 0;
}