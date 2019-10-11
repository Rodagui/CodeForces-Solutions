/*B. File Name*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int band = 0;
	int tot = 0;
	string cad;
	int tam;

	cin >> tam;
	cin >> cad;

	for (int i = 0; i < tam; ++i)
	{
		if(cad[i] == 'x')
			band++;
		else
			band = 0;

		if(band >= 3 )
			tot++;
	}

	cout << tot;

	return 0;
}