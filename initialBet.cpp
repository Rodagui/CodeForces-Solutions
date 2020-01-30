/*A. Initial Bet*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tot = 0;
	int aux;

	for (int i = 0; i < 5 ; ++i)
	{
		cin >> aux;
		tot += aux;
	}

	if( tot == 0 )
		cout << "-1";
	else if(tot % 5 == 0)
		cout << tot / 5;
	else
		cout << "-1";
	return 0;
}