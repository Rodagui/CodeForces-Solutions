/*A. Soroban*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num;
	int aux;
	cin >> num;
	string cad;

	if(num == 0)
		cout << "O-|-OOOO";

	while(num){
		cad="O-|-OOOO";
		aux = num % 10;

		if(aux < 5){
			swap(cad[3], cad[3+aux]);
		}
		else if(aux == 5){
			cad[0] = '-';
			cad[1] = 'O';
		}
		else{
			cad[0] = '-';
			cad[1] = 'O';
			swap(cad[3], cad[aux - 2]);
		}

		cout << cad << '\n';

		num /= 10;

	}
	return 0;
}