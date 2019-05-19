/*A. Even Odds*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	unsigned long long ans = 0;
	unsigned long long num, k;
	unsigned long long impares = 0;

	cin >> num >> k;

	if(num % 2 == 1)
		impares = (num/2) + 1;
	else
		impares = num / 2;

	if(k <= impares){
		ans = k + (k -1);
	}
	else{
		k = k - impares;
		ans = k*2;
	}

	cout << ans << '\n';

	return 0;
}