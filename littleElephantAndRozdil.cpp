/**A. Little Elephant and Rozdil*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int min = 1000000001;

	int cuantas = 0;
	int cities;
	int aux;
	int ans;

	cin >> cities;
	

	for (int i = 1; i <= cities; ++i){
		
		cin >> aux;

		if(aux == min)
			cuantas++;

		if(aux < min){
			min = aux;
			cuantas = 1;
			ans = i;
		}

	}

	if(cuantas == 1)
		cout << ans <<'\n';
	else
		cout << "Still Rozdil\n";
	
	return 0;
}