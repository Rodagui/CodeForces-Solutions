/*A - Collecting Coins*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int casos;

	cin >> casos;

	while(casos--){

		long long a, b, c, n, div, aux, auxTot = 0ll;

		long long tot = 0ll;
		bool can = false;

		cin >> a >>  b >> c >> n;

		tot = a + b + c + n;

		if(tot % 3ll == 0ll){

			div = tot / 3ll;
			
			aux = div - a;
			if(aux > 0)
				auxTot += aux;
			
			aux = div - b;
			if(aux > 0)
				auxTot += aux;

			aux = div - c;
			if(aux > 0)
				auxTot += aux;

			if(n == auxTot)
				can = true;
		}

		if(can)
			cout << "YES\n";
		else
			cout << "NO\n";

	}

	return 0;
}