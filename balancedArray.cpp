/*B. Balanced Array*/

#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;

	cin >> casos;

	while(casos--){

		int tam;
		cin >> tam;

		int mitad = tam / 2;
		bool can = false;

		if(mitad * 2 == tam){
			if(mitad % 2 == 0){
				can = true;
			}
		}

		if(can){

			vector <Long> pares;
			vector <Long> impares;

			Long sumaPar = 0ll;
			Long sumaImpar = 0ll;

			Long a = 2ll;

			for (int i = 0; i < mitad ; ++i)
			{
				pares.push_back(a);
				sumaPar += a;
				a += 2ll;
			}

			a = 5ll;

			for (int i = 0; i < mitad; ++i)
			{
				impares.push_back(a);
				sumaImpar += a;
				a+= 2ll;
			}

			a = sumaImpar - sumaPar;

			int t;
			t = (int) pares.size();
			t--;

			if(a > pares[t]){
				cout << "YES\n";
				pares[t] += a;
				for (int i = 0; i < pares.size(); ++i)
				{
					cout << pares[i] << ' ';
				}

				for (int i = 0; i < impares.size(); ++i)
				{
					cout << impares[i] << ' ';
				}

				cout << '\n';

			}
		}
		else{
			cout << "NO\n";
		}

	}
	return 0;
}