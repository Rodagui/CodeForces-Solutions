/*F - Magic Forest*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long n;
	cin >> n;

	Long ans = 0;

	Long aux;

	for (int i = 1; i <= n; ++i)
	{
	 	for (int j = i; j <= n ; ++j)
		{
	 		for (int k = j; k <= n ; ++k)
	 		{
	 			aux = i^j;
	 			aux ^= k;

	 			if(aux == 0  and (i + j > k)){
	 				ans++;
	 			}
	 		}
	 	}
	} 

	cout << ans;

	return 0;
}