#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int* score = new int[n];
	int* reward = new int[n];
	for(int i = 0; i < n; i++){
		cin >> score[i];
		reward[i] = 1;
	}

	for(int i = 1; i < n; i++){
		if(score[i] > score[i-1]) reward[i] = reward[i-1] + 1;
	}
	for(int i = n-1; i >0; i--){
		if(score[i-1] > score[i]) reward[i-1] = max(reward[i-1], reward[i]+1);
	}

	int total = 0;
	for(int i = 0; i < n; i++){
		total += reward[i];
	}
	cout << total << endl;

	delete[] score;
	delete[] reward;
	return 0;
}