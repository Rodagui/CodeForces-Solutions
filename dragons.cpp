/*A. Dragons */
#include <bits/stdc++.h>

using namespace std;
using Number = long long;

inline bool comparador(const pair<int, int>& a, const pair<int, int>& b);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	bool can = true;
	long long fza;
	int dragons;

	cin >> fza >> dragons;

	vector < pair <int, int> > figth(dragons);

	for (int i = 0; i < dragons; ++i)
		cin >> figth[i].first >> figth[i].second;

	sort(figth.begin(), figth.end(), comparador);

	for (int i = 0; i < dragons; ++i){
		
		if(fza > figth[i].first)
			fza += figth[i].second;
		else
			can = false;
	}

	if(can)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}


inline bool comparador(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second > b.second;

	return a.first < b.first;
}
