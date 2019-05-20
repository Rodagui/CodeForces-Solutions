/*A. Football*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	map <string, int> score;
	int mayor = 0;
	int games;
	string won;

	cin >> games;
	string team;

	for (int i = 0; i < games; ++i){
		
		cin >> team;

		if(score.count(team))
			score[team]++;
		else
			score[team] = 1;

	}

	map <string, int >::iterator i;
	for (i = score.begin(); i != score.end() ; ++i)
	{
		if(i -> second > mayor){
			mayor = i-> second;
			won = i -> first;
		}
	}

	cout << won <<'\n';

	return 0;
}