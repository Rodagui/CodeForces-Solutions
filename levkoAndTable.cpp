/*A. Levko and Table*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, suma;
	cin >> n >> suma;

	for (int i = 0; i < n ; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i == j)
				cout << suma << ' ';
			else
				cout << "0 ";
		}
		cout << '\n';
	}

	return 0;
}