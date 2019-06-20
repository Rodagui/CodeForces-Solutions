/*A. Bicycle Chain*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int starsPdal, starsRda;
	
	cin >> starsPdal;
	vector <int> pedal(starsPdal);

	for (int i = 0; i < starsPdal; ++i){
		cin >> pedal[i];
	}

	cin >> starsRda;
	vector <int> rueda(starsRda);

	for (int i = 0; i < starsRda; ++i){
		cin >> rueda[i];
	}


	int valor = 0, maximo = 0, tot = 0;
	
	for (int i = 0; i < starsPdal; ++i){
		
		for (int j = 0; j < starsRda; ++j)
		{
			if(rueda[j] % pedal[i] == 0){
				
				valor = rueda[j] / pedal[i];

				if( valor > maximo){
					maximo = valor;
					tot = 1;
				}
				else if(valor == maximo){
					tot++;
				}
			}

		}
	}

	cout << tot <<'\n';
	

	return 0;
}