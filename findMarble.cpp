/*B. Find Marble*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int glasses, ini, fin;
	int band = 0;
	int ans = 0;
	int nvaPos;
	int pos;

	cin >> glasses >> ini >> fin;
	ini--;
	fin--;

	vector <int> mov(glasses);

	for (int i = 0; i < glasses ; ++i)
	{
		cin >> mov[i];
		mov[i]--;

	}

	if(ini == fin){
		ans = 0;
	}
	else{

		nvaPos = ini;

		while( fin != nvaPos ){
			nvaPos = mov[nvaPos];
			if(nvaPos == ini){
				ans = -1;
				break;
			}
			ans++;

		}
	}

	cout << ans;

	return 0 ;
}