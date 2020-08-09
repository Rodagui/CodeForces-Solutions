/*C. Similar Pairs*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int cases;
	cin >> cases;

	while(cases--){

		int tam;
		int num;
		vector <int> pares;
		vector <int> impares;
		bool ans = true;
		cin >> tam;
		
		for (int i = 0; i < tam; ++i)
		{
			cin >> num;
			if(num % 2 == 0)
				pares.push_back(num);
			else
				impares.push_back(num);
		}

		if(int(pares.size()) % 2 != 0){
			
			ans = false;

			sort(pares.begin(), pares.end());
			sort(impares.begin(), impares.end());

			for (int i = 0; i < int(impares.size()); ++i)
			{
				for (int j = 0; j < int(pares.size()); ++j)
				{
					if(abs(impares[i] - pares[j]) == 1){
						ans = true;
						break;
					}
				}
			}

		}

		if(ans)
			cout << "YES\n";
		else
			cout << "NO\n";

	}


	return 0;
}