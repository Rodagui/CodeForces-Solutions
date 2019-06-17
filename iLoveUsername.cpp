/*A. I_love_%username%*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int mayor, menor;
	int total = 0;
	int contests;
	int aux;

	cin >> contests;
	cin >> mayor;

	menor = mayor;

	for (int i = 1; i < contests ; ++i){
		
		cin >> aux;

		if(aux > mayor){
			mayor = aux;
			total++;
		}

		if(aux < menor){
			menor = aux;
			total++;
		}
	}

	cout << total <<'\n';

	return 0;
}