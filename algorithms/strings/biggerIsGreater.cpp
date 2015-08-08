// next lexicographical permutation algorithm


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
		int pv1 = s.length()-1, pv2 = s.length()-1;
		
		while(pv1 > 0 && s[pv1-1] >= s[pv1]) --pv1;
		if(pv1 == 0) {
			cout << "no answer" << endl;
			continue;
		}

		while(s[pv2] <= s[pv1-1]) --pv2;

		char tmp = s[pv1-1];
		s[pv1-1] = s[pv2];
		s[pv2] = tmp;

		pv1;
		pv2 = s.length() - 1;
		while(pv1 < pv2){
			tmp = s[pv1];
			s[pv1] = s[pv2];
			s[pv2] = tmp;
			pv1++;
			pv2--;
		}

		cout << s << endl;
	}

	return 0;
}