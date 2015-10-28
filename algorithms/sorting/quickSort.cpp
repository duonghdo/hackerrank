#include <iostream>
#include <vector>
using namespace std;

void printV(vector <int> ar){
	for(int i = 0; i < ar.size(); i++){
		cout << ar[i] << " " ;
	}
	cout << endl;
}

void partition(vector<int> &ar,int start, int end){
	if(end - start < 2) return;
	printV(ar);
	int pivot = ar[start];
	int i = 1, j = end-1;
	while(true){
		while(ar[i] < pivot) i++;
		while(ar[j] > pivot) j--;
		if(i >= j) break;
		int tmp = ar[i];
		ar[i] = ar[j];
		ar[j] = tmp;
	}
	ar[0] = ar[j];
	ar[j] = pivot;
	vector<int> leftSide(ar.begin(), ar.begin()+j-1);
	vector<int> rightSide(ar.begin()+j+1, ar.end());
	partition(leftSide, start, j-1);
	partition(rightSide, j+1, end);
}

int main(){
	int size;
	cin >> size;
	vector<int> ar;
	for(int i = 0; i < size; i++){
		int a;
		cin >> a;
		ar.push_back(a);
	}

	partition(ar, 0, size);
	printV(ar);

	return 0;
}