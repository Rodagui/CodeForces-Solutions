/*B. The Fibonacci Segment*/
#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	Long maximo = 1ll;
	
	cin >> tam;

	if(tam == 1)
		maximo = 1;
	else
		maximo = 2;
	
	vector <Long> fibo(tam);

	for (int i = 0; i < tam; ++i)
		cin >> fibo[i];
	
	Long aux = 2ll;

	for (int i = 2; i < tam; ++i)
	{
		Long suma = fibo[i-1] + fibo[i - 2];
		if(suma == fibo[i]){
			aux++;
		}
		else{
			aux = 2;
		}
		if(aux > maximo)
			maximo = aux;
	}


	cout << maximo;

	return 0;
}