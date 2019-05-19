/*A. Reconnaissance 2*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int soldiers;
	int sold1, sold2;
	int minima = 1001;

	cin >> soldiers;
	vector <int> alturas(soldiers + 1);

	for (int i = 0; i < soldiers; ++i)
	{
		cin >> alturas[i];
	}

	alturas[soldiers] = alturas[0];

	for (int i = 1; i < soldiers + 1 ; ++i)
	{
		if(abs(alturas[i] - alturas[i-1]) < minima){
			minima = abs( alturas[i] - alturas[i - 1]);
			sold1 = i;
			sold2 = i + 1;
		}
	}

	if(sold2 == soldiers + 1)
		sold2 = 1;

	cout << sold1 << ' ' << sold2 << '\n';

	return 0;
}