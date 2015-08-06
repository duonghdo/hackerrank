#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int hh, mm, ss;
	char a[2];
	scanf("%2d:%2d:%2d%s", &hh, &mm, &ss, a);
	if(strcmp(a, "AM") == 0){
		if (hh == 12) hh = 0;
		printf("%02d:%02d:%02d", hh, mm ,ss);
	}
	if(strcmp(a, "PM") == 0){
		if (hh != 12) hh += 12;
		printf("%02d:%02d:%02d", hh, mm, ss);
	}

	return 0;
}