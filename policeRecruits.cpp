/*A. Police Recruits*/

#include<bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int polices = 0;
	int ans = 0;
	int casos;
	int n;

	cin >> casos;

	for (int i = 0; i < casos; ++i)
	{
		cin >> n;
		if(n == -1 and polices == 0)
			ans++;
		else if(n == -1 and polices > 0)
			polices--;
		else
			polices += n;
	}

	cout << ans;

	return 0;
}