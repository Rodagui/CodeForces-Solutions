/*A. Chips*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long walruses, chips, res, suma = 0;
	int i = 1;

	cin >> walruses >> chips;
	
	suma = (walruses*(walruses+1)) / 2;
	res = chips % suma;

	while(res - i >= 0){
		res -= i;
		i++;
	}

	cout << res;

	return 0;
}