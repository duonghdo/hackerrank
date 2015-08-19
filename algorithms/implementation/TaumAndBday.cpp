#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long b, w, x, y, z;
		cin >> b >> w >> x >> y >> z;
		if(abs(x - y) <= z) cout << x*b + y*w << endl;
		else{
			if(x < y) cout << x*b + (x+z)*w << endl;
			else cout << (y+z)*b + y*w << endl;
		}
	}
	
	return 0;
}
