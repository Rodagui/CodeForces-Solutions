#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);

	string numero;
	int digit;

	cin >> numero;
	
	for (int i = 0; i < numero.size(); ++i)
	{
		digit = numero[i] - '0';


		if(9 - digit < digit){

			if(i == 0 and 9 - digit == 0)
				cout << digit;
			else
				cout << 9 - digit;
		}
		else
			cout << digit;

	}

	return 0;
}