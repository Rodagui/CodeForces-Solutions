/*A. Circle Line*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tot = 0;
	int aux = 0;
	int ans = 0;
	int tam;

	cin >> tam;

	vector <int> circle(tam);

	for (int i = 0; i < tam; ++i){
		cin >> circle[i];
		tot += circle[i];
	}

	int ini, fin;

	cin >> ini >> fin;

	if(ini > fin)
		swap(ini, fin);

	for (int i = ini; i < fin ; ++i)
		aux += circle[i - 1];

	if(aux < (tot - aux))
		cout << aux;
	else
		cout << tot - aux;
	
	return 0;
}