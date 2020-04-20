/*A. Minutes Before the New Year*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	int cases;
	cin >> cases;
 
	while(cases--){
		
		int hora, min;
		
		cin >> hora >> min;
 
		int ans = 0;
		int aux;
 
		hora++;
 
		aux = 60 - min;
 
		ans+= aux;
 
		aux = 24 - hora;
		ans+= (60 * aux);
			
		cout << ans << '\n';
	}
 
	return 0;
}