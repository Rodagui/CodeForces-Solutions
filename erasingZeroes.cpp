/*A - Erasing Zeroes*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;
	cin >> casos;

	while(casos--){

		string cad;
		cin >> cad;

		int tam = cad.size();
		
		bool separados = false;
		bool var = false;
		int aux = 0;
		int ini;
		int fin;
		
		for (int i = 0; i < tam ; ++i)
		{
			if(cad[i] == '1' and var == false){
				ini = i;
				aux = 1;
				var = true;
			}


			if(cad[i] == '1'){
				fin = i;
			}
			else if(cad[i] == '0' and aux == 1){
				aux = 2;
			}
			
			if (cad[i] == '1' and aux == 2)
			{
				separados = true;
			}
		}



		if(separados == false){
			cout << "0\n";
		}
		else{
			int ans = 0;
			for (int i = ini; i < fin ; ++i)
			{
				if(cad[i] == '0'){
					ans++;
				}
			}

			cout << ans << '\n';
		}

	}
	return 0;
}