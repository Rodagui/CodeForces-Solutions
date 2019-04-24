/*A. Cheering*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string cadena;
	int tam, A = 0, B = 0;

	cin>>cadena;

	tam = cadena.size();

	for (int i = 0; i < tam; ++i)
	{
		if(cadena[i] == 'L' and i+2 < tam and cadena[i+1] == 'S' and cadena[i+2] == 'C')
			A++;

		if(cadena[i] == 'P' and i+3 < tam and cadena[i+1] == 'C' and cadena[i+2] == 'M' and cadena[i+3] == 'S')
			B++;
	}

	if(A > B)
		cout<<"LSC\n";
	else if(A < B)
		cout<<"PCMS\n";
	else
		cout<<"Tie\n";
	

	return 0;
}