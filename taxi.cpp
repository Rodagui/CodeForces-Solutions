/*B. Taxi*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int unos = 0;
	int tres = 0;
	int ans = 0;
	int dos = 0;
	int tam;
	int aux;

	cin >> tam;

	for (int i = 0; i < tam; ++i)
	{
		cin >> aux;

		if(aux == 4)
			ans++;
		else if(aux == 3)
			tres++;
		else if(aux == 2)
			dos++;
		else 
			unos++;
	}

	//cerr << unos << ' ' << dos << ' ' << tres << ' ' << ans << endl;

	ans += tres;

	if(tres > 0 and unos > 0){
		if(unos > tres)
			unos -= tres;
		else
			unos = 0;
	}

	if(unos <= dos*2 ){
		aux = unos / 2;

		if(unos % 2 == 1)
			aux++;

		dos -= aux;
		ans += aux;
		unos = 0;

		if(dos > 0){
			if(dos % 2 == 0)
				ans += (dos / 2);
			else
				ans += (dos / 2) + 1;
		}
	}
	else{
		if(dos == 0){
			ans += (unos / 4);
			if(unos % 4 != 0)
				ans++;
		}
		else{
			aux = dos * 2;
			unos -= aux;
			ans += dos;

			ans += (unos / 4);
			if(unos % 4 != 0)
				ans++;

		}
	}

	cout << ans;
	
	return 0;
}