/*A. Next Test*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector <int> nums(3005);
	int tam;
	int pos;
	cin >> tam;

	for (int i = 0; i < tam; ++i){
		cin >> pos;
		nums[pos] = 1;
	}

	for (int i = 1; i < 3005; ++i)
	{
		if(nums[i] == 0){
			cout << i;
			break;
		}
	}

	return 0;
}