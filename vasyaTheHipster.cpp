/*A. Vasya the Hipster*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int red, blue;
	cin >> red >> blue;

	if(red < blue){
		cout << red << ' ' << (blue - red) / 2;
	}
	else{
		cout << blue << ' ' << (red - blue) / 2;
	}

	return 0;
}