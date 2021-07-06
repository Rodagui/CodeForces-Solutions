/*A. Vanya and Fence*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int friends;
	int hight;

	cin >> friends >> hight;


	int width = friends;
	int hightFriend;

	while(friends--){
		cin >> hightFriend;

		if(hightFriend > hight)
			width++;
	}

	cout << width;

	return 0;
}