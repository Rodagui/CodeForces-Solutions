/*A. Life Without Zeros*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long uno, dos, suma;
	long long a = 0, b = 0, c = 0, aux;

	cin >> uno >> dos;
	
	suma = uno + dos;

	long long pot = 1;
	
	while(uno != 0){
		aux = uno % 10;
		if(aux != 0){
			a += (aux*pot);
			pot *= 10;
		}
		uno /= 10;
	}

	pot = 1;

	while(dos != 0){
		aux = dos % 10;
		if(aux != 0){
			b += (aux*pot);
			pot *= 10;
		}
		dos /= 10;
	}

	pot = 1;
	
	while(suma != 0){
		aux = suma % 10;
		if(aux != 0){
			c += (aux*pot);
			pot *= 10;
		}
		suma /= 10;
	}


	aux = a + b;

	if(aux == c)
		cout << "YES";
	else
		cout << "NO";


	return 0;
}