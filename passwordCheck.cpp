/*A. Password Check*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad;
	cin >> cad;

	int tam;
	int mayus = 0;
	int minus = 0;
	int digit = 0;

	tam = cad.size();

	if(tam >= 5){
		for (int i = 0; i < tam ; ++i)
		{
			if( isalpha(cad[i])){
				if(islower(cad[i]))
					minus++;
				else
					mayus++;
			}

			if(isdigit(cad[i]))
				digit++;
		}

		if(minus > 0 and mayus > 0 and digit > 0)
			cout << "Correct";
		else
			cout << "Too weak";
	}
	else{
		cout << "Too weak";
	}

	return 0;
}