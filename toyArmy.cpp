/*A. Toy Army
el numero maximo de soldados que pueden
morir es equilibrando la smuertes por turno de 
cada jugador*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	long long soldiers;

	cin >> soldiers;

	cout << soldiers * 3ll / 2ll;

	return 0;
}