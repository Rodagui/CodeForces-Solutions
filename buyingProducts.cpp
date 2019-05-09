/*Buying Products*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases, shops, things;

	cin>>cases;

	while(cases--){

		vector <int> prices;
		int a, b, c;

		cin>>shops>>things;

		for (int i = 0; i < shops; ++i)
		{
			cin >> a >> b >>c;

			if(a > b and a > c){
				prices.push_back(b);
				prices.push_back(c);
			}

			if(b > a and b > c){
				prices.push_back(a);
				prices.push_back(c);
			}

			if(c > a and c > b){
				prices.push_back(b);
				prices.push_back(a);
			}

		}

		sort(prices.begin(), prices.end());
		int tot = 0;

		for (int i = 0; i < things; ++i){
			tot += prices[i];
		}

		cout<<tot<<'\n';

	}
	


	return 0;

}