/*A. Roma and Lucky Numbers*/
#include <bits/stdc++.h>

using namespace std;

bool cuenta(int num, int limi);

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	int limite;
	int nums;
	int n;

	cin >> nums >> limite;

	for (int i = 0; i < nums; ++i)
	{
		cin >> n;
		if( cuenta(n, limite) )
			ans++;
	}

	cout << ans;

	return 0;
}

bool cuenta(int num, int limi){

	int lucky = 0;
	int dig;
	while(num > 0){
		dig = num % 10;
		if(dig == 7 or dig == 4)
			lucky++;

		if(lucky > limi){
			return false;
		}
		num/= 10;
	}

	return true;
}