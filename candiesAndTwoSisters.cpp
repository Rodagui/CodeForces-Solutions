/*A. Candies and Two Sisters*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases;
	cin >> cases;
	int ans; 

	while(cases--){

		int candies;

		cin >> candies;

		ans = candies / 2;

		if(candies % 2 == 0){
			ans--;
		}

		cout << ans << '\n';
	}

	return 0;
}