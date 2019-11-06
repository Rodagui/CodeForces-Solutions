/*A. Payment Without Change*/
#include <bits/stdc++.h>
using Long = long long;
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	int casos;
 
	cin >> casos;
 
	while(casos--){
 
		Long coins1, coinsn;
		Long valor, aPagar;
		Long aux = 0;
		Long div;
 
		cin >> coinsn >> coins1 >> valor >> aPagar;
 
		div = aPagar / valor;
 
		if(div <= coinsn)
			aux = aPagar - (valor * div);
		else
			aux = aPagar - (valor * coinsn);
 
		if(aux == 0)
			cout << "YES\n";
		else
			if(coins1 >= aux)
				cout << "YES\n";
			else
				cout << "NO\n";
 
	}
 
 
	return 0;
}