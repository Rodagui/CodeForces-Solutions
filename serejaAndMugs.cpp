/*A. Sereja and Mugs*/
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int maximo = -1;
	int tot = 0;
	int cups;
	int vol;
	int aux;

	cin >> cups >> vol;

	for (int i = 0; i < cups; ++i)
	{
		cin >> aux;

		if(aux > maximo)
			maximo = aux;

		tot += aux;
	}

	if((tot - maximo) <= vol)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}