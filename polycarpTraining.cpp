/*B. Polycarp Training*/
#include <bits/stdc++.h>

using namespace std;

int main(){

	int tam;
	
	cin >> tam;

	vector <int> numbers(tam);

	for (int i = 0; i < tam; ++i)
	{
		cin >> numbers[i];
	}

	sort(numbers.begin(), numbers.end());

	int dias = 0;
	int band = 1;

	for (int i = 0; i < tam; ++i)
	{
		if( numbers[i] >= band){
			band++;
			dias++;
		}
	}

	cout << dias <<'\n';

	return 0;
}