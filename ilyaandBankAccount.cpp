/*A. Ilya and Bank Account*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num;
	int ultimo, antep;
	cin >> num;

	if(num < 0){

		ultimo = abs(num % 10);
		num /= 10;
		
		antep = abs(num % 10);
		num += antep;

		if(ultimo >= antep)
			num -= antep;
		else
			num-= ultimo;

	}

	cout << num;

	return 0;
}