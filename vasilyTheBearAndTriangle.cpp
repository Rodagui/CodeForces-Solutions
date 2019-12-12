/*A. Vasily the Bear and Triangle*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long x, y;

	cin >> x >> y;

	if(x > 0 and y > 0)
		cout << "0 " << x + y << " " << x + y << " 0";

	else if( x > 0 and y < 0)
		cout << "0 " << y - x << " " << x - y << " 0";
	
	else if( x < 0 and y > 0)
		cout << x - y << " 0" << " 0 " << y - x;

	else
		cout << x + y << " 0" << " 0 " << x + y; 

	return 0;
}