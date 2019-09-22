/*C. Nice Garland*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int maximo = 0;
	string linea;
	int cta = 0;
	int tam;

	cin >> tam >> linea;
	string cad = "BGR";
	string nva = "";
	string ans = "";
	int minimo = 2000000;


	do{

			cta = 0;
			nva = "";

			for (int i = 0; i < tam - 2 ; i+=3)
			{
				if(cad[0] != linea[i])
					cta++;

				if(cad[1] != linea[i+1])
					cta++;

				if(cad[2] != linea[i+2])
					cta++;

				nva += cad;

			}	

			if(tam % 3 != 0){

				if(tam % 3  == 1){
					if(cad[0] != linea[tam - 1])
						cta++;

					nva += cad[0];
				}
				else{

					if(cad[0] != linea[tam - 2])
						cta++;
					
					if(cad[1] != linea[tam - 1])
						cta++;

					nva += cad[0];
					nva += cad[1];
				}

			}

			if(cta < minimo){
				minimo = cta;
				ans = nva;
			}

	} while( next_permutation(cad.begin(), cad.end()));

	cout << minimo << '\n' << ans << '\n';


	return 0;
}