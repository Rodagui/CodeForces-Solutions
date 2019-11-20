/*A. Presents*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int friends;
	int pos;
	cin >> friends;

	vector <int> gifts(friends);

	for (int i = 1; i <= friends ; ++i)
	{
		cin >> pos;
		pos--;
		gifts[pos] = i;
	}

	for (int i = 0; i < friends; ++i)
	{
		cout << gifts[i] << ' ';
	}

	return 0;
}