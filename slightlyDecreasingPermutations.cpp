/*A. Slightly Decreasing Permutations*/
#include <bits/stdc++.h>

using namespace std;
int main(){

	int tam, numsPer;

	cin >> tam >> numsPer;

	vector <int> izq;
	vector <int> der;

	if(numsPer == 0){
		for (int i = 0; i < tam; ++i)
		{
			cout << i+1 << ' ';
		}
	}
	else if(numsPer == 1){

		if(tam == 1)
			cout << "1";
		else{

			for (int i = 2; i <= tam; ++i){
				cout << i <<' ';
			}
			cout << "1";
		}
	}
	else{

		izq.push_back(1);
		int num = 2;
		for (int i = 0; i < numsPer - 1; ++i)
		{
			izq.push_back(num);
			num++;
		}

		int aux = izq.size();
		aux = tam - aux;

		for (int i = 0; i < aux; ++i)
		{
			der.push_back(num);
			num++;
		}

		reverse(izq.begin(), izq.end());

		for (int i = 0; i < der.size(); ++i)
		{
			cout << der[i] << ' ';
		}
		for (int i = 0; i < izq.size(); ++i)
		{
			cout << izq[i] << ' ';
		}


	}

	return 0;
}