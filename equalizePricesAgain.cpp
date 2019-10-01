/*A. Equalize Prices Again */
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int queries;
	cin >> queries;

	while(queries--){
		
		int goods;
		cin >> goods;

		int precio;
		int suma = 0;

		for (int i = 0; i < goods; ++i)
		{
			cin >> precio;
			suma += precio;
		}

		if(suma % goods == 0)
			cout << suma / goods << '\n';
		else
			cout << (suma / goods) + 1 << '\n';

	}


	return 0;
}