/*A. Magnets*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases;

	cin >> cases;
	cases--;

	string magnet;

	cin >> magnet;

	int ans = 1;
	string aux;

	while(cases--){
		cin >> aux;

		if(aux != magnet){
			ans++;
			magnet = aux;
		}
	}

	cout << ans;

	return 0;
}