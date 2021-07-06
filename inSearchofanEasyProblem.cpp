/*A. In Search of an Easy Problem*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int people;

	cin >> people;

	bool easy = true;
	int aux;

	while(people--){
		cin >> aux;

		if(aux == 1){
			easy = false;
		}
	}

	if(easy)
		cout << "EASY";
	else
		cout << "HARD";

	return 0;
}