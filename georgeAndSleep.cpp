/*A. George and Sleep*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	string sleep;
	string awake;
	int HH;
	int MM;
	int hh;
	int mm;
	int ans;

	cin >> awake;
	cin >> sleep;

	HH = (awake[0] - '0') * 10 + (awake[1] - '0');
	MM = (awake[3] - '0') * 10 + (awake[4] - '0');

	hh = (sleep[0] - '0') * 10 + (sleep[1] - '0');
	mm = (sleep[3] - '0') * 10 + (sleep[4] - '0');

	HH *= 60;
	HH += MM;

	hh *= 60;
	hh += mm;

	ans = HH - hh;

	if( ans < 0)
		ans += (24*60);

	cout << setw(2) << setfill('0') << ans / 60 << ':' ;
	cout << setw(2) << setfill('0') << ans % 60;
	return 0;
}