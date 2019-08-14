/*A. Hotelier*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tam;
	string cad;

	cin >> tam >> cad;

	vector <int> rooms(10);

	for (int i = 0; i < tam ; ++i)
	{
		if(cad[i] == 'L'){

			for (int j = 0; j < 10 ; ++j){
				if(rooms[j] == 0){
					rooms[j] = 1;
					break;
				}
			}
		}

		else if(cad[i] == 'R'){

			for (int j = 9; j >= 0 ; --j){
				if(rooms[j] == 0){
					rooms[j] = 1;
					break;
				}
			}
		}
		else{

			int go = cad[i] - '0';
			rooms[go] = 0;
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << rooms[i];
	}

	return 0;
}