/*A. Sereja and Bottles*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	map <int, vector <int>> types;
	int numBottles;
	int tot = 0;

	cin >> numBottles;

	vector <int> canOpen(numBottles);
	vector <int> canGo(numBottles);
	
	int a, b;


	for (int i = 0; i < numBottles; ++i)
	{
		cin >> a >> b;

		if(types.count(a) == 0)
			types[a].push_back(i);
		else
			types[a].push_back(i);

		canGo[i] = b;
	}


	for (int i = 0; i < numBottles; ++i)
	{
		int typeB;
		typeB = canGo[i];

		if(types.count(typeB) == 1){

			int tam = types[typeB].size();

			for (int j = 0; j < tam ; ++j)
			{
				
				int indice = types[typeB][j];
				if(indice != i){
					canOpen[indice] = 1;
				}
			}

		}
	}



	for (int i = 0; i < canOpen.size(); ++i)
	{
		if( canOpen[i] == 0)
			tot++;
	}

	cout << tot << '\n';


	return 0;
}