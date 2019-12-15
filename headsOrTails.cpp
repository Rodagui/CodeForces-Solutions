/*A. Heads or Tails*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x, y, a, b;

	cin >> x >> y >> a >> b;

	vector <pair <int, int> > posibles;


	for (int i = a; i <= x ; ++i)
	{
		for (int j = b; j <= y ; ++j)
		{
			if(i != j and i > j)
				posibles.push_back(make_pair(i, j));
		}
	}

	cout << posibles.size() << '\n';

	for (int i = 0; i < posibles.size(); ++i)
		cout << posibles[i].first << ' ' << posibles[i].second << '\n';
	

	return 0;
}