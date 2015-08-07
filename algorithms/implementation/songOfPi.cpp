#include <iostream>
#include <string>
using namespace std;

int main(){
	int pi[29] = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,3};
	int test;
	string a;
	cin >> test;
	getline(cin, a);
	for(int t = 0; t < test; t++){
		bool piSong = true;
		int lastPos = 0;
		int wCount = 0;
		string song;
		getline(cin, song);
		for(int i = 0; i < song.length(); i++){
			if(i == song.length()-1){
				if(i+1 - lastPos != pi[wCount]){
					piSong = false;
					cout << "It's not a pi song." << endl;
					break;
				}
			}
			if(song[i] == ' '){
				if(i - lastPos != pi[wCount]){
					piSong = false;
					cout << "It's not a pi song." << endl;
					break;
				}
				lastPos = i+1;
				wCount++;
			}
		}

		if(piSong) cout << "It's a pi song." << endl;
	}

	return 0;
}