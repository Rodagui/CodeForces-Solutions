/*B. Choosing Laptop*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int minimo = 2000;
	int ans;
	int laps;

	cin >> laps;
	vector <int> options(laps, 1);
	vector <int> speed(laps);
	vector <int> cost(laps);
	vector <int> ram(laps);
	vector <int> hdd(laps);

	for (int i = 0; i <laps; ++i)
		cin >> speed[i] >> ram[i] >> hdd[i] >> cost[i];

	for (int i = 0; i < laps; ++i)
	{
		for (int j = 0; j < laps; ++j)
		{
			if(speed[i] < speed[j] and ram[i] < ram[j] and hdd[i] < hdd[j])
				options[i] = 0;
		}
	}


	for (int i = 0; i < laps; ++i)
	{
		if(options[i] == 1 and cost[i] < minimo){
			ans = i+1;
			minimo = cost[i];
		}
	}

	cout << ans;
	return 0;
}