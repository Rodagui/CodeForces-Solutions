/*A. Jeff and Digits*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cincos = 0;
	int ceros = 0;
	int aux;
	int tam;

	cin >> tam;

	for (int i = 0; i < tam; ++i)
	{
		cin >> aux;
		if(aux == 5)
			cincos++;
		else
			ceros++;
	}

	if(ceros == 0)
		cout << "-1\n";
	else{
		if(cincos < 9)
			cout << "0\n";
		else{
			aux = cincos / 9;
			aux = aux * 9;

			for (int i = 0; i < aux; ++i)
				cout <<"5";

			for (int i = 0; i < ceros; ++i)
				cout<<"0";

			cout << '\n';			
		}
	}

	return 0;
}