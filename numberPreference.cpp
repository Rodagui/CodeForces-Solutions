/*Number Preference*/

#include <bits/stdc++.h>

using namespace std;
using Number = unsigned long long;
int main(){
	
	Number friends;

	cin >> friends;
	int caso;
	Number cuantos, num, tot=0, maximo = 1, k=0;
	map <Number, Number> numeros;
	Number cta = 0, unos=0;

	while(friends--){
		
		cin>>caso>>cuantos;
		
		if(caso == 1)
			unos++;

		while(cuantos--){
			cin>> num;
			if(caso == 1){

				k = 1;
				if( numeros.count(num) == 0){
					numeros[num] = 1;
					
				}
				else if(numeros[num] != 0){
					numeros[num]++;
				}
				
			}

			if(caso == 2){
				
				if(numeros.count(num) == 0)
					cta++;

				numeros[num] = 0;
			}
		}
	}

	
	if(k == 0){
		tot = 1000000000000000000ULL - cta;
	}
	else{

		map<Number, Number>::iterator i;
		for ( i = numeros.begin(); i != numeros.end() ; ++i)
		{
			if(i->second == unos){
				tot++;
			}

			
		}

	}

	cout<<tot;	

	return 0;
}