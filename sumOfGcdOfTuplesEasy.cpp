/*C - Sum of gcd of Tuples (Easy)*/
#include <bits/stdc++.h>
using namespace std;

using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int k;

	cin >> k;

	int ans = 0;

	for (int a = 1; a <= k; ++a)
	{
		for (int b = 1; b <= k; ++b)
		{
			for (int c = 1; c <= k; ++c)
			{
				int gcd = __gcd(a, b);
				gcd = __gcd(gcd, c);
				ans += gcd;
			}
		}
	}

	cout << ans;
	

	return 0;
}