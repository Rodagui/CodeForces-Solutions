/*A. Wizards and Demonstration*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double people, wizards, porcent;

	cin >> people >> wizards >> porcent;

	double aux = people / 100;
	aux = ceil(aux * porcent);

	if(wizards >= aux)
		aux = 0;
	else
		aux = abs(aux - wizards);

	cout << aux;

	return 0;
}