/*borze*/

#include <iostream>

using namespace std;

int main(){

	string cadena;
	int tam, tot = 0;

	cin >> cadena;

	tam = cadena.size();

	for (int i = 0; i < tam - 1; ++i)
	{
		if(cadena[i] == '-'){
			if(cadena[i+1] == '-')
				cout << '2';
			else
				cout << '1';
			i++;
			tot += 2;
		}
		else{
			cout << '0';
			tot++;
		}
	}

	if(tot != tam)
		cout << '0';
	

	return 0;
}