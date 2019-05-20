/*B. Sale*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tvs, carry;
	int tot = 0;

	cin >> tvs >> carry;

	vector <int> value(tvs);

	for (int i = 0; i < tvs; ++i){
		cin >> value[i];
	}

	sort(value.begin(), value.end());

	for (int i = 0; i < carry; ++i)
	{
		if(value[i] < 0)
			tot += abs(value[i]);
	}

	cout << tot <<'\n';
	return 0;
}