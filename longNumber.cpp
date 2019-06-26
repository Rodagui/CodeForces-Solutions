/*B - Long Number */

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int digitos;
	string numero;
	vector <char> valor(9);
	cin >> digitos >> numero;
	string 
	aux = numero;
	bool inicio = false;

	for (int i = 0; i < 9; ++i)
		cin >> valor[i];

	int nvo, val, pos;

	for (int i = 0; i < digitos; ++i)
	{

		val = numero[i];
		pos = numero[i] - '0' - 1;
		nvo = valor[pos];

		if(nvo > val){
			aux[i] = nvo;
			inicio = true;
		}

		if(inicio == true and nvo < val)
			break;	
	}	

	cout << aux;

	return 0;
}

