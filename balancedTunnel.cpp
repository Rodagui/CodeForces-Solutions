/*B. Balanced Tunnel*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam;

	cin >> tam ;

	vector <int> entrada(tam);
	vector <int> salida(1000000);

	int seg = 1, aux;

	for (int i = 0; i < tam ; ++i)
	{
	 	cin >> entrada[i];
	}

	for (int i = 0; i < tam; ++i)
	{
		cin >> aux;

		salida[aux] = seg;
		seg++;
	}
	int maximo = -1;
	int ans = 0;

	for (int i = 0; i < tam; ++i)
	{
		aux = entrada[i];

		if(salida[aux] < maximo)
			ans++;
		else
			maximo = salida[aux];
	}


	cout << ans;

	return 0;
}