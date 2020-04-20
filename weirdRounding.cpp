/*B. Weird Rounding*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	string cad;
	int pot;

	cin >> cad >> pot;

	int ans = 0;
	int aux = 0;
	int tam = (int)cad.size();
	int dif;

	if(tam > pot){

		for (int i = tam - 1; i > 0; --i)
		{
			if(cad[i] != '0'){
				ans++;
			}
			else{

				aux++;

				if(aux == pot){
					break;
				}
			}
		}

		if(aux < pot){
			ans = tam - 1;
		}
	}
	else{
		ans = tam - 1;
	}
	
	cout << ans;

	return 0;
}