/*A. Vanya and Cards*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long suma = 0;
	Long tot = 0;
	Long aux;
	int nums;
	int lim;

	cin >> nums >> lim;

	for (int i = 0; i < nums; ++i)
	{
		cin >> aux;
		suma += aux;
	}

	suma = abs(suma);

	for (int i = lim; i > 0 ; --i)
	{
		aux = suma / i;
		tot += aux;
		suma -= (aux * i);

		if(suma == 0)
			break;	
	}

	cout << tot;

	return 0;
}