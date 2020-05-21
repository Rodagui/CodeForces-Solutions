/*A - Reconnaissance*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int soldiers;
	Long d;

	cin >> soldiers >> d;
	vector <Long> heights(soldiers);
	vector <Long> ans(soldiers);

	for (int i = 0; i < soldiers; ++i)
		cin >> heights[i];

	sort(heights.begin(), heights.end());

	for (int i = 0; i < soldiers; ++i)
	{

		for (int j = i + 1; j < soldiers ; ++j)
		{
			if(heights[j] - heights[i] <= d){
				ans[i]++;
			}
			else{
				break;
			}
		}
	}

	Long total = 0ll;

	for (int i = 0; i < soldiers ; ++i)
	{
		total += ans[i];
	}

	cout << total * 2ll;

	return 0;
}