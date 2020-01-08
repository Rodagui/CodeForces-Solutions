/*A. George and Accommodation**/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int rooms;
	int have;
	int fit;


	cin >> rooms;


	for (int i = 0; i < rooms; ++i)
	{
		cin >> have >> fit;

		if((fit - have) >= 2)
			ans++;
	}

	cout << ans;

	return 0;
}