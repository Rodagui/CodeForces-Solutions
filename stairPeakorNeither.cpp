/*A. Stair, Peak, or Neither?*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int cases;

	cin >> cases;
	int a, b, c;

	while(cases--){
		cin >> a >> b >> c;

		if(a < b and b < c)
			cout << "STAIR\n";
		else if(a < b and b > c)
			cout << "PEAK\n";
		else
			cout << "NONE\n";
	}

	return 0;
}