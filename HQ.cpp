/*A. HQ9+*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	string cadena;

	cin >> cadena;

	bool can = false;

	for (int i = 0; i < cadena.size(); ++i){
		if(cadena[i] == 'H' or cadena[i] == 'Q' or cadena[i] == '9')
			can = true;
	}

	if(can)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}