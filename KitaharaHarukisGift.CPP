/*A. Kitahara Haruki's Gift*/

#include <iostream>

using namespace std;

int main(){

	int apples;

	cin >> apples;

	int dos = 0, cien = 0;
	int peso;
	int totA = 0; 
	int totB = 0;

	for (int i = 0; i < apples; ++i){
		cin >> peso;

		if(peso == 100){
			cien++;
		}

		if(peso == 200){
			dos++;
		}
	}

	totA = dos/ 2;
	totA *= 200;
	totB = totA;

	if( dos % 2 == 1)
		totA+= 200;

	if(totA > totB){

		while(cien > 0){
			cien--;
			totB += 100;

			if(totA == totB)
				break;
		
		}
	}

	if(cien % 2 == 0 and totA == totB)
		cout << "YES\n";
	else 
		cout << "NO\n";

	return 0;
}