/*A. Wizards' Duel*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double dist, ans, harry, vold;

	cin >> dist >> harry >> vold;

	ans = (dist/ (harry + vold));
	ans = harry * ans;

	cout << ans;
	return 0;
}