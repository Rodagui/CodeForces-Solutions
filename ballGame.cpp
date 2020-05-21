/*B - Ball Game*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int childs;
	cin >> childs;

	int tiros = childs - 1;
	int cont = 1;
	int act = 1;
	

	while(tiros--){

		if(cont > 1)
			cout << ' ';

		act += cont;

		if(act > childs){
			act = act % childs;
		}
		cout << act;
		cont++;

	}

	return 0;
}