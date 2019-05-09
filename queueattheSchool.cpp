/*Queue at the School*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int tam, ciclos;
	string cad;

	cin >> tam >> ciclos >> cad;

	for (int i = 0; i < ciclos ; ++i){

		for (int j = 0; j < tam - 1; ++j){

			if(cad[j] == 'B' and cad[j+1] == 'G'){
				swap(cad[j], cad[j+1]);
				j++;
			}
			
		}
	
	}

	cout << cad << '\n';


	return 0;
}