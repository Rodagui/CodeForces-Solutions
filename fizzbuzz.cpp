/*B - FizzBuzz Sum*/
#include <bits/stdc++.h>
using namespace std;

using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long n;
	cin >> n;

	Long ans = 0ll;
	
	for (Long i = 1; i <= n ; ++i)
	{
		if(i % 3 != 0 and i % 5 != 0){
			ans += i;
		}
	}

	cout << ans;

	return 0;
}