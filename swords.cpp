/*E - Swords*/
#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int types;
	cin >> types;
	Long maximo = -1; 

	vector <Long> leftUnt(types);

	for (int i = 0; i < types; ++i)
	{
		cin >> leftUnt[i];
		maximo = max(maximo, leftUnt[i]);
	}

	Long gcd = 0;

	for (int i = 0; i < types; ++i)
	{
		if(leftUnt[i] < maximo){
			if(gcd == 0){
				gcd = maximo - leftUnt[i];
			}
			else{
				gcd = __gcd(gcd, maximo - leftUnt[i]);
			}
		}
	}

	Long personas = 0;

	if(gcd > 0){
		for (int i = 0; i < types; ++i)
		{
			personas += (maximo - leftUnt[i]) / gcd;
		}
	}

	cout << personas << ' ' << gcd;

	return 0;
}