#include <iostream>
#include <string>
using namespace std;

int main(){
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int count[26] = {0};
	int gems = 0;
	int n;
	string num;
	cin >> n;
	getline(cin, num);
	for(int i = 0; i < n; i++){
		string s;
		getline(cin, s);
		for(int j = 0; j < alphabet.length(); j++){
			if(s.find(alphabet[j]) != -1) count[j]++;
		}
	}
	for(int i = 0; i < 26; i++){
		if(count[i] == n) gems++;
	}
	cout << gems << endl;

	return 0;
}