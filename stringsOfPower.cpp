/*B - Strings of Power*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){	
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	string cadena;
 
 
	cin >> cadena;
 
	int cta = 0;
	long long tot = 0;
	int aux = 0;
	int tam;
	int i;
	int ultimo = -1;
	int indiceNvo;
 
	tam = cadena.size();
 
	vector <int> indicesHeavy;
	vector <int> indicesMetal;
	i = 0;
 
	/*Para guardar los indices donde epieza heavy*/
	while(cadena.find("heavy", i) != string::npos){
	
		indiceNvo = cadena.find("heavy", i);
 
		if(indiceNvo != ultimo){
			indicesHeavy.push_back(indiceNvo);
			ultimo = indiceNvo;
		}
 
		i = indiceNvo + 1;
	}
 
	
	ultimo = -1;
	i = 0;
 
	while(cadena.find("metal", i) != string::npos){
	
		indiceNvo = cadena.find("metal", i);
 
		if(indiceNvo != ultimo){
			indicesMetal.push_back(indiceNvo);
			ultimo = indiceNvo;
				//cout << indiceNvo << ' ';
		}
			
		i = indiceNvo + 1;
 
	}
 
	int j = 0;
	int indice;
	int valor = indicesMetal.size();
 
	vector <long long> acumulados(tam);
 
 
	for (i = 0; i < tam ; ++i){
		
		if(j < indicesMetal.size() and i == indicesMetal[j]){
			acumulados[i]++;
			j++;
		}
 
		if(i > 0)
			acumulados[i]+= acumulados[i-1];
 
	}
 
	for (i = 0; i < indicesHeavy.size() ; ++i){
	
		indice = indicesHeavy[i];
		tot += acumulados[tam - 1] - acumulados[indice];
 
	}
 
	cout << tot << '\n';
 
	return 0;
}