/*A. Three Friends*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases;

	cin >> cases;

	while(cases--){

		Long ans = 0ll;
		vector <Long> nums(3);

		for (int i = 0; i < 3; ++i)
			cin >> nums[i];
		
		sort(nums.begin(), nums.end());

		if( nums[2] - nums[0] >= 2ll){
			nums[0]++;
			nums[2]--;

			ans = nums[1] -  nums[0];
			ans += nums[2] - nums[0];
			ans += nums[2] - nums[1];
		}

		cout << ans << '\n';

	}

	return 0;
}