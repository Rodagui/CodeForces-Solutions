/*A. Amusing Joke*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string anfitrion;
	string invitado;
	string pilaLetras;

	cin >> anfitrion >> invitado >> pilaLetras;

	vector <int> uno(26);
	vector <int> dos(26);

	int cod;

	for (int i = 0; i < anfitrion.size(); ++i){
		cod = anfitrion[i] - 65	;
		uno[cod]++;
	}

	for (int i = 0; i < invitado.size(); ++i){
		cod = invitado[i] - 65	;
		uno[cod]++;
	}

	for (int i = 0; i < pilaLetras.size(); ++i){
		cod = pilaLetras[i] - 65	;
		dos[cod]++;
	}

	if(dos == uno)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}