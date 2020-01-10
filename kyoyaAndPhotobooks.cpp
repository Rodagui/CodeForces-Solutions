/*A. Kyoya and Photobooks*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	string cad;
	int tam;

	cin >> cad;

	tam = cad.size();
	ans = (tam + 1) * 26;
	ans -= tam;

	cout << ans;

	return 0;
}