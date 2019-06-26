/*F - Balanced Team */

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int students;

	cin >> students;

	vector <int> level(students);

	for (int i = 0; i < students ; ++i)
		cin >> level[i];

	sort(level.begin(), level.end());

	int maximo = 0, mayor = 0, minimo = 0, tot= 0;
	int j = 0;

	minimo = level[0];

	for (int i = 0; i < students; ++i){
		
		maximo = level[i];
		
		if((maximo - minimo) <= 5){
			tot++;
		}
		else{
			j++;
			minimo = level[j];
			
		}

		if(tot > mayor){
			mayor = tot;
		}

	}

	cout << mayor <<'\n';

	return 0;
}
