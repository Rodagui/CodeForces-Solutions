/* B1. Social Network (easy and hard version)*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int onScreen;
	int cont = 0;
	int msjs;
	int id;
	int tam;
	int pos; 
 
 
	cin >> msjs >> onScreen;
 
	set <int> ides;
	vector <int> pila;
 
	for (int i = 0; i < msjs; ++i)
	{
		cin >> id;
 
		if(cont < onScreen){
          if(ides.count(id) == 0){
			ides.insert(id);
			pila.push_back(id);
			cont++;
          }
		}
		else{
 
			if(ides.count(id) == 0){
				
				tam = pila.size();
				pos = tam - onScreen;
 
				pila.push_back(id);
				int elem = pila[pos];
				ides.erase(elem);
				ides.insert(id);
 
			}
 
		}
	}
 
 
	cout << ides.size() << '\n';

	cont = 0;
 
	for (int i = pila.size() - 1; i >= 0 ; --i)
	{
		if(cont == onScreen)
			break;	
 
		cout << pila[i] << ' ';
		cont++;

	}
 
	return 0;
}