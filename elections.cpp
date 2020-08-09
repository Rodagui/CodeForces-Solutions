/*A. Elections*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int candidates;
	int maxim = -1;
	int ans = 0;
	int cities;
	int votes;
	int index;

	cin >> candidates >> cities;

	vector <int> aux1(candidates);
	vector <int> aux(cities);

	for (int i = 0; i < cities; ++i)
	{
		for (int j = 0; j < candidates ; ++j)
		{
			cin >> votes;
			
			if(votes > maxim){
				maxim = votes;
				index =  j;
			}
		}

		maxim = -1;

		aux[i] = index;

	}

	maxim = -1;

	for (int i = 0; i < cities; ++i)
	{
		index = aux[i];
		aux1[index]++;
	}

	for (int i = 0; i < candidates; ++i)
	{
		if(aux1[i] > maxim){
			maxim = aux1[i];
			ans = i + 1;
		}
	}

	cout << ans;


	return 0;
}