#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> ar, int size){
	for(int i = 1; i < size; i++){
		int tmp = ar[i];
		int k = i - 1;
		while(k >= 0 && ar[k] > tmp) {
			ar[k+1] = ar[k];
			k--;
		}
		ar[k+1] = tmp;
	}
}

int main(){
	vector<int> ar;
	int arSize;
	cin >> arSize;
	for(int i = 0; i < arSize; i++){
		int num;
		cin >> num;
		ar.push_back(num);
	}

	insertionSort(ar, arSize);

	return 0;
}