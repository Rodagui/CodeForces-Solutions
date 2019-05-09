/*B. Expecting Trouble*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string viernes;
	double proba;
	int unos = 0;
	int ceros = 0;
	int signos = 0;
	double total = 0.0;

	cin>>viernes>> proba;

	for (int i = 0; i < viernes.size(); ++i)
	{
		if(viernes[i] == '1')
			unos++;
		if(viernes[i] == '0')
			ceros++;
		if(viernes[i] == '?')
			signos++;
	}

	total = (proba * (double) signos ) + (double) unos;
	total = total / (ceros + unos + signos);

	cout << fixed << setprecision(5) << total << "\n";


	return 0;

}