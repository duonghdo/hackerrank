#include <iostream>
#include <string>
using namespace std;

int main(){
	int h, m;
	cin >> h >> m;
	string words[]={"", "one", "two", "three", "four", "five", "six","seven", "eight", "nine","ten",
					"eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen",
					"twenty","twenty one", "twenty two", "twenty three", "twenty four", "twenty five",
					"twenty six","twenty seven","twenty eight", "twenty nine"};
	
	string pl;
	if(m == 1 || m == 59) pl = " minute";
	else pl = " minutes";
	
	if(m == 0) cout << words[h] << " o' clock" << endl;
	else if(m == 15) cout << words[m] << " past " << words[h] << endl;
	else if(m < 30) cout << words[m] << pl << " past " << words[h] << endl;
	else if(m == 30) cout << "half past " << words[h] << endl;
	else if(m > 30 && h != 12) {
		if(m == 45) cout << words[60-m] << " to " << words[h+1] << endl;
		else cout << words[60-m] << pl << " to " << words[h+1] << endl;
	}
	else if(m > 30 && h == 12) {
		if(m == 45) cout << words[60-m] << " to " << words[1] << endl;
		else cout << words[60-m] << pl << " to " << words[1] << endl;
	}
	
	return 0;
}
