/*B. Playing Cubes*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	int minimo;
	int maximo;
	int aux;

	vector <int> cad;
	cin >> a >> b;

	if(a == b){
		cout << a - 1 << ' ' << b;
	}
	else{

		if(a <= b){
			maximo = b;
			minimo = a;
		}
		else {
			maximo = a;
			minimo = b;
		}

		if(minimo % 2 == 1){
			cad.push_back(0);
			minimo--;
		}

		aux = minimo + maximo;

		while(aux--){

			if(maximo >= 2){
				cad.push_back(1);
				cad.push_back(1);
				maximo-= 2;
			}
			else if(maximo == 1){
				cad.push_back(1);
				maximo--;
			}

			if(minimo >= 2){
				cad.push_back(0);
				cad.push_back(0);
				minimo-=2;
			}
			else if(minimo == 1){
				cad.push_back(0);
				minimo--;
			}
		}

		int same = 0;
		int dif = 0;

		for (int i = 0; i < cad.size() - 1; ++i)
		{
			//cout << cad[i] << ' ';

			if( cad[i] == cad[i+1] )
				same++;
			else
				dif++;
		}


		cout << same << ' ' << dif;
	}


	return 0;
}