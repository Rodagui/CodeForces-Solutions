/*A. Array Coloring*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	

	ios_base::sync_with_stdio(0);
	cin.tie();
	cout.tie();

	int cases;
	cin >> cases;

	int tam;
	int odd;
	int num;

	while(cases--){

		cin >> tam;
		odd = 0;

		for (int i = 0; i < tam; ++i)
		{
			cin >> num;

			if(num % 2 == 1) 
				odd++;
		}

		if(odd % 2 == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}