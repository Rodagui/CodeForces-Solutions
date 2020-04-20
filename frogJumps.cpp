/*C. Frog Jumps*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
 
	int cases;
	cin >> cases;
 
	while(cases--){
 
		bool ELES = false;
		int maximo = 1;
		int aux = 0;
		string cad;
 
		cin >> cad;
 
		for (int i = 0; i < cad.size(); ++i)
		{
	
			
			if(cad[i] == 'L'){
				aux++;
				ELES = true;
			}
			else{
				if(aux > maximo)
					maximo = aux;
				
				aux = 0;
			}
 
		}
 
 
		if(aux > maximo)
			maximo = aux;	
 
		if(ELES)
			maximo++;
 
		cout << maximo << '\n';
 
 
	}
	return 0;
}