/*B. Fence*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int suma = 0;
	int ans = 0;
	int aux = 0;
	int tablas;
	int rango;

	cin >> tablas >> rango;

	int ini = 0;
	vector <int> alturas(tablas);

	for (int i = 0; i < tablas; ++i)
		cin >> alturas[i];
	

	for (int i = 0; i < rango; ++i)
		suma += alturas[i];

	aux = suma;

	for (int i = rango; i < tablas; ++i){
		aux += alturas[i] - alturas[ini];

		if(aux < suma){
			suma = aux;
			ans = ini + 1;
		}

		ini++;

	}
	
	cout << ans + 1 <<'\n';

	return 0;
}