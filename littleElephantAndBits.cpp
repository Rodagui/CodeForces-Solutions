/*A. Little Elephant and Bits*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string cadena;
	int band = 0;
	bool siHayCeros = false;

	cin >> cadena;

	for (int i = 0; i < cadena.size(); ++i)
	{
		if(cadena[i] == '0'){
			siHayCeros = true;
			break;
		}
	}

	if(siHayCeros){
		
		for (int i = 0; i < cadena.size(); ++i){
			
			if(cadena[i] == '0' and band == 0){
				band = 1;
				continue;
			}

			cout << cadena[i];
		}
	}
	else{

		for (int i = 1; i < cadena.size(); ++i)
			cout << cadena[i];
		
	}

	return 0;
		
}