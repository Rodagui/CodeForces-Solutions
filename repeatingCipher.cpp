/*A. Repeating Cipher*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int tam;
	cin >> tam;
 
	vector <char> word(tam);
 
	for (int i = 0; i < tam; ++i)
	{
		cin >> word[i];
	}
 
	int indice = 1;
	for (int i = 0; i < tam; i+= indice)
	{
		cout << word[i];
		indice++;
	}
	
	return 0;
}