/*B. Little Girl and Game*/

#include <iostream>
#include <vector>

using namespace std;

int main(){

	string cadena;
	cin>>cadena;

	vector <int> alfabeto(28);
	int pos;

	for (int i = 0; i < cadena.size(); ++i)
	{
		pos = cadena[i] - 'a';
		alfabeto[pos]++;
	}

	pos = cadena[0] - 'a';

	int impares = 0;

	for (int i = 0; i < 28; ++i)
	{
		if(alfabeto[i] % 2 == 1){
			impares++;
		}
	}

	if( alfabeto[pos] == cadena.size() or impares == 0 ){
		cout<<"First\n";
	}
	else{
		if(cadena.size() % 2 == 1)
			cout<<"First\n";
		else
			cout<<"Second\n";
	}

	return 0;
}