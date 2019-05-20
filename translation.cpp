/*A. Translation*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string original;
	string inversa;
	bool iguales = true;
	cin >> original >> inversa;
	
	int tam = original.size();

	if(original.size() != inversa.size())
		iguales = false;
	else{
		
		for (int i = 0; i < tam; ++i){
			if(original[i] != inversa[tam - i - 1] ){
				iguales = false;
				break;
			}
		}
	}

	if(iguales)
		cout << "YES\n";
	else
		cout << "NO\n";
	

	return 0;
}