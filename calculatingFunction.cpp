/*A. Calculating Function*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long n;
	Long ans;

	cin >> n;

	ans = n / 2ll;
		
		if( n % 2ll == 1ll){
			ans++;
			ans = -ans;
		}

		cout << ans;

	return 0;
}