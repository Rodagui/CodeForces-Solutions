/*C. Yet Another Broken Keyboard*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char caracter;
	int letras;
	string cad;
	int tam;

	cin >> tam;
	cin >> letras;
	cin >> cad;

	set <char> dispon;

	for (int i = 0; i < letras; ++i)
	{
		cin >> caracter;
		dispon.insert(caracter);
	}
	
	long long ans = 0ll;
	long long cont = 0ll;

	for (int i = 0; i < tam; ++i)
	{
		if(dispon.count(cad[i])){
			cont++;
		}
		else{
			ans += ((cont * (cont + 1ll))/2ll);
			cont = 0ll;
		}
	}


	ans += ((cont * (cont + 1ll))/2ll);
	cout << ans << '\n';

	return 0;
}