/*A. Soldier and Bananas*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long price, money, want, aux;
	long long ans = 0ll;


	cin >> price >> money >> want;

	aux = (want * (want + 1ll)) / 2ll;
	aux = price * aux;

	if(money < aux){
		ans = aux - money;
	}

	cout << ans;


	return 0;
}