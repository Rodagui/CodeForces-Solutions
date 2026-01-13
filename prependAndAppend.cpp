/*C. Prepend and Append*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	string cad;
	int posIni;
	int posFin;
	int cases;
	int tam;

	cin >> cases;

	while(cases--){
		
		cin >> tam;
		cin >> cad;

		posFin = tam - 1;
		posIni = 0;

		while(tam >= 2){

			if(cad[posFin] == cad[posIni])
				break;

			posFin--;
			posIni++;

			tam -= 2;
		}

		cout << tam << '\n';

	}


	return 0;

}