/*A. Saitama Destroys Hotel*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int pasajeros;
	int llegada;
	int tot = 0;
	int floors;
	int ant;
	int dif;
	int piso;

	vector < pair <int, int> > paradas; 

	cin >> pasajeros >> floors;

	for (int i = 0; i < pasajeros ; ++i)
	{
		cin >> piso >> llegada;
		paradas.push_back(make_pair(piso, llegada));
	}

	sort(paradas.begin(), paradas.end(), greater <pair <int, int> > ());

	ant = floors;

	for (int i = 0; i < pasajeros; ++i){

		dif = ant - paradas[i].first;
		//cerr << paradas[i].first << ' ' << paradas[i].second << ' ' << dif << endl;
		ant = paradas[i].first;

		tot += dif;

		if(paradas[i].second > tot)
			tot += (paradas[i].second - tot);
	}

	tot += ant;

	cout << tot;


	return 0;
}