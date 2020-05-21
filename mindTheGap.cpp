/*D - Mind the Gap*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int landings;
	int schedule;
	int aux;

	cin >> landings >> schedule;

	vector <int> minuto(landings); 

	int h;
	int m;
	for (int i = 0; i < landings ; ++i)
	{
		cin >> h >> m;
		minuto[i] = h*60 + m;

	}

	bool can = false;

	if(minuto[0] >= schedule + 1){
		cout << "0 0";
		can = true;
	}
	else{

		for (int i = 0; i < landings - 1; ++i)
		{	
			aux = minuto[i + 1] - minuto[i] - 2;

			if(aux >= 2 * schedule){
				aux = minuto[i] + 1 + schedule;
				can = true;

				cout << aux / 60 << ' ' << aux % 60;
				
				break;
			}
			
		}

	}

	if(can == false){
		aux = minuto[landings - 1] + 1 + schedule;
		cout << aux / 60 << ' ' << aux % 60;
	}

	return 0;
}