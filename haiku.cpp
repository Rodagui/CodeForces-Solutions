/*A. Haiku*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	bool ans = true;
	int aux;
	int caso = 1;
	string linea;

	while(getline(cin, linea)){
		
		aux = 0;

		for (int i = 0; i < linea.size(); ++i)
		{
			if(linea[i] == 'a' or linea[i] == 'e' or linea[i] == 'i' or linea[i] == 'o' or linea[i] == 'u')
				aux++;
		}

		if(caso == 1 or caso == 3){
			if(aux != 5)
				ans = false;
			caso++;
		}
		else{
			if(aux != 7)
				ans = false;
			caso++;
		}

	}

	if (ans)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}