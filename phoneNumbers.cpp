/*E - Phone numbers*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tam;
	string num;

	cin >> tam >> num;

	if(tam % 2 == 0){
		for (int i = 0; i < tam - 1; i+= 2)
		{
			if(i > 0 and i % 2 == 0)
				cout << '-';

			cout << num[i] << num[i + 1];
		}
	}
	else{
		cout << num[0] << num[1] << num[2];
		for (int i = 3; i < tam - 1 ; i+= 2)
		 {
		 	if(i % 2 == 1)
		 		cout << '-';

		 	cout << num[i] << num[i + 1];
		 } 
	}

	return 0;
}