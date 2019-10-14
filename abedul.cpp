/*Problema A – Abedul*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string cadena;

	cin >> cadena;

	int tam = cadena.size();

	for (int i = 0; i < tam - 1; ++i)
	{
		cout << cadena[i];
	}

	cout << "ic";

	cout << cadena[tam - 1];

	return 0;
}