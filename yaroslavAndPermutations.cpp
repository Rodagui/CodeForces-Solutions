/*A. Yaroslav and Permutations*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, aux;
	bool can = true;

	map < int, int > veces;

	cin >> n;

	for (int i = 0; i < n ; ++i){
		cin >> aux;
		
		if(veces.count(aux))
			veces[aux]++;
		else
			veces[aux] = 1;
	}

	map < int , int >:: iterator i;
	
	for ( i = veces.begin(); i != veces.end() ; ++i){
		if(i -> second > ((n+1) / 2))
			can = false;
	}

	if(can)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}