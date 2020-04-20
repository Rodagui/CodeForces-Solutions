/*D - Toy Cars*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;

	cin >> tam;

	int aux;
	vector <vector <int> > mat(tam , vector<int> (tam));

	vector <int> ans(tam);

	for (int i = 0; i < tam; ++i)
	{
		for (int j = 0; j < tam ; ++j)
		{
			cin >> aux;

			if(aux == 1)
				ans[i] = 1;

			if(aux == 2)
				ans[j] = 1;

			if(aux == 3){
				ans[i] = 1;
				ans[j] = 1;
			}
		
		}

	}

	int tot = 0;

	for (int i = 0; i < tam; ++i)
	{
		if(ans[i] == 0)
			tot++;
	}

	cout << tot << '\n';

	for (int i = 0; i < tam; ++i)
	{

		if(ans[i] == 0)
			cout << i +1 << ' ';
	}

	return 0;
}