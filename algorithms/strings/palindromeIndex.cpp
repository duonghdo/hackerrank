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
		int i = 0, j = s.length() - 1;
		int res = -1;
		while(i < j && s[i] == s[j]){			
			i++;
			j--;
		}
		if(i < j && s.length() > 4) {
			if(s[i+2] == s[j-1]) res = i;
			else if(s[i+1] == s[j-2]) res = j;
		}
		else{
			if(s[i+1] == s[j]) res = i;
			else res = j;
		}
		cout << res << endl;
	}

	return 0;
}