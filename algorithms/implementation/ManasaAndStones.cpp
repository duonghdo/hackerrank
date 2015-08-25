#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a, b;
		cin >> n >> a >> b;
		for(int i = 0; i < n; i++){
			if(a == b) {
				cout << a*(n-i-1);
				break;
			}
			else if(a > b) cout << (i*a + (n-i-1)*b) << " ";
			else cout << (i*b + (n-i-1)*a) << " ";
		}
		cout << endl;
	}
	
	return 0;
}
