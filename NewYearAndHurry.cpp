/*E - New Year and Hurry*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int problems;
	int mins;

	cin >> problems >> mins;

	mins = 240 - mins;
	int ans = 0;
	int aux = 0; 

	for (int i = 1; i <= problems; ++i)
	{
		aux += (5 * i);

		if(aux <= mins){
			ans = i;
		}
		else{
			break;
		}
	}

	cout << ans;


	return 0;
}