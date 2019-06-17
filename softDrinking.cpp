/*A. Soft Drinking*/

#include <bits/stdc++.h>

using namespace std;

int main(){


	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int friends;
	int bottles;
	int milis;
	int limes;
	int slices;
	int salt;
	int nl, np;
	int milisTot ;

	cin >> friends >> bottles >> milis >> limes >> slices >> salt >> nl >> np;

	milisTot = bottles * milis;
	slices *= limes;

	int ans = 0;

	while(milisTot > 0 and slices > 0 and salt > 0){
		
		milisTot -= (nl* friends);
		slices -= friends;
		salt -= (np * friends);

		ans++;

		if(milisTot < 0 or slices < 0 or salt < 0)
			ans--;

	}

	cout << ans <<'\n';

	return 0;
}