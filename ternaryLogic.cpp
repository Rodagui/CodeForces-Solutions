/*B. Ternary Logic*/

#include <bits/stdc++.h>

using namespace std;

string convierteBaseTres( int n);
int convierteDecimal(string cad);

int main(){

	int a, c;
	int dif;
	string auxiliar = "";

	string A, C;
	string B = "";	
	cin >> a >> c;


	A = convierteBaseTres(a);
	C = convierteBaseTres(c);


	if(A.size() < C.size()){
		dif = C.size() - A.size();

		for (int i = 0; i < dif; ++i)
			auxiliar += '0';

		A = auxiliar + A;
		
	}

	else{

		dif = A.size() - C.size();

		for (int i = 0; i < dif; ++i)
			auxiliar += '0';

		C = auxiliar + C;

	}

	for (int i = 0; i < A.size(); ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if((A[i] - '0' + j) % 3 == C[i] - '0'){
				B += (j + '0');
				break;
			}
		}
	}

	cout << convierteDecimal(B);
	
	return 0;
}

string convierteBaseTres(int n)
{
	int aux = 1;
	char dig;
	string num = "";

	while(n != 0){

		dig = (n % 3) + '0';
		num += dig;

		n /= 3;

	}

	reverse(num.begin(), num.end());

	return num;
}

int convierteDecimal(string cad){

	int num = 0;

	for (int i = 0; i < cad.size(); ++i)
	{
		num *= 3;
		num += (cad[i] - '0');
	}

	return num;
}