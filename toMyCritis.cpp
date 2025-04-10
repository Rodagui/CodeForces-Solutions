/*A. To My Critics*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();

	int cases;

	cin >> cases;

	while(cases--){

		vector <int> nums(3);

		for (int i = 0; i < 3; ++i)
		{
			cin >> nums[i];
		}

		sort(nums.begin(), nums.end());

		if(nums[1] + nums[2] >= 10)
			cout << "YES\n";
		else
			cout << "NO\n";

	}


	return 0;
}