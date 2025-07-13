/*A. Required Remainder*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	int cases;
	cin >> cases;

	int n, x, y, k;

	while(cases--){
		
		cin >> x >> y >> n;

		if(n % x == y){
			//si la solución ya es esa
			k = n;
		}
		else if(n%x > y){
			//si el modulo es mayor y, es decir entra en el ciclo
			k = n - ((n % x) - y);
		}
		else if(n < x){
			//si n es menor 
			k = y;
		}
		else{
			// si n es mayor pero al modulo no le alcanza en ese ciclo
			k = n - (n%x) - (x - y);
		}

		cout << k << '\n';
	}

	return 0;
}