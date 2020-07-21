/*A. Elephant*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int point;

	cin >> point;
	if(point % 5 == 0)
		cout << point / 5;
	else
		cout << point / 5 + 1;
	
	return 0;
}