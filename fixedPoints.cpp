/*B. Fixed Points*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	vector <int> nums(tam);

	for (int i = 0; i < tam ; ++i)
	{
		cin >> nums[i];
	}

	int tot = 0;
	int pos;
	int change = 0;

	for (int i = 0; i < tam ; ++i)
	{
		if( nums[i] == i){
			tot++;
		}
		else{
			if(change == 0){
				pos = nums[i];
				if(nums[pos] == i){
					tot++;
					swap(nums[i], nums[pos]);
					change = 1;
				}
			}
		}
	}

	if(change == 0 and tot < tam)
		tot++;

	cout << tot;

	return 0;
}