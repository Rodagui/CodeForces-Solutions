/*C - Pizza, Pizza, Pizza!!!*/

#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long friends;
	cin >> friends;

	friends++;

	if(friends == 1){
		cout << "0";
	}
	else{

		if(friends % 2 == 0){
			cout << friends / 2ll;
		}
		else{
			cout << friends;
		}
	}


	
	return 0;
}