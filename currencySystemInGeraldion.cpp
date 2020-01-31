/*A. Currency System in Geraldion*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool can = false;
	int nums;
	int n;

	cin >> nums;

	for (int i = 0; i < nums; ++i)
	{
		cin >> n;

		if(n == 1)
			can = true;
	}

	if(can)
		cout << "-1";
	else
		cout << "1";

	return 0;
}