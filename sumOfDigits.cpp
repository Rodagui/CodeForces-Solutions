/*B. Sum of Digits*/
#include <bits/stdc++.h>

using namespace std;
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string cadena;

	cin >> cadena;

	long long num = 0, copy;
	long long aux;
	int dig;
	
	if(cadena.size() == 1)
		cout << "0";
	else{

		int cta = 1;

		for (int i = 0; i < cadena.size() ; ++i)
		{
			dig = cadena[i] - '0';
			num += (long long)dig;
		}


		while(num >= 10ll){


			copy = num;
			aux = 0ll;

			while(copy > 0ll){
				dig = copy % 10ll;
				aux += dig;
				copy /= 10;
			}

			num = aux;
			cta++;

		}

		cout << cta;

	}


	return 0;
}