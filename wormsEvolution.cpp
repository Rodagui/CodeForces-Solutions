/*D - Worms Evolution*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	cin >> tam;

	vector <int> warms(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> warms[i];
	}

	int a, b, c;

	bool can = false;

	for (int i = 0; i < tam; ++i)
	{
		for (int j = 0; j < tam; ++j)
		{
			if(j != i){

				for (int k = 0; k < tam; ++k)
				{
					if(k != i and k != j){

						if(warms[j] + warms[k] == warms[i]){
							a = i;
							b = j;
							c = k;
							can = true;
							break;
						}
					}
				}

				if(can){
					break;
				}
			}
		}

		if(can){
			break;
		}
	}

	if(can){
		cout << a + 1 << ' ' << b + 1 << ' ' << c + 1;
	}
	else{
		cout << "-1";
	}

	return 0;
}