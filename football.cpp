/*A. Football*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	string players;

	cin >> players;

	int same = 1;
	bool danger = false;

	for (int i = 1; i < players.size(); ++i){
		
		if(players[i] == players[i-1]){
			same++;
			if(same == 7){
				danger = true;
				break;
			}
		}
		else{
			same = 1;
		}
	}

	if(danger)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;

}

