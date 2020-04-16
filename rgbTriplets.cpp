/*D - RGB Triplets*/
#include <bits/stdc++.h>
using namespace std;

using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cad;
	int tam;

	cin >> tam >> cad;

	vector <Long> acumR(tam);
	vector <Long> acumG(tam);
	vector <Long> acumB(tam);

	Long ans = 0;

	for (int i = tam - 1; i >= 0; --i)
	{
		if (i + 1 < tam)
		{
			acumR[i] = acumR[i + 1];
			acumG[i] = acumG[i + 1];
			acumB[i] = acumB[i + 1];
		}
		
		if(cad[i] == 'R')
			acumR[i]++;
		else if(cad[i] == 'G')
			acumG[i]++;
		else
			acumB[i]++;
	}

	int dist;

	for (int i = 0; i < tam; ++i)
	{
		if(cad[i] == 'R'){
			for (int j = i + 1; j < tam ; ++j)
			{
				if(cad[j] == 'G'){
					
					dist = j - i;
					ans += acumB[j];

					if(j + dist < tam){
						if(cad[j + dist] == 'B')
							ans--;
					}
				}

				if(cad[j] == 'B'){
					
					dist = j - i;
					ans += acumG[j];

					if(j + dist < tam){
						if(cad[j + dist] == 'G')
							ans--;
					}
				}
			}
		}

		else if(cad[i] == 'G'){
			for (int j = i + 1; j < tam ; ++j)
			{
				if(cad[j] == 'R'){
					
					dist = j - i;
					ans += acumB[j];

					if(j + dist < tam){
						if(cad[j + dist] == 'B')
							ans--;
					}
				}

				if(cad[j] == 'B'){
					
					dist = j - i;
					ans += acumR[j];

					if(j + dist < tam){
						if(cad[j + dist] == 'R')
							ans--;
					}
				}
			}
		}
		else{
			for (int j = i + 1; j < tam ; ++j)
			{
				if(cad[j] == 'R'){
					
					dist = j - i;
					ans += acumG[j];

					if(j + dist < tam){
						if(cad[j + dist] == 'G')
							ans--;
					}
				}

				if(cad[j] == 'G'){
					
					dist = j - i;
					ans += acumR[j];

					if(j + dist < tam){
						if(cad[j + dist] == 'R')
							ans--;
					}
				}
			}
		}

	}

	cout << ans;

	return 0;
}