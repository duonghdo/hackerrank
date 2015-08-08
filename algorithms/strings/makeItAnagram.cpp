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
	int diff[26] = {0};
	string a, b;
	getline(cin, a);
	getline(cin, b);
	getdiff(diff, a, 1);
	getdiff(diff, b, -1);

	int result = 0;
	for(int i = 0; i < 26; i++){
		result += abs(diff[i]);
	}
	cout << result << endl;

	return 0;
}