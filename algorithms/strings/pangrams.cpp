#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	bool pangram = true;
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}
	for(int i = 0; i < alphabet.length(); i++){
		if(s.find(alphabet[i]) != -1) continue;
		else{
			pangram = false;
			cout << "not pangram" << endl;
			break;
		}
	}
	if(pangram) cout << "pangram" << endl;

	return 0;
}