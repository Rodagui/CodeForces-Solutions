/*A. Vasya and Socks*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int have;
	int mod;

	cin >> have >> mod;

	int dia = 0;

	while(have){
		dia++;

		if(dia % mod != 0)
			have--;
	}
	cout << dia;

	return 0;
}