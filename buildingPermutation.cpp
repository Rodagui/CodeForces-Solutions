/*C. Building Permutation*/
 
#include <bits/stdc++.h>
 
using namespace std;
using LL = long long;
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	LL tam;
	LL j = 1;
	LL ans = 0;
 
	cin >> tam;
 
	vector <LL> nums(tam);
 
	for (int i = 0; i < tam; ++i)
	{
		cin >> nums[i];
	}
 
	sort(nums.begin(), nums.end());
 
	for (int i = 0; i < tam; ++i, ++j)
	{
		ans += abs(j - nums[i]);
	}
 
	cout << ans;
 
	return 0;
}