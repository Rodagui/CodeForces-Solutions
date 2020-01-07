/*B. Candies Division*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases;
	cin >> cases;

	while(cases--){

		int ans = 0;
		int aux = 0;
		int candies;
		int kids;

		cin >> candies >> kids;

		if(candies % kids == 0){
			ans = candies;
		}
		else{
			aux = candies / kids;
			aux *= kids;
			ans = aux + (kids / 2);

			if(ans > candies)
				ans = candies;
		}

		cout << ans << '\n';
	}
	
	return 0;
}