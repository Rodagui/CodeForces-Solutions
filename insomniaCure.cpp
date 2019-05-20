/*A. Insomnia cure*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c, d, tot;
	int ans = 0;

	cin >> a >> b >> c >> d >> tot;

	vector <int> dragons(tot);

	for (int i = 0; i < tot; ++i){
		if( (i+1) % a == 0 or (i+1) % b == 0 or (i+1) % c == 0 or (i+1) % d == 0){
			dragons[i] = 1;
			ans++;
		}

	}

	cout << ans <<'\n';

	return 0;
}