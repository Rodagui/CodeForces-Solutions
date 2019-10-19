/*A. Hit the Lottery*/
#include <bits/stdc++.h>

using namespace std;


int main(){
	
	vector <int> bills = {100, 20, 10, 5, 1};
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int num, aux, copy;
	int tot = 0;

	cin >> num;

	copy = num;

	for (int i = 0; i < 5; ++i)
	{
		aux = copy / bills[i];

		tot += aux;
		copy = copy - (aux * bills[i]);
		
	}

	cout << tot;

	return 0;
}		