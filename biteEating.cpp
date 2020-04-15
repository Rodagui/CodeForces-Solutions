/*B - Bite Eating*/
#include <bits/stdc++.h>
using namespace std;

using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int minimo = INT_MAX;
	int suma = 0;
	int tam;
	int aux;
	int ans;
	int dif;
	int L;

	cin >> tam >> L;


	vector <int> nums(tam);

	for (int i = 0; i < tam ; ++i)
	{
		nums[i] = i + L;
		suma += nums[i];
	}



	for (int i = 0; i < tam; ++i)
	{
		aux = suma - nums[i];
		dif = abs(aux - suma);

		if(dif < minimo){
			minimo = min(dif, minimo);
			ans = aux;
		}
	}

	cout << ans;

	return 0;
}