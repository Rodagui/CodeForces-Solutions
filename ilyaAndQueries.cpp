/*B. Ilya and Queries*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad;

	cin >> cad;

	int tam = cad.size();
	vector <int> iguales(tam);
	vector <int> acum(tam);

	for (int i = 0; i < tam - 1; ++i)
	{
		if(cad[i] == cad[i + 1])
			iguales[i + 1] = 1;
	}

	for (int i = 0; i < tam; ++i)
	{
		if(i > 0 )
			acum[i] += acum[i - 1] + iguales[i];
		else
			acum[0] = iguales[0];

	}

	int queries, l, r;
	cin >> queries;

	for (int i = 0; i < queries; ++i)
	{
		cin >> l >> r;

		cout << acum[r - 1] - acum[l - 1] << '\n';
	}


	return 0;
}