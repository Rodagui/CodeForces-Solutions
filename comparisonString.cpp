/**B. Comparison String*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;
	int tam;
	int maxChars;
	int aux;

	while(cases--){

		maxChars = 0;
		aux = 1;

		cin >> tam;

		vector <char> sings(tam);

		for (int i = 0; i < tam; ++i)
			cin >> sings[i];

		for (int i = 0; i < tam - 1 ; ++i)
		{
			if(sings[i] == sings[i + 1]){
				aux++;
			}
			else{
				aux = 1;
			}

			if(aux >= maxChars)
				maxChars = aux;
		}

		if(tam == 1)
			maxChars = 1;
		
		cout << maxChars + 1<< '\n';
	}


	return 0;
}