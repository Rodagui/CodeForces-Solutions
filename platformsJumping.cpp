/*C. Platforms Jumping*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ancho;
	int plat;
	int dist;
	int extra = 0;
	int tot = 0;

	cin >> ancho >> plat >> dist;
	dist--;

	vector <int> longitudes(plat);

	for (int i = 0; i < plat; ++i)
	{
		cin >> longitudes[i];
		tot += longitudes[i];
	}

	extra = dist * (plat + 1);
	tot += extra;

	if(tot >= ancho){

		cout << "YES\n";
		int num = 1;

		tot -= extra;

		if(tot == ancho){

			for (int i = 0; i < longitudes.size(); ++i)
			{

				for (int j = 0; j < longitudes[i]; ++j)
					cout << num << ' ';

				num++;

			}

		}
		else{

			vector <int> aux(plat + 2);

			int pos = 0;
			
			while(tot != ancho){
				
				if((tot + dist) <= ancho){
					aux[pos] = dist;
					pos++;
					tot += dist;
				}
				else{
					aux[pos] = ancho - tot;
					tot += aux[pos];
				}

			}
			
			int band = 0;

			for (int i = 0; i < longitudes.size(); ++i)
			{

				for (int j = 0; j < aux[i] ; ++j)
				{
					cout << "0 ";
					band++;
				}

				for (int j = 0; j < longitudes[i]; ++j)
				{
					cout << num << ' ';
					band++;
				}

				num++;


			}

			if( band < ancho){
				for (int i = 0; i < ancho - band; ++i)
				{
					cout << "0 ";
				}
			}

		}




	}
	else{
		cout << "NO";
	}



	return 0;
}