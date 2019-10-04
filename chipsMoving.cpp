/*A. Chips Moving*/

#include <bits/stdc++.h>

using namespace std;

int main(){
		
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int chips;

	cin >> chips;

	int coord;
	int pares = 0;
	int impares = 0;

	for (int i = 0; i < chips; ++i)
	{
		cin >> coord;

		if(coord % 2 == 0)
			pares++;
		else
			impares++;
	}

	if(pares <= impares)
		cout << pares << '\n';
	else
		cout << impares << '\n';
	return 0;
}