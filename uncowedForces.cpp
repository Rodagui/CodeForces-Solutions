/*A. Uncwed Forces*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <double> tiempos(5);
	vector <double> valor  = {500.0, 1000.0, 1500.0, 2000.0, 2500.0};
	vector <double> wrongs(5);
	int malos; 
	int buenos;

	for (int i = 0; i < 5; ++i)
		cin >> tiempos[i];

	for (int i = 0; i < 5; ++i)
		cin >> wrongs[i];

	cin >> buenos >> malos;

	double ans = 0.0;
	double aux = 0.0;

	for (int i = 0; i < 5; ++i)
	{
		aux = max(valor[i]*0.3, ((1 - (tiempos[i] / 250.0)) * valor[i] ) - (50 * wrongs[i]));
		ans += aux;	
	}

	ans += (buenos * 100);
	ans -= (malos * 50);
	
	cout << ans; 

	return 0;
}