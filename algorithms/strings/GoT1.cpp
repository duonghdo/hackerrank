#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int count[26];
	int odd = 0;
	for(int i = 0; i < 26; i++){
		count[i] = 0;
	}
	for(int i = 0; i < s.length(); i++){
		int c = s[i];
		count[c - 97]++;		// count char occurences
	}
	for(int i = 0; i < 26; i++){
		if(count[i] % 2 != 0) odd++;
	}
	if(odd <= 1) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}