/*A. Games*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int teams;
	int guest;
	int home;

	cin >> teams;

	vector < pair <int, int> > colors;
	
	for (int i = 0; i < teams; ++i)
	{
		cin >> home >> guest;
		colors.push_back(make_pair(home, guest));
	}
	
	for (int i = 0; i < teams; ++i)
	{
		home = colors[i].first;

		for (int j = 0; j < teams ; ++j)
		{
			if(j == i)
				continue;

			guest = colors[j].second;

			if(home == guest)
				ans++;
		}
	}	

	cout << ans;
	return 0;
}