#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;
	int tam;
	int numA;
	int posB;
	int totalA;

	while(cases--){

		cin >> tam;
		vector <int> arr(tam);

		totalA = 0;


		for (int i = 0; i < tam; ++i)
		{
			cin >> arr[i];

			if(i == 0){
				numA = arr[i]; 	//guardamos el primer numero
				totalA++;		//llevamos la cuenta que es 1
			}
			else{
				if(arr[i] != numA )		//ya guardamos un numero y lo comparamos con el que lee ahora
					posB = i;			//si son diferentes guardo la posicion del ultimo que leí, que es diferente al primero
				else
					totalA++;			//si son iguales quiere decir que el de la primera posicion es el que se repite
			}
		}

		if(totalA == 1)					//si mi total del primer numero es solo 1 quiere decir que esta en la primera posicion y no se repitio
			cout << "1\n";
		else
			cout << posB + 1<< "\n";	//si no fue asi fue entonces el que leimos que es diferente y del cual guardamos la possicion
		
	}
	

	return 0;
}