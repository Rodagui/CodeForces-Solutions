/*A. Two Bags of Potatoes*/
/*Se itera sobre los multiplos de k y les resto Y para que
satisfaga la condicion (x+y) % k = 0*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 	
 	long long y, k, n, aux;

 	cin >> y >> k >> n;

 	aux = k;

 	int band = 0;

 	while(aux <= n){

 		if((aux - y) > 0){
 			cout << aux - y <<' ';
 			band = 1;
 		}
 		
 		aux += k;
 	}

 	if(band == 0)
 		cout << "-1\n";
	
	return 0;
}