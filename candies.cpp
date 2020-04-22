/*A. Candies*/

#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int casos;

	cin >> casos;

	while(casos--){
		
		bool can = true;
		Long k = 2ll;
		Long aux;
		Long n;
		Long x;

		cin >> n;

		while(can){

			aux = pow(2, k) - 1;
			
			if(n % aux == 0){
				x = n / aux;
				can = false;
			}
			k++;
		}

		cout << x << '\n';
	}

	return 0;
}