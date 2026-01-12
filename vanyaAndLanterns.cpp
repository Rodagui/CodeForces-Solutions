/*B. Vanya and Lanterns*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	set <int> unicos;
	int radioInicial;
	double radio = 0;
	double ans = 0;
	int longStreet;
	int radioFinal;
	int lanterns;
	int cont = 1;
	int coord;
	int ant;
	int act;

	cin >> lanterns >> longStreet;
	
	for (int i = 0; i < lanterns; ++i)
	{
		cin >> coord;
		unicos.insert(coord);
	}

	int tam = unicos.size();

	set <int>::iterator itr;

	for(itr = unicos.begin(); itr!= unicos.end(); itr++){

		if(cont == 1){
			radioInicial = *itr - 0;
			ant = *itr;
		}

		if(cont == tam){
			radioFinal = longStreet - *itr;
		}

		if(cont > 1){

			act = *itr;
			radio = (double)(act - ant ) / 2.0;

			if( radio > ans)
				ans = radio;

			ant = *itr;
		}

		cont++;
	}

	double auxans = (double) max(radioInicial, radioFinal);
	ans = max(auxans, ans);
	cout << fixed << setprecision(10) << ans; 


	return 0;
}