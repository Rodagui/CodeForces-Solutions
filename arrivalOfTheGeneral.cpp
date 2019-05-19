/*A. Arrival of the General*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int menor = 103; 
	int mayor = -1; 
	int big = 0, little = 0;
	int tot = 0;
	int tam;
	int aux;
	
	cin >> tam;

	for (int i = 1; i <= tam; ++i){
		cin >> aux;

		if(aux > mayor){
			mayor = aux;
			big = i;
		}

		if(aux <= menor){
			menor = aux;
			little = i;
		}
	}

	if( big > little){
		tot = big - 1;
		tot += tam - (little + 1);
	}
	else{
		tot = big - 1;
		tot += tam - little;
	}

	cout << tot <<'\n';

	return 0;
}