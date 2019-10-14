/*C. Letters*/

#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int houses, letters;

	cin >> houses >> letters;

	vector <Long> acum(houses);
	vector <Long> rooms(houses);

	for (int i = 0; i < houses; ++i){
		cin >> rooms[i];
		acum[i] = rooms[i];

		if(i > 0)
			acum[i] += acum[i-1];
	}


	int pos = 0;
	Long query; 
	Long habit = acum[pos];

	for (int i = 0; i < letters; ++i)
	{
		cin >> query;
		
		while( query > habit){
			pos++;
			habit = acum[pos];
		}

		if( pos == 0)
			cout << "1 "<< query << '\n';
		else
			cout << pos + 1 <<' '<< query - acum[pos - 1] << '\n';
		
	}

	return 0;
}