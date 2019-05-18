/*A. Nearly Lucky Number*/

#include <iostream>

using namespace std;

int main(){

	string numero;

	cin >> numero;

	int total = 0;


	for (int i = 0; i < numero.size(); ++i)
	{
		if(numero[i] == '4' or numero[i] == '7')
			total++;
	}

	if(total == 7 or total == 4)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}