/*C - Three Piles of Candies*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int cases;

	unsigned long long a, b, c, suma;

	cin >> cases;
	
	while(cases--){

		suma = 0;

		cin >> a >> b >> c;

		suma = a + b + c;

		suma /= 2;

		cout << suma << '\n';

	}

	return 0;
}