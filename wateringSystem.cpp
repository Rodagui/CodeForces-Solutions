/*F. Watering System*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	int hole, waterT, needw;

	cin>>hole>> waterT>> needw;

	vector <int> tam(hole);

	int sumTot = 0;
	int block = 0;

	for (int i = 0; i < hole; ++i)
	{
		cin >> tam[i];
		sumTot += tam[i];
	}

	int valor = tam[0];

	sort(tam.begin(), tam.end(), greater<int>() );
	
	int band = 0;
	
	double res = ((double)valor * (double)waterT) / double(sumTot);

	if(res >= (double)needw){
		cout<<"0\n";
	}
	else{

		for (int i = 0; i < tam.size(); ++i)
		{
			if( valor == tam[i] and band == 0){
				band = 1;
				continue;
			}

			res = ((double)valor * (double)waterT) / (double(sumTot) - (double)tam[i]);
			block++;
			
			if(res >= (double)needw){
				cout<<block<<'\n';
				break;
			}
			else{
				sumTot-= tam[i];
			}
		}

	}

	return 0;
}