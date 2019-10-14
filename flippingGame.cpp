/*A. Flipping Game*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int maxima = 0;
	int cont = 0;
	int tam;
	int fin;
	int ini;

	cin >> tam;

	vector <int> game(tam);
	vector <int> copia(game);

	for (int i = 0; i < tam; ++i)
		cin >> game[i];

	for ( ini = 0; ini < tam; ++ini)
	{
		for (fin = ini; fin < tam ; ++fin)
		{
			cont = 0;
			vector <int> copia(game);

			for (int i = ini; i <= fin ; ++i)
			{
				copia[i] = 1 - copia[i];
			}

			for (int i = 0; i < tam ; ++i)
			{
				if(copia[i] == 1)
					cont++;
			}

			if(cont > maxima)
				maxima = cont;	
		}
	}

	cout << maxima; 

	return 0;
}