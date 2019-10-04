/*B. Bad Prices*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int casos;

	cin >> casos;

	while(casos--){

		int days;
		cin >> days;

		vector <int> prices(days);
		vector <int> acum(days);

		for (int i = 0; i < days; ++i)
			cin >> prices[i];
		
		int min = 10000000;
		for (int i = days - 1; i >= 0 ; --i)
		{
			if(prices[i] < min){
				min = prices[i];
			}

			acum[i] = min;
		}

		int tot = 0;

		for (int i = 0; i < days; ++i)
		{
			if(acum[i] < prices[i])
				tot++;
		}

		cout << tot << '\n';


	}

	return 0;
}