/*D. Almost Arithmetic Progression*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam;
	cin >> tam;

	vector <Long> sucesion(tam);

	for (int i = 0; i < tam ; ++i)
	{
		cin >> sucesion[i];
	}

	if(tam == 1 or tam == 2)
		cout << "0\n";
	else{

		bool can = true;
		Long ansDiv = 1;
		Long tot = 0;
		Long ans = 10000000;
		Long aux = 0;

		sort(sucesion.begin(), sucesion.end());

		

		Long maxA = sucesion[tam - 1] - 1;
		Long maxB = sucesion[tam - 1];
		Long maxC = sucesion[tam - 1] + 1;
		Long minA = sucesion[0] - 1;
		Long minB = sucesion[0];
		Long minC = sucesion[0] + 1;

		

		Long MINIMO;
		Long MAXIMO;
		Long div;

		/*------------------CASO 1 --------------------*/

		MINIMO = minA;
		MAXIMO = maxA;
		tot = 2; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){


			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}


		/*------------------CASO 2 --------------------*/

		can = true;

		MINIMO = minA;
		MAXIMO = maxB;
		tot = 1; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){


			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}



		/*------------------CASO 3 --------------------*/

		can = true;

		MINIMO = minA;
		MAXIMO = maxC;
		tot = 2; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){


			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}



		/*------------------CASO 4 --------------------*/

		can = true;
		MINIMO = minB;
		MAXIMO = maxA;
		tot = 1; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){


			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}

		/*------------------CASO 5 --------------------*/
		can = true;
		MINIMO = minB;
		MAXIMO = maxB;
		tot = 0; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){


			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}

		/*------------------CASO 6 --------------------*/
		can = true;
		MINIMO = minB;
		MAXIMO = maxC;
		tot = 1; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){


			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}




		/*------------------CASO 7 --------------------*/
		can = true;
		MINIMO = minC;
		MAXIMO = maxA;
		tot = 2; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){

			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}



		/*------------------CASO 8 --------------------*/
		can = true;
		MINIMO = minC;
		MAXIMO = maxB;
		tot = 1; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){
			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}


		/*------------------CASO 9 --------------------*/
		can = true;
		MINIMO = minC;
		MAXIMO = maxC;
		tot = 2; //porque disminuimos en uno al min y al max

		div = (MAXIMO - MINIMO) / (tam - 1) ;
		aux = MINIMO;

		for (int i = 1; i < tam - 1; ++i)
		{
			aux += div;

			if( abs(sucesion[i]  - aux) == 1)
				tot++;
			else if( abs(sucesion[i] - aux) > 1){
				can = false;
				tot = 10000000;
			}

			if(can == false)
				break;
		}

		if(can){
			if(tot < ans){
				ans = tot;
				ansDiv = div;
			}
		}


		cout << ansDiv<< ' '<< ans << '\n';




	}

	return 0;
}