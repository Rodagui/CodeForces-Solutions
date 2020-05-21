/*C - Coder*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	int ans = 0;

		for (int i = 0; i < tam; ++i)
		{
			for (int j = 0; j < tam ; ++j)
			{
				if(i % 2 == 0 and j % 2 == 0)
					ans++;
				else if(i % 2 == 1 and j % 2 == 1)
					ans++;
				
			}
		}

		cout << ans << '\n';
		for (int i = 0; i < tam; ++i)
		{
			for (int j = 0; j < tam ; ++j)
			{
				if(i % 2 == 0 and j % 2 == 0)
					cout << 'C';
				else if(i % 2 == 1 and j % 2 == 1)
					cout << 'C';
				else
					cout << '.';
			}
			cout << '\n';
		}
	

	return 0;
}