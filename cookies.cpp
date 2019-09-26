/*A. Cookies*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int bags, tot = 0, ans = 0;

	cin >> bags;

	vector <int> cookies(bags);

	for (int i = 0; i < bags; ++i)
	{
		cin >> cookies[i];
		tot += cookies[i];
	}

	for (int i = 0; i < bags; ++i)
	{
		if((tot - cookies[i]) % 2 == 0)
			ans++;
	}

	cout << ans << '\n';


	return 0;
}