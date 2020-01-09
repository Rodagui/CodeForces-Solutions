/*A. Line to Cashier*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	int ans = 100000000;
	int cashiers;
	int aux = 0;
	int items;

	cin >> cashiers;

	vector <int> persons(cashiers);

	for (int i = 0; i < cashiers; ++i)
		cin >> persons[i];

	
	for (int i = 0; i < cashiers; ++i)
	{	
		aux = 0;

		for (int j = 0; j < persons[i]; ++j)
		{
			cin >> items;
			aux +=  15 + (5 * items);
		}

		if(aux < ans)
			ans = aux;
	}		

	cout << ans;

	return 0;
}