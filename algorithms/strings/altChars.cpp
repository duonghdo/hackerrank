#include <iostream>
#include <string>
using namespace std;

int main(){
	int test;
	string a;
	cin >> test;
	getline(cin, a);
	for(int t = 0; t < test; t++){
		string s;
		getline(cin, s);
		int count = 0;
		for(int i = 1; i < s.length(); i++){
			if(s[i] == s[i-1]) count++;
		}
		cout << count << endl;
	}

	return 0;
}