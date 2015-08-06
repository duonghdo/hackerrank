#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int n, k;
	cin  >> n;
	char s[100];
	cin >> s;
	cin >> k;

	for(int i = 0; i < n; i++){
		int a = s[i];
		if (a >= 65 && a <= 90){
			a -= 65;
			a = (a + k) % 26;
			a += 65;
		}
		if (a >= 97 && a <= 122){
			a -= 97;
			a = (a + k) % 26;
			a += 97;
		}
		cout << char(a);
	}
	cout << endl;
	return 0;
}