/*A. Rank List*/

#include <bits/stdc++.h>

using namespace std;

inline bool ordena(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second < b.second;

	return a.first > b.first;
}

int main(){

	int teams, place;

	cin >> teams >> place;

	vector< pair<int, int> > results;
	map < pair <int, int>, int> isIn;

	int a, b;
	for (int i = 0; i < teams; ++i)
	{
		cin >> a >> b;
		results.push_back(make_pair(a, b));
	}

	sort(results.begin(), results.end(), ordena);

	for (int i = 0; i < results.size(); ++i)
	{
		
		a = results[i].first;
		b = results[i].second;

		if( isIn.count({a,b}))
			isIn[{a,b}]++;
		else
			isIn[{a,b}]= 1;
	}

	a = results[place - 1].first;
	b = results[place - 1].second;

	cout << isIn[{a,b}] << '\n';


	return 0;
}

