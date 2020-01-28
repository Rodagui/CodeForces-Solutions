/*A. Wet Shark and Odd and Even*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Long minImpar = 10000000000;
	Long ans = 0;
	Long aux;
	int num;

	cin >> num;


	for (int i = 0; i < num; ++i)
	{
		cin >> aux;
		ans += aux;	

		if(aux % 2ll == 1ll){
			if(aux < minImpar)
				minImpar = aux;
		}

	}

	if(ans % 2ll == 0ll)
		cout << ans;
	else
		cout << ans - minImpar;
	

	return 0;
}

