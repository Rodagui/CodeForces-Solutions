/*A. Uniform String*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;

	cin >> casos;

	while(casos--){

		int tam, letras, aux, i;

		cin >> tam >> letras;

		aux = tam / letras;

		for (i = 0; i < letras; ++i)
		{
			for (int j = 0; j < aux; ++j)
			{
				cout << char (i + 'a');
			}
		}

		if(tam % letras != 0){
			aux = tam % letras;
			for (int j = 0; j < aux; ++j)
			{
				cout << char(j + 'a');
			}
		}

		cout << '\n';

	}
	
	return 0;
}