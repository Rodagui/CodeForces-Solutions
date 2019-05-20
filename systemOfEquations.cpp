/*A. System of Equations*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tot = 0, n, m, a, b;
	cin >> n >> m;

	for (a = 0; a <= n; ++a)
	{
		for (b = 0; b <= m ; ++b)
		{
			int ans1, ans2;
			ans1 = (a*a) + b;
			ans2 = a + (b*b);
			
			if(ans1 == n and ans2 == m)
				tot++;
		}
	}

	cout << tot <<'\n';

	return 0;
}