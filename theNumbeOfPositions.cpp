/*A. The number of positions*/

#include <bits/stdc++.h>

using namespace std;

int main(){	

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, a, b;

	cin >> n >> a >> b;

	cout << n + 1 - max(a+1, n-b) <<'\n';

	return 0;
}