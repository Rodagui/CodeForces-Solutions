/*A. Vitaly and Night*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int floors;
	int rooms;
	int a, b;

	cin >> floors >> rooms;

	for (int i = 0; i < floors ; ++i)
	{
		for (int j = 0; j < rooms ; ++j)
		{
			cin >> a >> b;

			if(a or b)
				ans++;
		}
	}

	cout << ans;


	return 0;
}