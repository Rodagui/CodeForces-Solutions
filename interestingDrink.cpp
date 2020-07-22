/*B. Interesting drink*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int days;
	int happy;
	int money;

	cin >> days;
	
	vector <int> price(days);

	for (int i = 0; i <  days; ++i)
		cin >> price[i];

	sort(price.begin(), price.end());
	
	cin >> happy;
	vector <int>::iterator pos;

	for (int i = 0; i < happy; ++i)
	{
		cin >> money;
		pos = upper_bound(price.begin(), price.end(), money);
		cout << pos - price.begin() << '\n';
	}


	return 0;
}