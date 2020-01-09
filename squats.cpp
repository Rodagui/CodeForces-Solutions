/*A. Squats*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int hamsters;
	int dwn = 0;
	int up = 0;
	int middle;
	int ans = 0;
	string cad;

	cin >> hamsters >> cad;

	middle = hamsters / 2;

	for (int i = 0; i < hamsters; ++i)
	{
		if(cad[i] == 'x')
			dwn++;
		else
			up++;
	}

	int aux = 0;

	if(dwn < middle){

		ans = middle - dwn;

		for (int i = 0; i < hamsters; ++i)
		{
			if(cad[i] == 'X'){
				cad[i] = 'x';
				aux++;

				if(aux == ans)
					break;
			}
		}
	}

	if(up < middle){

		ans = middle - up;

		for (int i = 0; i < hamsters; ++i)
		{
			if(cad[i] == 'x'){
				cad[i] = 'X';
				aux++;

				if(aux == ans)
					break;
			}
		}

	}

	cout << ans << '\n'<<cad;

	return 0;
}