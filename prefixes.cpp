/*A - Prefixes*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam;
	string cad;

	cin >> tam >> cad;

	int tot = 0;

	for (int i = 0; i < tam - 1; i+= 2){

		if(cad[i] == 'a' and cad[i + 1] == 'a'){
			cad[i + 1] = 'b';
			tot++;
		}

		if(cad[i] == 'b' and cad[i+1] == 'b'){
			cad[i] = 'a';
			tot++;
		}
	}


	cout << tot << '\n' << cad << '\n';


	


	return 0;
}