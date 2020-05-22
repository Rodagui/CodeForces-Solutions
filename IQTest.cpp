/*D - IQ test*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;

	cin >> tam;

	int pares = 0;
	int impares = 0;
	int impos = -1;
	int parpos = -1;
	int num;

	for (int i = 0; i < tam; ++i){
		cin >> num;
		if(num % 2 == 0){
			pares++;
			parpos = i + 1;
		}
		else{
			impares++;
			impos = i + 1;
		}
	}

	if(impares == 1)
		cout << impos;
	else
		cout << parpos;
	

	return 0;
}