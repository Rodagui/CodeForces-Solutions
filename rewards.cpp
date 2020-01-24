/*A. Rewards*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	double cups; 
	double medals;
	double shelves;
	double ans = 0.0;
	double aux = 0.0;

	for (int i = 0; i < 3; ++i)
	{
		cin >> cups;
		aux += cups;
	}

	ans = ceil(aux / 5.0);
	aux = 0.0;

//	cerr << ans<< endl;

	for (int i = 0; i < 3; ++i)
	{
		cin >> medals;
		aux += medals;
	}

	ans += ceil(aux / 10.0);

	cin >> shelves;

	if(ans > shelves)
		cout << "NO";
	else
		cout <<"YES";


	return 0;
}