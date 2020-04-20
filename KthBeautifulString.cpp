/*B. K-th Beautiful String*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;

	cin >> casos;

	string cad;

	while(casos--){

		Long  n = 0ll;
		Long  ans;
		Long aux;
		Long tam; 
		cad ="";
		int pos;

		cin >> tam >> pos;
		
		for (int i = 0; i < tam; ++i){
			cad += 'a';
		}

	 	for (Long i = 1; i <= LLONG_MAX; ++i)
	 	{
	 		n+= i;
	 		if(n >= pos){
	 			ans = i;
	 			break;
	 		}
	 	}

	 	cad[ans] = 'b';

	 	aux = (ans - 1) * ans / 2;
	 	aux = pos - aux - 1;
	 	cad[aux] = 'b';
	 	
	 	reverse(cad.begin(), cad.end());
	 	cout << cad << '\n';


	}

	return 0;
}