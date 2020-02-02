/*E - Hexagons!*/

#include <bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	int n;

	cin >> n;

	long long ans;
	ans = 3ll * n * (n + 1ll);

	cout << ans + 1ll;
	
	return 0;
}