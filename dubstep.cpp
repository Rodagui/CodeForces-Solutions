/*A. Dubstep*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string cad;

	cin >> cad;

	int tam = cad.size();
	int ultimo;

	string nva ="";
	

	if(tam < 3){
		cout<< cad <<'\n';
	}
	else{
		for (int i = 0; i < tam - 2; ++i){
		if(cad[i]=='W' and cad[i+1] == 'U' and cad[i+2] == 'B'){
			ultimo = i+2;
			i+=2;
			nva += ' ';
		}
		else{
			nva+=cad[i];
		}
	}

	if(ultimo == tam-2){
		nva += cad[tam-1];
	}
	else if(!(cad[tam-1] == 'B' and cad[tam-2] == 'U' and cad[tam-3] == 'W')){
		nva += cad[tam-2];
		nva += cad[tam-1];
	}

	int ini, fin;

	for (int i = 0; i < nva.size(); ++i){
		if(nva[i] != ' '){
			ini = i;
			break;
		}
	}

	for (int i = nva.size() - 1; i >= 0 ; --i){
		if(nva[i] != ' '){
			fin = i;
			break;
		}
	}

	int band = 1;

	for (int i = ini; i <= fin; ++i){
		if(nva[i]==' ' and band == 1){
			cout << ' ';
			band++;
		}
		else if(nva[i] != ' '){
			cout << nva[i];
			band = 1;
		}
	}
	}


	return 0;
}