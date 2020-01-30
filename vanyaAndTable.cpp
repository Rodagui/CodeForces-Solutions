/*A. Vanya and Table*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int puntos;
	int altura;
	int x1, x2;
	int y1, y2;
	int base;

	cin >> puntos;

	for (int i = 0; i < puntos; ++i)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		base = abs(x1 - x2) + 1;
		altura = abs(y1 - y2) + 1;
		ans += (base * altura);
	}

	cout << ans;

	return 0;
}