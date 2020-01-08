/*A. Combination Lock*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string clave;
	string cad; 
	int ans = 0;
	int tam;
	int a, b;
	int op1;
	int op2;

	cin >> tam;

	cin >> cad >> clave;

	for (int i = 0; i < tam; ++i)
	{
		a = cad[i] - '0';
		b = clave[i] - '0';

		if(a >= b){
			op1 = a - b;
			op2 = 10 - a + b;
		}
		else{
			op1 = b - a;
			op2 = a + (10 - b);
		}

		if(op1 <= op2)
			ans += op1;
		else
			ans += op2;


	}

	cout << ans;

	return 0;
}

