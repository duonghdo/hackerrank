#include <iostream>
using namespace std;

void getDepth(int* depth, int* leftChild, int* rightChild, int curr = 1, int cDepth = 1){
	depth[curr] = cDepth;
	if(leftChild[curr] > 0) getDepth(depth, leftChild, rightChild, leftChild[curr], cDepth+1);
	if(rightChild[curr] > 0) getDepth(depth, leftChild, rightChild, rightChild[curr], cDepth+1);
}

void inOrderTrav(int* leftChild, int* rightChild, int curr = 1){
	if(leftChild[curr] > 0) inOrderTrav(leftChild, rightChild, leftChild[curr]);
	cout << curr << " ";
	if(rightChild[curr] > 0) inOrderTrav(leftChild, rightChild, rightChild[curr]);
}

int main(){
	int n;
	cin >> n;
	int* leftChild = new int[n+1];
	int* rightChild = new int[n+1];
	for(int i = 1; i <= n; i++){
		cin >> leftChild[i] >> rightChild[i];
	}
	int* depth = new int[n+1];

	getDepth(depth, leftChild, rightChild);

	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		for(int i = 1; i <= n; i++){
			if(depth[i] % k == 0){
				swap(leftChild[i], rightChild[i]);
			}
		}
		inOrderTrav(leftChild, rightChild);
		cout << endl;
	}

	delete[] leftChild;
	delete[] rightChild;
	delete[] depth;

	return 0;
}