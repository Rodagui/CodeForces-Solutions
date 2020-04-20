/*E. Polycarp and Letters*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	string cad;
	int tam;

	cin >> tam;
	cin >> cad;

	int aux = 0;
	int ans = 0;

	for (int i = 0; i < tam; ++i)
	{
		if(islower(cad[i])){
			
			set <char> letters;
			letters.insert(cad[i]);

			for (int j = i + 1; j < tam ; ++j)
			{
				if(islower(cad[j])){
					letters.insert(cad[j]);
				}
				else{
					break;
				}
			}

			aux = letters.size();
		}

		ans = max(aux, ans);
	}

	cout << ans;
	
	return 0;
}