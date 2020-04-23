/*A - Buy a Shovel*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int precio;
	int burles;

	cin >> precio >> burles;

	int ans = 10;
	int aux;

	for (int i = 1; i <= 9 ; ++i)
	{
		if(((precio * i) - burles) % 10 == 0 )
			ans = min(ans, i);

		if((precio * i) % 10 == 0)
			ans = min(ans, i);
	}

	cout << ans;
	
	return 0;
}