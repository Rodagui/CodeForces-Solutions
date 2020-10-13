#include <bits/stdc++.h>
using namespace std;

int main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);

		int cubes;
		int ans = 0;
		int aux;
		int num = 1 ;

		cin >> cubes;

		while(cubes > 0){

			aux = (num + 1) * num / 2;  
			cubes -= aux; 				

			if(cubes < 0)
				break;
	
			num++;
			ans++;

		}

		cout << ans; 


	return 0;
}