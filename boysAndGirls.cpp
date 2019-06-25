/*A. Boys and Girls*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ifstream cin("input.txt");
	ofstream cout("output.txt");
	
	int boys, girls;

	cin >> boys >> girls;

	if(boys > girls){

		while(girls){
			cout << "BG";
			girls--;
			boys--;
		}

		for (int i = 0; i < boys; ++i)
			cout << "B";
	}
	else{

		while(boys){
			cout << "GB";
			girls--;
			boys--;
		}

		for (int i = 0; i < girls; ++i)
			cout << "G";
	}


	return 0;
}