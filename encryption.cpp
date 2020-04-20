/*A. Encryption*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	int tam;
	string cad;

	cin >> tam >> cad;

	int izq;
	int der;
	int tampalin = 0;
	int ans = 0;
	int masLargo = 1;
	int tot = 1;

	for (int i = 0; i < tam; ++i)
	{
		izq = i - 1;
		der = i + 1;
		tampalin = 1;
		
		while(izq >= 0 and der < tam){
			
			if(cad[izq] == cad[der]){
				tampalin+= 2;

				if(tampalin > masLargo){
					masLargo = tampalin;
					tot = 1;
				}
				else if(tampalin == masLargo){
					tot++;
				}
			}
			else{
				break;
			}
			izq--;
			der++;
		}

		if(i + 1 < tam){

			if(cad[i] == cad[i + 1]){
				
				tampalin = 2;

				if(tampalin > masLargo){
					masLargo = tampalin;
					tot = 1;
				}
				else if(tampalin == masLargo){
					tot++;
				}

				izq = i - 1;
				der = i + 2;
			
				while(izq >= 0 and der < tam){
					
					if(cad[izq] == cad[der]){
						tampalin+= 2;

						if(tampalin > masLargo){
							masLargo = tampalin;
							tot = 1;
						}
						else if(tampalin == masLargo){
							tot++;
						}
					}
					else{
						break;
					}
					
					izq--;
					der++;
					
				}

			}		

		}
		

	}

	cout << masLargo << '\n'; 
	if(masLargo == 1){
		cout << tam;
	}
	else{

		cout << tot;
	}
	
	return 0;
}