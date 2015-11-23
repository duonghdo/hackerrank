#include <iostream>
using namespace std;

uint64_t coinChange(int* coins, int n, int change){
	uint64_t** count = new uint64_t*[n];
	for(int i = 0; i < n; i++){
		count[i] = new uint64_t[change+1]();
	}

	// if the change is less than the coin value -> 0 way to make change
	// if the change is equal to the coin value -> exactly 1 way to make change
	// if the change is bigger than the coin value -> 
	// 						sum of all the ways to make change with (change - coin value)
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= change; j++){
			if(j < coins[i]){
				count[i][j] = 0;
			}
			else if (j == coins[i]){
				count[i][j] = 1;
			}
			else{
				for(int k = 0; k <= i; k++){
					count[i][j] += count[k][j - coins[i]];
				}
			}
		}
	}
	uint64_t result = 0;
	for(int i = 0; i < n; i++){
		result += count[i][change];
	}

	for(int i = 0; i < n; i++){
		delete[] count[i];
	}
	delete[] count;

	return result;
}

int main(){
	uint64_t result;
	int change, n;
	cin >> change >> n;
	int* coins = new int[n];
	for(int i = 0; i < n; i++){
		cin >> coins[i];
	}
	result = coinChange(coins, n, change);
	cout << result << endl;

	delete[] coins;
	return 0;
}