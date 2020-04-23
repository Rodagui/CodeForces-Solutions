/*B - The New Year: Meeting Friends*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <int> arr(3);
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr.begin(), arr.end());

	int ans = 0;

	ans = arr[2] - arr[1];
	ans += (arr[1] - arr[0]);

	cout << ans;
	return 0;
}