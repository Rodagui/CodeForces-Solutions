/*A. Domino piling*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	int ans = 0;

	cin >> n >> m;

	if(n % 2 == 0 and m % 2 == 0)
		ans = n / 2 * m;
	
	else if(n % 2 == 1 and m % 2 == 0)
		ans = m / 2 * n;

	else if(n % 2 == 0 and m % 2 == 1)
		ans = n / 2 * m;
	
	else
		ans = (n / 2 * m) + ((m - 1) / 2);

	cout << ans;

	return 0;
}