/*A. Odd sum*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	int der = INT_MAX;
	int izq = -INT_MAX;
	int tam;
	bool posi = false;
	int n;

	int ans = 0;

	cin >> tam;

	for (int i = 0; i < tam; ++i)
	{
		cin >> n;

		if(n > 0){
			posi = true;
			ans += n;
		}
		
		if(abs(n) % 2 == 1){

			if(n < 0){
				izq = max(izq, n);
			}

			if(n > 0){
				der = min(der, n);
			}
		}
		
	}

	if(posi == false){ /**/
		cout << izq;
	}
	else if(ans % 2 == 1){
		cout << ans;
	}
	else if(ans % 2 == 0){

		if(izq == -INT_MAX){
			ans -= der;
		}

		if(der == INT_MAX){
			ans += izq;
		}

		if(izq != -INT_MAX and der != INT_MAX){
			ans = max(ans + izq, ans - der);
		}
		
		cout << ans;

	}

	return 0;
}