/*D - Line++*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int nodos;
	int x, y;

	cin >> nodos >> x >> y;

	vector<int> ans(nodos);

	for (int inicio = 1; inicio <= nodos; ++inicio)
	{
		for (int final = inicio + 1; final <= nodos; ++final)
		{
			// Distancia de inicio a final.
			int dist = 0;

			if (final <= x or inicio >= y)
				dist = final - inicio;
			else
			{
				int d1 = final - inicio;
				int d2 = abs(x - inicio) + 1 + abs(y - final);
				dist = min(d1, d2);
			}

			++ans[dist];
		}
	}

	for (int i = 1; i < nodos; ++i)
		cout << ans[i] << "\n";

	return 0;
}