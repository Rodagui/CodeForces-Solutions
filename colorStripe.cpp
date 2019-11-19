/*C. Color Stripe*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	string cad;
	string copyA;
	string copyB;
	int colors;
	int tam;
	int min = 0;
	int aux = 0;

	cin >> tam >> colors >> cad;

	if(colors == 2){

		copyA = cad;
		copyB = cad;

		for (int i = 0; i < tam; ++i)
		{
			if(i % 2 == 0){
				if(cad[i] != 'A'){
					aux++;
					copyA[i] = 'A';
				}
			}
			if(i % 2 == 1){
				if(cad[i] != 'B'){
					aux++;
					copyA[i] = 'B';
				}

			}
		}

		for (int i = 0; i < tam; ++i)
		{
			if(i % 2 == 0){
				if(cad[i] != 'B'){
					min++;
					copyB[i] = 'B';
				}
			}
			if(i % 2 == 1){
				if(cad[i] != 'A'){
					min++;
					copyB[i] = 'A';
				}

			}
		}

		if(min < aux){
			cout << min << '\n';
			cout << copyB;
		}
		else{
			cout << aux << '\n';
			cout << copyA;
		}

	}

	else{

		for (int i = 1; i < tam; ++i)
		{
			if(cad[i] == cad[i - 1]){
				
				if( i + 1 < tam){
					
					if('A' != cad[i - 1] and 'A' != cad[i + 1]){
						cad[i] = 'A';
						ans++;
					}
					else if( 'B' != cad[i - 1] and 'B' != cad[i + 1]){
						cad[i] = 'B';
						ans++;
					}
					else if('C' != cad[i - 1] and 'C' != cad[i + 1]){
						cad[i] = 'C';
						ans++;
					}

				}
				else{

					if('A' != cad[i - 1] ){
						cad[i] = 'A';
						ans++;
					}
					else if( 'B' != cad[i - 1] ){
						cad[i] = 'B';
						ans++;
					}
					else if('C' != cad[i - 1] ){
						cad[i] = 'C';
						ans++;
					}
				}
			}
			
		}

		cout << ans << '\n';
		cout << cad;
	}

	return 0;
}