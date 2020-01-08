/*A. Shaass and Oskols*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int wires;
	int query;
	int bird;
	int pos;

	cin >> wires;

	vector <int> arr(wires);

	for (int i = 0; i < wires; ++i)
		cin >> arr[i];
	

	cin >> query;

	for (int i = 0; i < query; ++i)
	{
		cin >> pos >> bird;
		pos--;

		if( pos - 1 >= 0)
			arr[pos - 1] +=  bird - 1;
		
		if(pos + 1 < wires)
			arr[pos + 1] += arr[pos] - bird;

		arr[pos] = 0;
	}

	for (int i = 0; i < wires; ++i)
	{
		cout << arr[i] <<  '\n';
	}

	return 0;
}