/*A. Black Square*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <Long> costo(4);
	Long ans = 0ll;
	int pos;
	string cad;

	for (int i = 0; i < 4; ++i)
		cin >> costo[i];

	cin >> cad;

	for (int i = 0; i < cad.size(); ++i){
		pos = cad[i] - '0' - 1;
		ans += costo[pos];
	}

	cout << ans;	

	return 0;
}