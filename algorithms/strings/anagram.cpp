#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void getdiff(int *ar, string s, int count){
	for(int i = 0; i < s.length(); i++){
		ar[int(s[i]) - 97] += count;
	}	
}

int main(){
	int test;
	string a;
	cin >> test;
	getline(cin, a);
	for(int t = 0; t < test; t++){
		string s;
		getline(cin, s);
		if(s.length() % 2 != 0) cout << -1 << endl;
		else{
			string s1 = s.substr(0, s.length()/2);
			string s2 = s.substr(s.length()/2, s.length()/2);
			int diff[26] = {0};
			getdiff(diff, s1, 1);
			getdiff(diff, s2, -1);

			int result = 0;
			for(int i = 0; i < 26; i++){
				result += abs(diff[i]);
			}
			cout << result/2 << endl;
		}
	}

	return 0;
}