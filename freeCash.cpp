/*A. Free Cash*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int maximo = 0;
	int hora, min;
	int casos;
	int aux;

	map <pair <int, int> , int> clientes;

	cin >> casos;
	
	for (int i = 0; i < casos; ++i)
	{
		cin >> hora >> min;

		if(clientes.count({hora, min}))
			clientes[{hora, min}]++;
		else
			clientes[make_pair(hora, min)] = 1;
	}

	map < pair <int, int>, int>:: iterator it;

	for (it = clientes.begin(); it != clientes.end() ; ++it)
	{
		aux = it -> second;
		
		if(aux > maximo)
			maximo = aux;
	}

	cout << maximo;

	return 0;
}