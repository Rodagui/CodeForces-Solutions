/*B. Bear and Finding Criminals*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);

	int ans = 0;
	int cities;
	int minimo;
	int ant;
	int ade;
	int der;
	int izq;
	int pos;

	cin >> cities >> pos;

	vector <int> criminals(cities);

	for (int i = 0; i < cities; ++i)
		cin >> criminals[i];

	if(criminals[pos - 1] == 1)
		ans++;

	izq = pos - 1;
	der = cities - pos;

	if(izq < der)
		minimo = izq;
	else
		minimo = der;

	for (int i = 1; i <= minimo; ++i)
	{
		ant = pos - i - 1;
		ade = pos + i - 1;

		if( criminals[ant] + criminals[ade] == 2)
			ans+=2;
	}

	izq -= minimo;
	der -= minimo;


	if(izq > 0){
		for (int i = 0; i < izq; ++i)
		{
			if(criminals[i] == 1)
				ans++;
		}
	}

	if(der > 0){

		pos = pos + minimo;

		for (int i = pos; i < cities ; ++i)
			if(criminals[i] == 1)
				ans++;
	}
	
	cout << ans;

	return 0;
}