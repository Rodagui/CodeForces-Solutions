/*C. Book Reading*/
#include <bits/stdc++.h>

using namespace std;
using Long = unsigned long long;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	Long suma;

	int casos;

	cin >> casos;

	while(casos--){

		suma = 0;
      
		Long paginas, m, num, dig, aux;

		cin >> paginas >> m;

		dig = m % 10; 
		aux = m;

		if(dig == 0 or m > paginas){
			cout << "0\n";
			
		}
		else{

			vector <Long> unidades;

	      	unidades.push_back(dig);
	      
			while( dig != 0){
				aux += m;

				dig = aux % 10;
				unidades.push_back(dig);
			}

			num = paginas / aux;

			for (int i = 0; i < unidades.size(); ++i)
			{
				suma += (unidades[i] * num);
			}
			
	      	aux = aux * num;

			while(aux <= paginas){
				dig = aux % 10;
				suma += dig;
				aux += m;
			}

			cout << suma << '\n';
		}


	}

	return 0;
}