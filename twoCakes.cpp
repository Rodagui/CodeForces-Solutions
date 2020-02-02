/*D - Two Cakes*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cakes;
	int piso;

	long long ans = 0ll;

	cin >> cakes;
	
	map <int, int> izq;
	map <int, int> der;

	for (int i = 0; i < 2*cakes; ++i)
	{
		cin >> piso;

		if(izq.count(piso))
			der[piso] = i;
		else
			izq[piso] = i;
			
	}

	ans = izq[1];

	for (int i = 2; i <= cakes; ++i)
		ans += abs(izq[i] - izq[i - 1]);

	ans += der[1];

	for (int i = 2; i <= cakes; ++i)
			ans += abs(der[i] - der[i - 1]);

	
	cout << ans;

	return 0;	
}