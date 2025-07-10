/*A. Mishka and Game*/
#include <bits/stdc++.h>
using namespace std;


int main(){

	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int rounds;

	cin >> rounds;

	int m, c;
	int totMishka = 0, totChris = 0 ;

	while(rounds--){
		cin >> m >> c;

		if(m > c)
			totMishka++;
		else if(c > m)
			totChris++;
	}

	if(totMishka > totChris)
		cout << "Mishka";
	else if(totChris > totMishka)
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";

	return 0;
}