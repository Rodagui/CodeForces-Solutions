/*B. Kill 'Em All*/
#include <bits/stdc++.h>
 
using namespace std;
using Long = long long;
 
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int queries;
 
	cin >> queries;
 
	while(queries--){
		Long monsters, radio;
		cin >> monsters >> radio;
 
		vector <Long> posiciones(monsters);
 
		for (int i = 0; i < monsters; ++i)
			cin >> posiciones[i];
		
		sort(posiciones.begin(), posiciones.end());
 
		posiciones.resize(unique(posiciones.begin(), posiciones.end()) - posiciones.begin());
 
		monsters = posiciones.size();
 
		if(monsters == 1){
			cout << "1\n";
		}
		else{
 
			Long izq, der, middle, ans = monsters;
			izq = 0;
			der = monsters - 1;
 
			while( izq <= der){
				
				middle = (der + izq) / 2;
				int pos = monsters - middle - 1;
 
				if( posiciones[pos] - (radio * middle) <= 0 ){
	           		 ans = middle;
	              	 der = middle - 1;
				}
	          	else{
	              izq = middle + 1;
	            }
 
			}
 
			cout << ans << '\n';
 
 
		}
 
	}
 
	
	return 0;
}