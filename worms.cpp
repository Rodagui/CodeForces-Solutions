/*B. Worms*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
		int pile, queries;
	
		cin >> pile;
	
		vector <int> acum(pile);

		for(int i = 0; i < pile; i++){
			 
				cin >> acum[i];
			
				if(i > 0){
					acum[i] += acum[i - 1];
				}
		}
	
		int ans;
	
		cin >> queries;
		
		while(queries--){
			int q;
			cin >> q;
			
			int izq, der;
			izq = 0;
			der = pile - 1;
			
			while(izq <= der){
				
				int middle;
				middle = (izq + der) / 2;
				
				if( acum[middle] < q){
					izq = middle + 1;
				}
				else{
					ans = middle;
					der = middle - 1;
				}
				
				
			}
			
			cout << ans + 1<< '\n';
		}
	
		
		

	return 0;
}