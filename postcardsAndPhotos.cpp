/*A. Postcards and photos*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cadena;

	cin >> cadena;

	int aux = 1;
	int ans = 1;



	for (int i = 1; i < cadena.size(); ++i)
	{
		if(cadena[i] == cadena[i - 1]){
			
			aux++;
			if(aux > 5){
				aux = 1;
				ans++;
			}
		}
		else{
			aux = 1;
			ans++;
		}
	}

	cout << ans;

	return 0;
}