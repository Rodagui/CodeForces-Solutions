/*A Prize No One Can Win*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int items;
	Long maxi;

	cin >> items >> maxi;

	int tot = 0;

	vector <Long> prices(items);

	for (int i = 0; i < items; ++i)
		cin >> prices[i];
	

	if(items == 1){
		cout << "1";
	}
	else{

		sort(prices.begin(), prices.end());


		if( prices[0] + prices[1] > maxi)
			cout << "1";
		else{

			for (int i = 0; i < items - 1; ++i)
			{
				if(prices[i] + prices[i + 1] <= maxi)
					tot = i + 1 + 1;
				
				else
					break;
			}

			cout << tot << '\n';

		}
			
	}

	return 0;
}