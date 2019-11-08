/*A. Fancy Fence*/
/*El angulo interior de un poligono regular
  angulo = 180 (n - 2) / n
  n el numero de lados

  Despejamos n y si no es exacta la division (par alos lados 
  del poligono) entonces no se puede */

  
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int casos;

	cin >> casos;

	while(casos--){

		int angulo;

		cin >> angulo;

		if(360 % (180 - angulo) != 0)
			cout << "NO\n";
		else
			cout << "YES\n";
	}


	return 0;
}