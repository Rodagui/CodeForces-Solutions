/*A. Anton and Letters*/
/*En vez de usar el set, se puede crear un arreglo de tamaño 26 que son las letras
se hace la resta de la letra que se ingresó menos 'a' y se obtiene la posicion, 
se marca y al final se recorre ese arreglo, si esta marcado se suma a la respuesta*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string letters;
	set <int> total;

	while(cin >> letters){
		
		for (int i = 0; i < letters.size(); ++i)
		{
			if(isalpha(letters[i]))
				total.insert(letters[i] - 'a');

		}
	}

	cout << (total.size());


	return 0;
}