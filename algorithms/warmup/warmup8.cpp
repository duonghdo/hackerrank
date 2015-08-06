#include <iostream>
using namespace std;

int main(){
	int dr, mr, yr;
	int d, m , y;
	cin >> dr >> mr >> yr;
	cin >> d >> m >> y;
	if(yr > y){
		cout << 10000 << endl;
		return 0;
	}
	if(yr == y && mr > m){
		cout << 500 * (mr - m) << endl;
		return 0;
	}
	if(yr == y && mr == m && dr > d){
		cout << 15 * (dr - d) << endl;
		return 0;
	}
	cout << 0 << endl;
	return 0;
}