/*A. Magic Numbers*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string linea;

	cin >> linea;

	bool valida = true;
	int tam = linea.size();

	for (int i = 0; i < tam ; ++i){
		
		if(linea[i] != '1')
			valida = false;
		else{
			if(i+1 < tam and linea[i+1] == '4'){
				if(i + 2 < tam and linea[i + 2] == '4')
					i += 2;
				else
					i += 1;
			}
		}
	}

	if(valida)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}