/*A. Nicholas and Permutation*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans;
	int tam;
	int ini;
	int fin;
	int n;

	cin >> tam;

	for (int i = 1; i <= tam; ++i)
	{
		cin >> n;
		if(n == 1)
			ini = i;
		if(n == tam)
			fin = i;
	}


	if(ini > fin)
		swap(ini, fin);

	if(tam - fin > ini - 1)
		fin = tam;
	else 
		ini = 1;

	cout << fin - ini;


	return 0;
}