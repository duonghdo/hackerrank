#include <iostream>
#include <string>
using namespace std;

int main(){
	int test;
	string s;
	cin >> test;
	getline(cin, s);
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	for(int t = 0; t < test; t++){
		string a, b;
		getline(cin, a);
		getline(cin, b);
		int flag = 0;
		for(int i = 0; i < 26; i++){
			if(a.find(alphabet[i]) != -1 && b.find(alphabet[i]) != -1){
				cout << "YES" << endl;
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout << "NO" << endl;
	}

	return 0;
}