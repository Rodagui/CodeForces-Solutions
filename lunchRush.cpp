/*A. Lunch Rush*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int rest;
	long long ttime, fi, ti, aux;
	long long maximo = - 10000000000;

	cin >> rest >> ttime;

	for (int i = 0; i < rest; ++i)
	{
		cin >> fi >> ti;

		if(ti > ttime)
			aux = fi - (ti - ttime);
		else
			aux = fi;

		if(aux > maximo)
			maximo = aux;
	}

	cout << maximo;

	return 0;
}