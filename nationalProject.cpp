/*F - National Project*/

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

		Long ans = 0;
		Long good;
		Long tam;
		Long aux = 0;
		Long bad;

		cin >> tam >> good >> bad;

		Long need;

		need = tam / 2;
		
		if( tam % 2 == 1)
			need++;
		
		if(good >= tam or good >= need){
			ans = tam;
		}
		else{

			Long a;

			a = need / good;
			
			aux = a * good;

			ans = (good + bad) * a;

			
			if (need - aux > 0)
				ans += need - aux;
			else
				ans -= bad;
			

			if(ans < tam)
				ans = tam;

		}

		cout << ans << '\n';

	}
	return 0;
}