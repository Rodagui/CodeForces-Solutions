/*B. Dreamoon and WiFi*/

#include <bits/stdc++.h>
using namespace std;

void creaCadena(const string& cad, int pos, string ans, const int& tam);
vector <string> res;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string original;
	string cad;

	cin >> original >> cad;

	int ini = 0;

	for (int i = 0; i < original.size(); ++i)
	{
		if(original[i]== '+')
			ini++;
		else
			ini--;
	}

	int tam = original.size();
	string ans ="";
	creaCadena(cad, 0, ans, tam);

	int opciones = res.size();
	int iguales = 0;

	for (int i = 0; i < res.size(); ++i)
	{
		int suma = 0;

		for (int j = 0; j < res[i].size(); ++j)
		{
			if(res[i][j] == '+')
				suma++;
			else
				suma--;	
		}

		if(suma == ini)
			iguales++;

	}

	double porcent = 0.0;

	porcent = 1.00 / (double)opciones * (double)iguales;

	cout << fixed << setprecision(12) << porcent;

	return 0;
}


void creaCadena(const string& cad, int pos, string ans, const int& tam){

	string cad1 = ans;
	string cad2 = ans;
	char c;

	c = cad[pos];
	if(cad1.size() == tam){
		res.push_back(cad1);
		return;
	}

	if(cad2.size()== tam){
		res.push_back(cad2);
		return;
	}

	if(c == '?' ){
		cad1 += '+';
		cad2 += '-';

		creaCadena(cad, pos + 1, cad1, tam);
		creaCadena(cad, pos + 1, cad2, tam);
	}
	else{
		cad1 += c;
		creaCadena(cad, pos + 1, cad1, tam);
	}

	return;

}