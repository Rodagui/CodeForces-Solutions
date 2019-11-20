/*A. Choosing Teams*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int alumns;
	int veces;
	int aux;


	cin >> alumns >> veces;

	for (int i = 0; i < alumns; ++i)
	{
		cin >> aux;

		if(5 - aux >= veces)
			ans++;
	}

	ans /= 3;

	cout << ans;

	return 0;
}