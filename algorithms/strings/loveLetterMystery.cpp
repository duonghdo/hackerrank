#include <iostream>
#include <string>
using namespace std;

int main(){
	int t;
	cin >> t;
	string a;
	getline(cin, a);
	while(t--){
		string s;
		getline(cin, s);
		int diff = 0;
		int i = 0, j = s.length()-1;
		while(i < j){
			diff += abs(s[i]-s[j]);
			i++;
			j--;
		}
		cout << diff << endl;
	}
	return 0;
}