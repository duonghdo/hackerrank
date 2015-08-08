#include <iostream>
using namespace std;

void toDigits(int *ar, int num){
	for(int i = 0; i < 100; i++){
		ar[i] = num % 10;
		num = num / 10;
	}
}

void printAr(int *ar){
	bool first = false;
	for(int i = 99; i >= 0; i--){
		if(ar[i] != 0) first = true;
		if(first) cout << ar[i];
	}
	cout << endl;
}

void findNext(int *n, int *n1){
	int push = 0;
	int prevD = 0;
	for(int i = 0; i < 100; i++){
		int res = n1[i]*n1[i] + n1[i]*prevD + n[i] + push;
		prevD = n1[i];
		n[i] = res % 10;
		push = res / 10;
	}
}

int main(){
	int a, b, n;
	cin >> a >> b >> n;
	int numA[100] = {0};
	int numB[100] = {0};
	toDigits(numA, a);
	toDigits(numB, b);

	for(int i = 0; i < n-2; i++){
		if(i % 2 == 0) findNext(numA, numB);
		else findNext(numB, numA);
	}

	if(n % 2 != 0) printAr(numA);
	else printAr(numB);

	return 0;
}