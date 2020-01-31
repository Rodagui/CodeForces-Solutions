/*A. Multiplication Table*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	int num;
	int ans = 0;

	int minimo;

	cin >> tam >> num;

	if(tam < num)
		minimo = tam;
	else
		minimo = num;

	for (int i = 1; i <= minimo; ++i)
		if(num % i == 0 and num / i <= minimo){
			ans++;

		}

	cout << ans;
	


	return 0;
}