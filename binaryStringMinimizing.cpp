/*Binary String Minimizing*/
#include <bits/stdc++.h>
using Long = long long;
using namespace std;


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;

	cin >> casos;

	while(casos--){

		Long cambios;
		Long tam;
		Long pos;
		string cad;

		cin >> tam >> cambios >> cad;

		tam = cad.size();
		vector <Long> acum(tam);

		for (Long i = 0; i < tam; ++i)
		{
			if(cad[i] == '1')
				acum[i] = 1ll;

			if(i > 0)
				acum[i] += acum[i - 1ll];

		}


		for (Long i = 0; i < tam; ++i)
		{
			if(cambios <= 0)
				break;

			if(cad[i] == '0'){

				if(acum[i] <= cambios)
					pos = i - acum[i];
				else
					pos = i - cambios;

				swap(cad[i], cad[pos]);

				cambios -= acum[i];
			}
		}

		cout << cad  << '\n';

	}

	return 0;
}