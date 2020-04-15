/*A - Fifty-Fifty*/
#include <bits/stdc++.h>
using namespace std;

using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	set <char> letras;
	string cad;

	cin >> cad;

	for (int i = 0; i < cad.size(); ++i)
	{
		letras.insert(cad[i]);
	}

	if(letras.size() == 2){
		cout << "Yes";
	}
	else{
		cout << "No";
	}

	return 0;
}