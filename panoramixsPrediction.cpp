/*A. Panoramix's Prediction*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	bool isPrime = true;
	int n, raiz, m;
	vector <int> primos;
	cin >> n >> m;


	for (int j = 2; j <= 50; ++j)
	{
		raiz = sqrt(j);
		for (int i = 2; i <= raiz ; ++i)
		{
			if(j % i == 0){
				isPrime = false;
			break;
			}
		}

		if(isPrime)
			primos.push_back(j);
		
		isPrime = true;
	}


	for (int i = 0; i < primos.size(); ++i)
	{
		if(primos[i] == n){
			if(primos[i+1] == m)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}