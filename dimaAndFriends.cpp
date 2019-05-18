/*A. Dima and Friends*/

#include <iostream>

using namespace std;

int main(){
	
	int total = 0;
	int fingers = 0;
	int friends;
	int aux;

	cin >> friends;

	for (int i = 0; i < friends; ++i){
		cin >> aux;
		fingers += aux;
	}

	for (int i = 1; i < 6; ++i)
	{
		if( (fingers + i) % (friends + 1) != 1)
			total++;
	}

	cout << total << '\n';

	return 0;
}