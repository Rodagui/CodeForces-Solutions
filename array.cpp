/*A. Array*/
#include <bits/stdc++.h>
using namespace std;

int main(){

	vector <int> positivos;
	vector <int> negativos;
	vector <int> ceros;

	int tam;
	int num;

	cin >> tam;


	for (int i = 0; i < tam; ++i)
	{
		cin >> num;

		if(num < 0)
			negativos.push_back(num);
		else if(num > 0)
			positivos.push_back(num);
		else
			ceros.push_back(num);
		
	}

	if(positivos.size() == 0){
		num = negativos.back();
		positivos.push_back(num);

		negativos.pop_back();
		
		num = negativos.back();
		positivos.push_back(num);

		negativos.pop_back();
	}

	if(negativos.size() % 2 == 0){
		num = negativos.back();
		ceros.push_back(num);
		negativos.pop_back();
	}

	cout << negativos.size() << ' ';
	
	for (int i = 0; i < negativos.size(); ++i)
	 cout << negativos[i] << ' ';
	
	cout << '\n';

	cout << positivos.size() << ' ';

	for (int i = 0; i < positivos.size(); ++i)
	 cout << positivos[i] << ' ';

	cout << '\n';

	cout << ceros.size() << ' ';
	
	for (int i = 0; i < ceros.size(); ++i)
	 cout << ceros[i] << ' ';
	

	return 0;
}