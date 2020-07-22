/*A. Expression*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	int maximo = -1;

	maximo = max(maximo, a + b + c);
	maximo = max(maximo, a * b * c);
	maximo = max(maximo, (a + b) * c);
	maximo = max(maximo, a * (b + c));
	maximo = max(maximo, (a * b) + c);
	maximo = max(maximo, a + (b * c));
	
	cout << maximo;



	return 0;
}