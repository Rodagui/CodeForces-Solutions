/*A. Divisibility Problem*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;
	long long a, b;
	long long aux;
	long long ans = 0;
	cin >> casos;

	while(casos--){
		
		cin >> a >> b;

		ans = 0;

		if(a % b != 0ll){
			
			aux = a / b + 1ll;
			aux *= b;
			ans = aux - a;
		}

		cout << ans << '\n';
	}
	return 0;
}