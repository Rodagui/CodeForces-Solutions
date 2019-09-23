/**/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int fichas;

	cin >> fichas;

	int ladoIzq, ladoDer;

	bool opciones = false;

	int sumaIzq = 0;
	int sumaDer = 0;

	for (int i = 0; i < fichas; ++i)
	{
		cin >> ladoIzq >> ladoDer;

		if((ladoIzq % 2 == 0 and ladoDer % 2 == 1) or (ladoIzq % 2 == 1 and ladoDer % 2 == 0))
			opciones = true;

		sumaIzq += ladoIzq;
		sumaDer += ladoDer;

	}

	if(sumaIzq % 2 == 0 and sumaDer % 2 == 0)
		cout << "0\n";
	else if((sumaIzq % 2 == 0 and sumaDer % 2 == 1) or (sumaIzq % 2 == 1 and  sumaDer % 2 == 0))
		cout << "-1\n";
	else{
		if(opciones)
			cout << "1\n";
		else
			cout << "-1\n";
	}

	return 0;
}